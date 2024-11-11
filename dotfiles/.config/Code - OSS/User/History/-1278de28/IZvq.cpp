#include <iostream>
#include <cstdlib>

// init
std::string test = "test"; 
namespace screen{
    void update_screen(){
        system("clear");
        std::cout << test << std::endl;
    }
}

int main(){

    while(true){
        screen::update_screen();
    }
    
    return 0;
}

