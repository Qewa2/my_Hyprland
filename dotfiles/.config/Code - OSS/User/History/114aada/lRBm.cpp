#include <ctime>
#include <random>

int rand_range(const int min, const int max){
	int rand_num =	(rand() % ((max - min)+1)) + min;
		
	return rand_num;
}