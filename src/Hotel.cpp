#include "../include/Hotel.h"
#include <string>
#include <fstream>
#include <iostream>

Hotel::Hotel(std::string id, std::string name, std::string location, double price, int rating, int time) : TripItem(id, HOTEL, time, 0, name) {
    this->location = location;
    this->price = price;
    this->rating = rating;
}

Hotel::Hotel(const Hotel& other) : TripItem(other.id, HOTEL, other.startTime, 0, other.name) {
    this->location = other.location;
    this->price = other.price;
    this->rating = other.rating;
}

std::string Hotel::getLocation(){
    return this->location;
}

double Hotel::getPrice(){
    return this->price;
}

int Hotel::getRating(){
    return this->rating;
}

std::string Hotel::getItem(){
    std::string hotelInfo = "Hotel Name: " + this->name + "\n";
    hotelInfo += "Location: " + this->location + "\n";
    hotelInfo += "Price: $" + std::to_string(this->price) + "\n";
    hotelInfo += "Rating: " + std::to_string(this->rating) + " stars\n";
    hotelInfo += "Check-in Time: " + formatTime(this->startTime) + "\n";
    
    return hotelInfo;
}

void Hotel::extractHotel(std::ofstream& outFS) {
    outFS << "hotel/";
    outFS << id << "/" << name << "/" << location << "/" << price << "/" << rating << "/" << startTime << "/" << std::endl;
}