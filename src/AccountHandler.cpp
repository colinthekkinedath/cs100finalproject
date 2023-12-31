#include "../include/AccountHandler.h"
#include "../include/User.h"

#include <fstream>
#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
#include <unistd.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"

User AccountHandler::login() {
    bool flag = false;
    int idx = 0;

    std::cout << "Enter a username: ";
    std::cin >> username;
    

    char* password = getpass("Enter a password: ");
    std::string passwordStr(password);

    for (auto x : userStorage) {
        if (x.getUsername() == username) {
            flag = true;
            break;
        }
        ++idx;
    }

    if (!flag || userStorage.at(idx).getPassword() != password) {
        std::cout << std::endl;
        throw std::runtime_error(std::string(RED) + "Incorrect username or password" + std::string(RESET));
    }

    free(password);
    
    return userStorage.at(idx);
}

AccountHandler::AccountHandler(){
    std::ifstream inFS;

    inFS.open("../data/AccountStorage", std::ios::in);
    if (inFS.is_open()) {
        while(inFS >> username) {
            if (inFS >> password) {
                userStorage.push_back(User(this->username, this->password));
            }
        }
    }
    else {
        std::cerr << "Failed to open the file" << std::endl;
    }

    inFS.close();
}

void AccountHandler::createAccount() {
    std::ofstream outFS;
    outFS.open("../data/AccountStorage", std::fstream::app);

    if (outFS.is_open()) {
        std::string username, password;

        std::cout << "Enter username: ";
        std::cin >> username;
        std::cout << "Enter password: ";
        std::cin >> password;

        // Write the username and password to the file
        outFS << username << " " << password << std::endl;

        outFS.close();
    } else {
        std::cerr << "Failed to open the file." << std::endl;
    }
}

void AccountHandler::printAccounts() {
    for (auto x : userStorage) {
        std::cout << x << std::endl;
    }
}