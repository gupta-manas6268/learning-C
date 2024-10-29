# functions
def calc_sum(a, b): # calc => calculate.
    sum = a + b
    print(sum)
    return sum


calc_sum(5, 10)
sum = calc_sum(1, 2)
print(sum)

def cal_prod(a, b=2):
    print(a * b)
    return a * b

cal_prod(1)



# Q.1: Find length of list?

cities = ["delhi", "gurgaon", "noida", "pune", "mumbai"]

def print_len(list):
    print(len(list))

print("\n")
print_len(cities)