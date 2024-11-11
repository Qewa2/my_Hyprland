#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter size B: ";
    std::cin >> b;

    a = pow(a,2);
    b = pow(b, 2);
    c = sqrt(a + b);
    // This can be written like this: c = sqrt(pow(a, 2) + pow(b, 2));


    std::cout << "side C: " << c << std::endl;

    return 0;
}