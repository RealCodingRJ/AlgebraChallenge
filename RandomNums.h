#include <time.h>
#include <stdlib.h>

//namespace Numbers {

long Number(int a) {

	srand(time(0));

	return rand() % a + 1;
}

long Number2() {

	srand(time(0));

	return rand() % 6 + 1;
}