#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

class Character {
protected:
    std::string name;
    int health;

public:
    Character(std::string n, int h) : name(n), health(h) {}

    ~Character() = default;

    virtual void attack() const {
        std::cout << name << " (Character) atack!" << std::endl;
    }

    void showInfo() const {
        std::cout << "Name: " << name << " | HP: " << health << std::endl;
    }
};

#endif