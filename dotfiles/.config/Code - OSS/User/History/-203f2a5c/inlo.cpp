#include <iostream>

int main(){

    int grade = 75;

    //if(grade >= 60){
    //    std::cout << "you pass!\n";
    //}
    //else{
    //    std::cout << "You fail!\n";
    //}

    /*   /|\
          |    These are the same
         \|/
    */
    (grade >= 60) ? std::cout << "you pass!\n" : std::cout << "you fail!";

    return 0;
}