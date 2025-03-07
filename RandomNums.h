#include <time.h>
#include <stdlib.h>

namespace Numbers {

	static long Number(int a) {

		srand(time(0));

		return rand() % a + 1;
	}
}