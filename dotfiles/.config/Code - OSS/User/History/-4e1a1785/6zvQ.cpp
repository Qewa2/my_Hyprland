#include <iostream>

//typedef std::string str;
//     /|\
//      |  These are the same
//     \|/
using str = std::string;
// now i can type str

int main(){
    /*
    To create aliases you can use typedef or using
    now typedef is mostly replaced with using since it works better with templates
    */
   str name = "qewa";
   std::string surname = "22";
   //these variables have the same data type and will be treadted the same by the compiler
   std::cout << "name: " << name << '\n';
   std::cout << "surname: " << surname << '\n';
   std::cout << "fullname: " << name << ' ' << surname << '\n'; 


   return 0;
}