import pandas

df = pandas.read_csv("4101_hotels.csv") # df => data_frame


class Hotel:
    def __init__(self, hotel_id):
        self.hotel_id = hotel_id
    def book(self): # book_Hotel => 'Method + Class' function-name.
        availability =  df.loc[df["id"] == self.hotel_id, "available"].squeeze()
        if availability == 

    def availabe(self):
        """Check if the hotel is available"""
        availability =  df.loc[df["id"] == self.hotel_id, "available"].squeeze()
        if availability == "yes":
            return True
        else:
            return False


class Reservation_Ticket:
    def __init__(self, customer_name, hotel_object):
        pass
    def generate(self): 
        pass


print(df)

hotel_ID = input("Enter the id of the hotel: ")
hotel = Hotel(hotel_ID)

if hotel.availabe():
    hotel.book()
    name = input("Enter your name: ")
    reservation_Ticket = Reservation_Ticket(name, hotel)
    print(reservation_Ticket.generate())
else:
    print("Hotel is not free.")