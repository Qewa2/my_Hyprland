#include <iostream>

int main(){
    // month name exemple
    int month;
    std::cout << "Enter the month (1-12)";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January\n";
            break;
        case 2:
            std::cout << "It is Feburary\n";
            break;
        case 3:
            std::cout << "It is march\n";
            break;
        case 4:
            std::cout << "It is aprli\n";
            break;
        case 5:
            std::cout << "It is may\n";
            break;
        case 6:
            std::cout << "It is june\n";
            break;
        case 7:
            std::cout << "It is Juli\n";
            break;
        case 8:
            std::cout << "It is August\n";
            break;
        case 9:
            std::cout << "It is September\n";
            break;
        case 10:
            std::cout << "It is October\n";
            break;
        case 11:
            std::cout << "It is November\n";
            break;
        case 12:
            std::cout << "It is December\n";
            break;
        default:
            std::cout << "please only enter number (1-12)\n";
        

    }


    return 0;
}
