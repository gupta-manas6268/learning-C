import sys
import pandas as pd # pyright: ignore

print('arguments', sys.argv)

month = int(sys.argv[1])

df = pd.DataFrame({"A": [1, 2], "B": [3, 4]})
print(df.head())

df.to_parquet(f"output_{month}.parquet") 
# .to_parquet => Gives binary format of data, which is optimised
#            compared to '.csv' 

print(f'hello pipeline, month={month}')