#include <iostream>

int main(){
    
    int students = 20;

    students = students + 1;
    std::cout << students << '\n';

    students += 1; // is the same as saying students = students +1
    std::cout << students << '\n';

    students++; // adds 1 (you can't add more than one with this)
    std::cout << students << '\n';


    students = students - 1;

    return 0;
}