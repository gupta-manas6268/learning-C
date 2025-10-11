# Updated from '2202_main.py'.

import os
from dotenv import load_dotenv

from langchain_core.messages import HumanMessage, AIMessage
from langchain_core.output_parsers import StrOutputParser
from langchain_core.prompts import ChatPromptTemplate, MessagesPlaceholder
from langchain_google_genai import ChatGoogleGenerativeAI
from langchain.tools import tool
from langchain.agents import create_openai_tools_agent, AgentExecutor

from todoist_api_python.api import TodoistAPI

load_dotenv()
todoist_api_key = os.getenv("TODOIST_API_KEY")
gemini_api_key = os.getenv("GEMINI_API_KEY")


# @tool # => to connect function by AI-chatbot.             # UR
# def add_task():                                           # UR
#     """Add a new task to the user's task list. Use this   # UR
#         when the user wants to add or create a task."""   # UR
#     print("Adding a task")                                # UR
#     print("Task added")                                   # UR


todoist = TodoistAPI(todoist_api_key)
@tool # => to connect function by AI-chatbot.
def add_task(task, description=None): 
# If user gives 'description' then it will add it, 
#  otherwise, None.
    """Add a new task to the user's task list. Use this 
        when the user wants to add or create a task."""
    # print(task)
    # print("Task added")
    todoist.add_task(content=task, description=description)

@tool
def show_tasks():
    """Show all tasks from Todoist. Use this tool when the user
        wants to see their tasks"""
    # tasks = todoist.get_tasks()           # UR
    # print(tasks)                          # UR
    # return tasks                          # UR

    results_paginator = todoist.get_tasks()
    tasks = []
    for task_list in results_paginator:
        print(task_list)            # UR
        for task in task_list:
            # print(task)           # UR
            # print(task.content)   # UR
            tasks.append(task.content)

    return tasks


tools = [add_task]
llm = ChatGoogleGenerativeAI(
    model='gemini-2.5-flash',
    google_api_key=gemini_api_key,
    temperature=0.3  # temp. => Creativity level of model. 
                     #         0.3 is good for our Project.
)

# system_prompt = "You are a helpful assistant. You will help the " \
#                 "user add tasks."
system_prompt = """
You are a helpful assistant.
You will help the user add tasks.
You will help the user show existing tasks. If the user asks to show
 the tasks: for example, "show me the tasks" print tasks to user, in
 a bullet list format with numbering.
"""
# user_input = "Tell me the best way to manage my time?"    # UR
# user_input = "add a new task to buy milk from local shop" # UR
# user_input = "Buy tire" # No description                  # UR
# user_input = "what is the meaning of life"                # UR

prompt = ChatPromptTemplate([
    ("system", system_prompt), 
    MessagesPlaceholder("history"),
    # ("user", user_input),
    ("user", "{input}"),
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
#  
# response = agent_executor.invoke({"input": user_input})
# print(response)       
# print("\n\n")                        
# print(response["output"])    

history = []
while True:
    user_input = input("You: ")
    response = agent_executor.invoke({"input": user_input, "history": history})
    print(response["output"])  

    # history => s.t. AI knows my previous messages.
    history.append(HumanMessage(content=user_input))  
    history.append(AIMessage(content=response["output"]))