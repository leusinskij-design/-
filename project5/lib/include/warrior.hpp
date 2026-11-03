#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"

class Warrior : public Character {
private:
    int armor;

public:
    Warrior(std::string n, int h, int a) : Character(n, h), armor(a) {}

    void attack() const override {
        std::cout << name << " (Warrior) atack sword! Armor: " << armor << std::endl;
    }
};

#endif