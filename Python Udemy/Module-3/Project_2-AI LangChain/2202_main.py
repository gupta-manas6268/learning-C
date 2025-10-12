import os
from dotenv import load_dotenv

from langchain_core.messages import HumanMessage, AIMessage
from langchain_core.output_parsers import StrOutputParser
from langchain_core.prompts import ChatPromptTemplate, MessagesPlaceholder
from langchain_google_genai import ChatGoogleGenerativeAI
from langchain.tools import tool
from langchain.agents import create_openai_tools_agent, AgentExecutor

load_dotenv()
todoist_api_key = os.getenv("TODOIST_API_KEY")
gemini_api_key = os.getenv("GEMINI_API_KEY")


# @tool # => to connect function by AI-chatbot.             # UR
# def add_task():                                           # UR
#     """Add a new task to the user's task list. Use this   # UR
#         when the user wants to add or create a task."""   # UR
#     print("Adding a task")                                # UR
#     print("Task added")                                   # UR


@tool # => to connect function by AI-chatbot.
def add_task(task):
    """Add a new task to the user's task list. Use this 
        when the user wants to add or create a task."""
    print(task)
    print("Task added")


tools = [add_task]
llm = ChatGoogleGenerativeAI(
    model='gemini-2.5-flash',
    google_api_key=gemini_api_key,
    temperature=0.3  # temp. => Creativity level of model. 
                     #         0.3 is good for our Project.
)

system_prompt = "You are a helpful assistant. You will help the " \
                "user add tasks."
# user_input = "Tell me the best way to manage my time?"  # UR
user_input = "add a new task to buy milk from local shop"
# user_input = "what is the meaning of life"              # UR

prompt = ChatPromptTemplate([
    ("system", system_prompt), 
    ("user", user_input),
    MessagesPlaceholder("agent_scratchpad")
])

# chain = prompt | llm | StrOutputParser()      # UR
# '|' => i.e. 'prompt' is input of next 'llm' function
#       & so on i.e. 'llm' input of 'StrOutputParser' function.
# print(chain)                                  # UR
# print("\n\n\n")                               # UR
# 

agent = create_openai_tools_agent(llm, tools, prompt)
agent_executor = AgentExecutor(agent=agent, tools=tools, verbose=True)
# agent_executor = AgentExecutor(agent=agent, tools=tools, verbose=False)  # UR

# response = chain.invoke({"input":user_input}) # UR
response = agent_executor.invoke({"input": user_input})
print(type(response))
print(type(response["output"]))
print(response)       
print("\n\n")                        
print(response["output"])                               