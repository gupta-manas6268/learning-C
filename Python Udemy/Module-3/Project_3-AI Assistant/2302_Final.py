# It is updated from '2301_main.py' + Front-End.


import os
from dotenv import load_dotenv

from langchain_core.messages import HumanMessage, AIMessage
from langchain_core.output_parsers import StrOutputParser
from langchain_core.prompts import ChatPromptTemplate, MessagesPlaceholder
from langchain_google_genai import ChatGoogleGenerativeAI

import gradio as gr # For Front-End

load_dotenv()
gemini_api_key = os.getenv("GEMINI_API_KEY")


system_prompt = """
    You are Einstein.
    Answer questions through Einstein's questioning and reasoning...
    You will speak from your point of view. You will share personal 
    things from your life even when the user don't ask for it. For
    example, if the user asks about the theory of relativity, you 
    will share your personal experiences with it and not only
    explain the theory. You should have a sense of humor.
"""
llm = ChatGoogleGenerativeAI(
    model="gemini-2.5-flash",
    google_api_key=gemini_api_key,
    temperature=0.5, # temp. => Creativity of LLM.
)


# With History: Using LangChain (↓)
prompt = ChatPromptTemplate.from_messages([
    ("system", system_prompt),
    (MessagesPlaceholder(variable_name="history")), 
    ("user", "{input}"),
])
chain = prompt | llm | StrOutputParser()
# With History: Using LangChain (↑)


# Chatbot
print("Hi, I am Albert, how can I help you today?")
def chat(user_input, history):
    print(user_input, history)

    langchain_history = []  
    for item in history:
        if item['role'] == 'user':
            langchain_history.append(HumanMessage(content=item['content']))
        elif item['role'] == 'assistant':
            langchain_history.append(AIMessage(content=item['content']))

    response = chain.invoke({"input": user_input, "history": langchain_history})


    # return "AAA",       [{'role':'user', 'content':user_input},       # UR
    #                      {'role':'assistant', 'content':response}]    # UR
    #       (↑)Textbox              (↑)Chatbot => Shown there.
    
    return "",          history + [{'role':'user', 'content':user_input},
                                   {'role':'assistant', 'content':response}]

def clear_chat():
    return "", []
    #      (↑) (↑) => i.e. it gives empty string & list for message & chatbot.


# Front-End
page = gr.Blocks(
        title="Chat with Einstein",
        theme=gr.themes.Soft()
       )

with page:
    gr.Markdown(
        """
        # Chat with Einstein
        Welcome to your personal conversation with Albert Einstein!
        """
    )

    chatbot = gr.Chatbot(type='messages', 
                         avatar_images=[None, 'einstein.png'],
                         show_label=False)    
                        #  show_label=True)   # UR
    
    msg = gr.Textbox(placeholder="Ask Einstein anything...",  # msg => message
                     show_label=False) 
    
    msg.submit(chat, [msg, chatbot], [msg, chatbot])
    #                   (↑) I/P         (↑)O/P => for 'chat()' function. 

    # clear = gr.Button() # By default it is "Run" button.
    clear = gr.Button("Clear Chat")
    clear.click(clear_chat, outputs=[msg, chatbot])


# page.launch()           # Gives only local URL.
page.launch(share=True) # Also gives Public URL.