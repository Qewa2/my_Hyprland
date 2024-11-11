#include <iostream>
#include <cstdlib>
#include <unistd.h>

// init
std::string test = "test"; 
namespace screen{
    void update_screen(){
        int num = 0;

        system("clear");
        std::cout << test << num << std::endl;
        sleep(1);
        num++;
    }
}

int main(){

    while(true){
        screen::update_screen();
    }
    
    return 0;
}

