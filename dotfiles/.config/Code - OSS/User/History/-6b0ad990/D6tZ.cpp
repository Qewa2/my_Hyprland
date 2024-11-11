#include <iostream>
#include <rand_range.h>

int main(){
	srand(time(NULL));

	std::cout << "num in range 1-2: " << rand_range(1,2) << '\n';
	std::cout << "num in range 5-9: " << rand_range(5,9) << '\n';
	std::cout << "num in range 5-9: " << rand_range(5,9) << '\n';
	std::cout << "num in range 5-9: " << rand_range(5,9) << '\n';

	return 0;
}


