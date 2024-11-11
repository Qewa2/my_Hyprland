#include <iostream>
#include <cstdlib>

int main(){
    std::cout << system("free -m | grep Mem:");

    return 0;
}