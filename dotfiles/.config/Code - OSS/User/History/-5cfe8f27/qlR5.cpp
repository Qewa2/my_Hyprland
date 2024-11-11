#include <iostream>

int main(){

    std::string name;

    std::cin;

    std::cout << "whats your full name?: ";
    std::getline(std::cin, name);

    std::cout << "Hello " << name << '\n';

    return 0;
}