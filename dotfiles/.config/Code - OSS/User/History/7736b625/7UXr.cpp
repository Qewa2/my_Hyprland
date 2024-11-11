#include <iostream>

int main(){
    double x = 3;
    double y = 4;
    double z;

    //z = std::max(x,y);
    z = std::min(x,y);

    std::cout << z << '\n';


    return 0;
}