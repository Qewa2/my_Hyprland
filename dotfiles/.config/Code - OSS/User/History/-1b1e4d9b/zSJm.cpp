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
    // to use namespaces we type the namespace we want to use, two : (::) and the name of the entity 
    // the compiler always uses the local version of a variable if no namespace is given we can change that with the using keyword
    // using namespace first; will use the namespace first in front of the variable
    // std::cout << x; would print 1
    // using namespace std; helps with readability but because there are so many things in the namespace std there will probably by a naming problem so dont use it
    // instead use using std::cout for exemple now you dont have to write std::cout but cout use this to make sure the naming proble doesnt occur
}