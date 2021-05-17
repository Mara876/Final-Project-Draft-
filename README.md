 /*========================================================================================================================================================
Authors: Jacqueline Comrie, Rojal Uter , Jamie Chevannie, Jevaghn Dawes , Victoria Haye, Ryheem Clarke, Salema Afflick Kadecia Briscore
Date:May 17, 2021
Purpose: To write a C++ program that reserve rooms in a hotel.
=========================================================================================================================================================*/



 
 # Final-Project-Draft-
Hotel Reservation
 
 Guidelines for the hotel Reservation code  
 
 
 
 This program is written to reserve rooms in a hotel. The hotel 
menu should be able to perform the following:
1. Add Room
2. Reserve a Room
3. Modify a Room
4. View Room 
5. Exit
Declare a class called HotelRoom. The class has the following private data members: the room 
number(an integer), the room capacity(an integer representing the maximum number of people the 
room can accommodate) , the occupancy status ( an integer 0 if the room is not occupied, otherwise 
the number of occupants, in the room), and the daily rate( a double).
Create a constructor to include the following three arguments: the first argument sets the room 
number, the second argument sets the room capacity, the third argument sets room rate, and the 
room capacity status must be set to 0.
Create four accessor functions for each data member of the class:
Get-Number(),
Get-Capacity(), 
Get-Status() and 
Get-Rate().
Also create a one-argument function Change-Status() that changes the occupancy status of the 
room to the value of its argument. The function should verify that the argument values do not 
exceed the room capacity. If it does the function should return –1; and a one argument function 
Change-Rate() that sets the room rate to the value of its argument.
Add a Room
Before you can reserve a room make sure you have created at least three rooms. For example:
Room Number Capacity Rate Season
349 4 150 Non-Peak
147 2 175 Peak
10 1 150 Non-Peak
Reserving a Room
The program should ask the user to enter the number of guests to occupy the room. Change the 
status of the room to reflect the number of guests that just checked in. Display the information 
about the room in a nice format. 
Modify a Room
Now assume it is peak season that a guest checks in. Change the room rate to 175.00. Ask the user 
to enter the number of guests to occupy the room. Change the room’s status accordingly and display 
the information about the room.
View Room
This should display the room number, the number of guests in each room, and the total rate.
