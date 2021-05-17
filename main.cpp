/*========================================================================================================================================================
Author: Jacqueline Comrie
Date:May 06, 2021
Purpose: To write a C++ program that reserve rooms in a hotel.
=========================================================================================================================================================*/

#include <iostream>

using namespace std;

class HotelRoom
{
public:
    int Room_number();                                                    // Note that this will get the room number
    int Room_capacity();                                                 // Note that this will get the maximum room capacity
    int Room_status();                                                  //Note that this will get the status of the room
    int Room_rate();                                                   //Note that this will get the room rate
    int Get_number();                                                 // Note that this will get number
    int Get_capacity();                                              //Note that this will get capacity
    int Get_status();                                               // Note that this will get the status
    int Get_rate();                                                // Not that will aid in getting the rate
    int Modify_status(int capacity);                              //Note that this will change the status of the room
    void Modify_rate(double Rate);                               //Note that this will change room rate depending on season
    void Reserve_room(HotelRoom& hotelroom);                    // Note that this will reserve a room
    void Modify_room(HotelRoom& hotelroom, string season);     // Note that this will modify specific rooms by amount of guests
    void View_room ();                                        // Note that this will display the available room

HotelRoom(int set_roomnum, int capacity, double room_rate, double Rate)  //Note that this is the constructor with  arguments
{
   room_num=set_roomnum;
   room_cap=capacity;;
   daily_rate=room_rate;
   occ_stat=0;

}
private:
    int room_num;
    int room_cap;
    int occ_stat;
    double daily_rate;
};

int main()                                        // Note that this add rooms
{
    HotelRoom Hotelroom1 (349, 4, 150);
    HotelRoom Hotelroom2 (147, 2, 175);
    HotelRoom Hotelroom3 (10, 1, 150);

    Hotelroom1.View_room();
    Hotelroom2.View_room();
    Hotelroom3.View_room();
   return 0;
}

void HotelRoom::View_room()
{
    cout<<"Room Number: ";             // Note that this will display  room number
    cout<<"Capacity: ";               // Note that this will display capacity
    cout<<"Rate: ";                  //Note that this will show  rate
    cout<<"Season: ";               // Note that this will show season
}
int HotelRoom::Get_number()
{
    return room_num;
}

int HotelRoom::Get_capacity()
{
    return room_cap;
}
int HotelRoom::Get_status()
{
    return occ_stat;
}
int HotelRoom::Get_rate()
{
    return daily_rate;
}
int HotelRoom::Modify_status(int capacity)
{
    if (capacity > room_cap)
    {
        return -1;
    }
    occ_stat=capacity;

    return 1;
}
void HotelRoom::Change_rate(double Rate)
{
   daily_rate=Rate;

}



