#include <iostream>

using std::cout;

int main(){


    int x; //declaration
    x = 5; //assingment

    int y = 6; //declaration and assingnment in one single step

    int sum = x + y; //math operations inside while assining


    cout << x << '\n';
    cout << y << '\n';



    // data types
    

    // inteager (whole number)
    int age = 14;
    cout << "age: " << age << std::endl;

    int days = 7.5;
    cout << "days: " << days << std::endl;  // outpus 7 since an int can only store whole nums

    //double (number with decimals)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    cout << price << '\n'; // prints 10.99 since it can store decimals

    // single character
    char grade = 'A';
    char initial = 'BC'; //error since it is more than just a single char

    cout << "grade="<<grade<<'\n'; 
    cout << "initial="<< initial<<'\n'; // prints C beacause it is the last char


    //bool (true/false)
    bool is_student = true;
    bool power = true; // representing the power is on
    bool for_Sale = true;


    //string (multiple chars)
    std::string name = "Qewa";
    std::string day = "saturday";
    std::string food = "pizza";

    cout << name << std::endl;
    cout << "hello " << name << '\n';

    //const
    // constants are read only
    double pi = 3.14159;
    pi = 420.65;// pi can be changed and is now wrong since we know pi and pi wont change we should make it a cons
    double radius = 10;
    double circumference = 2*pi*radius;

    cout << circumference << "cm" <<'\n';




    return 0;
}