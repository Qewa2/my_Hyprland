#include <iostream>

int main(){
    
    int students = 20;

    students = students + 1; // this works with -, *, /, +
    std::cout << students << '\n';

    students += 1; // is the same as saying students = students +1 // this works with -, *, /, +
    std::cout << students << '\n';

    students++; // adds 1 (you can't add more than one with this)
    std::cout << students << '\n';


    students = students - 1; 
    std::cout << students << '\n';

    students -= 1;
    std::cout << students << '\n';

    students--;
    std::cout << students << '\n';

    
    students = students * 2; 
    std::cout << students << '\n';

    students *= 2;
    std::cout << students << '\n';
    
    
    students = students / 2; 
    std::cout << students << '\n';

    students /= 2;
    std::cout << students << '\n';

    int remainder = students % 3;

    std::cout << remainder << '\n';

    // the % operator can be used to determin if a number is odd or even
    

    return 0;
}