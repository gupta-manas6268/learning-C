import os
from dotenv import load_dotenv

from todoist_api_python.api import TodoistAPI

load_dotenv()
todoist_api_key = os.getenv("TODOIST_API_KEY")

todoist = TodoistAPI(todoist_api_key)
todoist.add_task(content="Buy a new sheet")