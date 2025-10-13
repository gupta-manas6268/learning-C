import os
from dotenv import load_dotenv

from langchain_core.messages import HumanMessage, AIMessage
from langchain_core.output_parsers import StrOutputParser
from langchain_core.prompts import ChatPromptTemplate, MessagesPlaceholder
from langchain_google_genai import ChatGoogleGenerativeAI

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
    (MessagesPlaceholder(variable_name="history")), # history => from Line - 'A-1'
    ("user", "{input}"),
])
chain = prompt | llm | StrOutputParser()
# With History: Using LangChain (↑)


# Chatbot
history = []            # Line - A-1
print("Hi, I am Albert, how can I help you today?")
while True:
    user_input = input("You: ")
    if user_input == "exit":
        break
    
    # Without History:
    # response = llm.invoke([                         # UR
    #     {"role":"system", "content":system_prompt}, # UR
    #     {"role":"user", "content":user_input}       # UR
    # ])                                              # UR
    # 
    # print(type(response))         #                 # UR
    # print(response.content)       # 'str'           # UR
    # print(f"Albert: {response.content}")            # UR


    # With History: Using Python
    # history.append({"role": "user", "content": user_input})                           # UR
    # print("History: ", history)                                                       # UR
    # 
    # response = llm.invoke([{"role": "system", "content": system_prompt}] + history)   # UR
    # print(f"Albert: {response.content}")                                              # UR
    # history.append({"role": "assistant", "content": response.content})                # UR


    # With History: Using LangChain 
    response = chain.invoke({"input": user_input, "history": history})
    print(f"Albert: {response.content}")
    history.append(HumanMessage(content=user_input))
    history.append(AIMessage(content=response))