#include <iostream>
#include <vector>
#include <string>
#include <time.h>


namespace Operator {

	std::string Operators() {

		srand(time(0));

		std::vector<std::string> op;
		op.push_back("+");
		op.push_back("-");

		int index = rand() % 2;
		return op[index];
	}
}