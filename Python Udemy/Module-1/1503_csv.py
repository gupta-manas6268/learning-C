# .csv => convert ',' to columns.
import csv

with open("1503_weather.csv", 'r') as file:
    data = list(csv.reader(file))

print(data)  

city = input("Enter a city: ")
for row in data[1:]:
    # print(row)
    if row[0] == city:
        print(row[1])