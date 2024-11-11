#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    /*
    Name spaces are a solution to prevent naming conflicts in projects
    they allow variables functions etc. to have the same name as long 
    as they are defined in a seperate namespace
    */

   int x = 0;
   // int x = 1; would thow an error because we already declared x

    std::cout << x << '\n' << first::x << '\n' << second::x << '\n';

}