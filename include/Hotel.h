#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <fstream>
#include "TripItem.h"

class Hotel: TripItem {
    private:
        std::string name;
        std::string location;
        double price;
        int rating;
        double time;
    public:
        Hotel(std::string, std::string, double, int, double);
        std::string getName();
        std::string getLocation();
        double getPrice();
        int getRating();
        std::string getItem();
        double getHotelTime();
        void extractHotel(std::ofstream&);
};

#endif