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

int main() {
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    Chef chef2("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();

    return 0;
}

