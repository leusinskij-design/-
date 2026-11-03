#ifndef MAGE_HPP
#define MAGE_HPP

#include "Character.hpp"

class Mage : public Character {
private:
    int mana;

public:
    Mage(std::string n, int h, int m) : Character(n, h), mana(m) {}

    void attack() const override {
        std::cout << name << " (Mage) kast fireboll! Mana: " << mana << std::endl;
    }
};

#endif