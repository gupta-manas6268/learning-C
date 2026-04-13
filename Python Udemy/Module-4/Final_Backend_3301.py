# Don't commit 'API_KEY'.

import os
from dotenv import load_dotenv  # pyright: ignore
# (↑) Used for Password-Protection in '.env' file, which is 
#      ignored by '.gitignore' file.
import requests # pyright: ignore


load_dotenv()
API_KEY = os.getenv('API_KEY')

def get_data(place, forecast_days=None):
    url = f"https://api.openweathermap.org/data/2.5/forecast?q={place}&appid={API_KEY}"
    response = requests.get(url)
    data = response.json()

    filtered_data = data["list"]
    number_of_values = 8 * forecast_days 
    # 8 => (no._of_values in a day.)

    filtered_data = filtered_data[:number_of_values]
    #                            (↑) [0: number_of_values]

    return filtered_data

if __name__ == "__main__":
    print(get_data(place="Tokyo", forecast_days=3))