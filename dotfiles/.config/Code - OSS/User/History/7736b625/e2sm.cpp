#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double z;

    //z = std::max(x,y);
    //z = std::min(x,y);
    //z = pow(2,3);
    //z = sqrt(9);
    //z = abs(-3);
    z = round(3.5);

    std::cout << z << '\n';


    return 0;
}