# Find average from file => "1102_data.txt".

def get_average():
    with open("1102_data.txt", 'r') as file:
        data = file.readlines()
    
    values = data[1:] # list slicing from 1-index(i.e. 2nd element.)
    
    values = [float(item) for item in values]

    average_local = sum(values) / len(values)
    
    return average_local

average = get_average()
print(average)