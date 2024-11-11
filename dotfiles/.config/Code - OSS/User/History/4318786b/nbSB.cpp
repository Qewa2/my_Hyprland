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
    else if (age >= 100){ // this will never be active since it first checks if the age is over 18 which it is so this wont be checked
        std::cout << "Damm your old" << '\n';
    }
    else{
        std::cout << "You are not old enough to enter!" << '\n';
    }


    return 0;
}