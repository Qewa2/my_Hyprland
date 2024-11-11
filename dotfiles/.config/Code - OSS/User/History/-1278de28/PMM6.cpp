#include <iostream>
#include <cstdlib>

// init
std::string test = "test"; 
namespace screen{
    void update_screen(){}
}

int main(){

    while(true){
        update_screen();

    }
    
    return 0;
}

void update_screen(){
    system("clear");
    std::cout << test << std::endl;
}