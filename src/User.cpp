#include "../include/User.h"
#include "../include/TripHandler.h"

#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

User::~User() {
    for (Trip* trip : tripStorage) {
        delete trip;
    }
}

std::vector<Trip*> User::getTripStorage() {
    return this->tripStorage;
}

void User::addTripToStorage(Trip* trip) {
    this->tripStorage.push_back(trip);
}

void User::removeTripFromStorage(Trip* trip) {
    auto it = std::find(tripStorage.begin(), tripStorage.end(), trip);

    if (it != tripStorage.end()) {
        delete *it;
        tripStorage.erase(it);
    }
}

void User::importTrips() {
    std::string filename = "../data/" + this->getUsername() + "Trips.dat";

    std::string str;

    std::ifstream inFS(filename);

    TripHandler tripHandler;

    Trip* trip = nullptr;

    int i = 0;

    if (!inFS.is_open()) {
        return;
    }  

    while (true) {
        str = readString(inFS);

        if (str == "\ntrip") {
            str = readString(inFS);

            trip = new Trip(str);
            tripHandler.setTrip(trip);

            tripStorage.push_back(trip);
        }

        if (str == "\nactivity") {
            tripHandler.importTripItem(parseActivity(inFS));
        }

        if (str == "\nflight") {
            tripHandler.importTripItem(parseFlight(inFS));
        }

        if (str == "\nhotel") {
            tripHandler.importTripItem(parseHotel(inFS));
        }

        if (inFS.eof() == true) {
            break;
        }

        ++i;
    }
}

void User::exportTrips() {
    std::string filename = "../data/" + username + "Trips.dat";

    std::ofstream outFS(filename, std::fstream::out);

    outFS << std::endl;

    if (outFS.is_open()) {
        for (Trip* trip : tripStorage) {
            outFS << "trip/" << trip->getTripName() << "/" << std::endl;

            for (TripItem* item : *(trip->getTripItems())) {
                if (item->getItemType() == ACTIVITY) {
                    static_cast<Activity*>(item)->extractItem(outFS);
                }
                if (item->getItemType() == HOTEL) {
                    static_cast<Hotel*>(item)->extractItem(outFS);
                }
                if (item->getItemType() == FLIGHT) {
                    static_cast<Flight*>(item)->extractItem(outFS);
                }
            }
        }
    } else {
        std::cerr << "Failed to open the file." << std::endl;
    }
    outFS.close();
}

std::string User::readString(std::ifstream& file) {
    std::string line;
    getline(file, line, '/');
    return line;
}

Activity * User::parseActivity(std::ifstream& file) {
    return new Activity(readString(file), readString(file), std::stoi(readString(file)), std::stod(readString(file)));
}

Flight * User::parseFlight(std::ifstream& file) {
    return new Flight(readString(file), readString(file), std::stoi(readString(file)), std::stoi(readString(file)), 
                      readString(file), readString(file), std::stod(readString(file)));
}

Hotel * User::parseHotel(std::ifstream& file) {
    return new Hotel(readString(file), readString(file), readString(file), std::stod(readString(file)), std::stoi(readString(file)), std::stod(readString(file)));
}