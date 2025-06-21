# Don't commit 'API_KEY'.

import requests


API_KEY = ""
def get_data(place, forecast_days=None, option=None):
    url = f"https://api.openweathermap.org/data/2.5/forecast?q={place}&appid={API_KEY}"
    response = requests.get(url)
    data = response.json()

    filtered_data = data["list"]
    number_of_values = 8 * forecast_days 
    # 8 => (no._of_values in a day.)

    filtered_data = filtered_data[:number_of_values]
    #                            (↑) [0: number_of_values]

    if option == "Temperature":
        filtered_data = [dict["main"]["temp"] for dict in filtered_data]
    if option == "Sky":
        filtered_data = [dict["weather"][0]["main"] for dict in filtered_data]

    return filtered_data

if __name__ == "__main__":
    print(get_data(place="Tokyo"))