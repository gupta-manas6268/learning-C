import sqlite3

# Establish a connection & a cursor
connection = sqlite3.connect("3804_database.db")
cursor = connection.cursor()

# 1. Select
# Query all data based on a condition
cursor.execute("SELECT * FROM events WHERE date='2088.10.15'") 
rows_1 = cursor.fetchall() # List
print(rows_1)

# Query certain columns based on a condition
cursor.execute("SELECT band, date FROM events WHERE date='2088.10.15'") 
rows_2 = cursor.fetchall() 
print(rows_2)


# 2. Insert new rows
new_rows = [('Cats', 'Cat City', '2088.10.17'),
            ('Hens', 'Hen City', '2088.10.17')]
cursor.executemany("INSERT INTO events VALUES(?,?,?)", new_rows)
# '.executemany()' => To execute multiple-data in Table.
# (".... (?,?,?)", new_rows) => 3-?'s because we have 3-columns
#                                & take data from 'new_rows'.

connection.commit() # To commit/save changes in '3804_database.db' file.

# Query all data
cursor.execute("SELECT * FROM events")
rows = cursor.fetchall()
print(rows)

# DELETE FROM events WHERE band="Tigers"