#include <iostream>
#include <ctime>


int rand_range(const int min, const int max);


int main(){
	srand(time(NULL));

	std::cout << "num in range 1-2: " << rand_range(1,2) << '\n';
	std::cout << "num in range 5-9: " << rand_range(5,9) << '\n';
	std::cout << "num in range 5-9: " << rand_range(5,9) << '\n';
	std::cout << "num in range 5-9: " << rand_range(5,9) << '\n';

	return 0;
}

int rand_range(const int min, const int max){
	int rand_num =	(rand() % ((max - min)+1)) + min;
		
	return rand_num;
}

