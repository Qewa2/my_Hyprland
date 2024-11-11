#include <iostream>

int main(){

    int age;
    
    std::cout << "enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the programm!" << '\n';
    }
    else if (age < 0){
            std::cout << "You havent been born yet!" << '\n';
        }
    else if (age >= 100){
        std::cout << "Damm your old"
    }
    else{
        std::cout << "You are not old enough to enter!" << '\n';
    }


    return 0;
}