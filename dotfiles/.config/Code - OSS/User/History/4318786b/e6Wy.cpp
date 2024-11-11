#include <iostream>

int main(){

    int age;
    
    std::cout << "enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the programm!" << '\n';
    }


    return 0;
}