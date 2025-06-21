# Run & Debug with Marking Line-31, & understand 
#  'content' variable & How to take Temperature &
#  Weather from it by using Debug-Console by checking
#  each Dictionary-key in 'content'.

# Updated Version "Final_Backend_3301.py".








# Don't commit 'API_KEY'.

import os
from dotenv import load_dotenv  
# (↑) Used for Password-Protection in '.env' file, which is 
#  ignored by '.gitignore' file.

import requests

load_dotenv()
API_KEY = os.getenv('API_KEY')
def get_data(place, forecast_days=None, option=None):
    url = f"https://api.openweathermap.org/data/2.5/forecast?q={place}&appid={API_KEY}"
    response = requests.get(url)
    content = response.json()

    return content

if __name__ == "__main__":
    print(get_data(place="Tokyo",))