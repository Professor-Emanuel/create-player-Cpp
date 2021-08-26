// CreatePlayer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Player {
protected:
    std::string name = "";
    std::string characterClass = "";
    std::string weapon = "";
    int level = 0;

public:
    void SetName(std::string myName) {
        name = myName;
    }

    virtual void SetClass(std::string myClass) = 0;
    virtual void SetWeapon(std::string myWeapon) = 0;

    void SetLevel(int myLevel) {
        level = myLevel;
    }

    std::string GetName() {
        return name;
    }

    int GetLevel() {
        return level;
    }

    std::string GetWeapon() {
        return weapon;
    }

    std::string GetClass() {
        return characterClass;
    }

    void PrintPlayer() {
        std::cout << GetName() << " is a " << GetClass() << " with level " << GetLevel() << " and fights using a " << GetWeapon() << "." << std::endl;
    }
};

class Warrior :public Player {
public:
    void SetClass(std::string myClass) {
        characterClass = myClass;
    }
    void SetWeapon(std::string myWeapon) {
        weapon = myWeapon;
    }
};

class Sorcerer :public Player {
public:
    void SetClass(std::string myClass) {
        characterClass = myClass;
    }
    void SetWeapon(std::string myWeapon) {
        weapon = myWeapon;
    }
};

class Archer : public Player {
public:
    void SetClass(std::string myClass) {
        characterClass = myClass;
    }
    void SetWeapon(std::string myWeapon) {
        weapon = myWeapon;
    }
};


int main()
{
    //Warrior Klaus;
    Sorcerer sorcerer;
    sorcerer.SetName("Elijah");
    sorcerer.SetLevel(5);
    sorcerer.SetWeapon("Orb");
    sorcerer.SetClass("Wizard");

    Warrior warrior;
    warrior.SetName("Klaus");
    warrior.SetLevel(8);
    warrior.SetWeapon("Dagger");
    warrior.SetClass("Fighter");

    sorcerer.PrintPlayer();
    warrior.PrintPlayer();
    

    std::cout << "\n";
    return 0;
}