FILEPATH = "1503_weather.csv" 
# (↑) Capital-Letters of variable is used for programmers who will 
#  see this code, & understand that it is a constant value variable. 




# .csv => convert ',' to columns.
import csv

with open(FILEPATH, 'r') as file:
    data = list(csv.reader(file))

print(data)  

city = input("Enter a city: ")
for row in data[1:]:
    # print(row)
    if row[0] == city:
        print(row[1])