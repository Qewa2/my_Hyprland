#include <iostream>
#include <cstdlib>

// init
std::string test = "test"; 
namespace screen{
    void update_screen(){}
}

int main(){

    while(true){
        screen::update_screen();

    }
    
    return 0;
}

void screen::update_screen(){
    system("clear");
    std::cout << test << std::endl;
}