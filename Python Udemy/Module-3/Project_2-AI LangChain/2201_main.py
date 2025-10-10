import os
from dotenv import load_dotenv

from langchain_core.messages import HumanMessage, AIMessage
from langchain_core.output_parsers import StrOutputParser
from langchain_core.prompts import ChatPromptTemplate
from langchain_google_genai import ChatGoogleGenerativeAI
from langchain.tools import tool
from langchain.agents import create_openapi_tools_agent, AgentExecutor

load_dotenv()
todoist_api_key = os.getenv("TODOIST_API_KEY")
gemini_api_key = os.getenv("GEMINI_API_KEY")


llm = ChatGoogleGenerativeAI(
    model='gemini-2.5-flash',
    google_api_key=gemini_api_key,
    temperature=0.3  # temp. => Creativity level of model. 
                     #         0.3 is good for our Project.
)

system_prompt = "You are a helpful assistant. You will help the " \
                "user add tasks."
# user_input = "Tell me the best way to manage my time?"  # UR
user_input = "add a new task to buy milk"

prompt = ChatPromptTemplate([
    ("system", system_prompt), 
    ("user", user_input)
])

chain = prompt | llm | StrOutputParser()   
# '|' => i.e. 'prompt' is input of next 'llm' function
#       & so on i.e. 'llm' input of 'StrOutputParser' function.
print(chain)
print("\n\n\n")

response = chain.invoke({"input":user_input})
print(response)