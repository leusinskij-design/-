#include <iostream>
#include "Warrior.hpp"
#include "Mage.hpp"

int main() {
    std::cout << "--- Make character ---" << std::endl;

    Warrior hero1("Artas", 100, 50);
    Mage hero2("Jane", 80, 100);

    hero1.showInfo();
    hero2.showInfo();

    std::cout << "\n--- Demonstrashen atack ---" << std::endl;

    Character* ptr1 = &hero1;
    Character* ptr2 = &hero2;

    ptr1->attack();
    ptr2->attack();

    return 0;
}