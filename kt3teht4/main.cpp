#include <iostream>
#include <string>

class Chef {
private:
    std::string name;

public:
    Chef(std::string name);
    ~Chef();
    void makeSalad();
    void makeSoup();
    std::string getName();
};

Chef::Chef(std::string name) : name(name) {
    std::cout << "Chef: Konstruktori - " << name << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef: Destruktori - " << name << std::endl;
}

void Chef::makeSalad() {
    std::cout << "Chef: " << name << " tekee salaattia." << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef: " << name << " tekee keittoa." << std::endl;
}

std::string Chef::getName() {
    return name;
}

class ItalianChef : public Chef {
private:
    double flourAmount;
    double waterAmount;

public:
    ItalianChef(std::string name, double flour, double water);
    ~ItalianChef();
    std::string getName();
    void makePasta();
};

ItalianChef::ItalianChef(std::string name, double flour, double water) : Chef(name), flourAmount(flour), waterAmount(water) {
    std::cout << "ItalianChef: Konstruktori - " << name << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef: Destruktori - " << getName() << std::endl;
}

std::string ItalianChef::getName() {
    return Chef::getName();
}

void ItalianChef::makePasta() {
    std::cout << "ItalianChef: " << getName() << " tekee pastaa. Ainesosat: Jauhot " << flourAmount << " ml, Vesi " << waterAmount << " ml." << std::endl;
}

int main() {
    Chef chef("Jyrki");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Mario", 250.0, 100.0);
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    Chef thirdChef("Pablo");
    thirdChef.makeSalad();
    thirdChef.makeSoup();

    return 0;
}
