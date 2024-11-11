#include <iostream>

int main(){
    // && = check if two things are true (and operator)
    // || = check if at least one condition is true
    // !  = reverses the logical state of the condition or bool true <--> false

    int temp;

    std::cout << "Enter the temp: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "it is warm\n"
    }
    else if(temp >= 30){
        std::cout << "it is hot\n";
    }

    return 0;
}