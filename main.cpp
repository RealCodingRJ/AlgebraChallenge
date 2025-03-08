#include <iostream>
#include "SubAlgebraX.h";
#include "RandomNums.h";
#include "Operators.h";
#include "AddNum.h";


using namespace std;

long answer;
bool isCorrect = false;


int main() {


	long Num1 = Number(10);
	long Num2 = Number2();
	string op = Operator::Operators();

	long al = SubAlX::SubAl(Num1, Num2);
	long al2 = AddAl::AddAlNum(Num1, Num2);


	if (!isCorrect) {

		if (op == "-") {

			// a = (a - b);

			cout << "What is: " << Num1 << " - " << Num2 << endl;

			std::cin >> answer;

			if (answer == al) {

				cout << "Answer " << Num1 << " - "
					<< Num2 << " = " << answer << endl;
			}
		}


		if (op == "+") {


			cout << "What is: " << Num1 << " + " << Num2 << endl;

			std::cin >> answer;

			if (answer == al2) {

				cout << "Answer " << Num1 << " + "
					<< Num2 << " = " << answer << endl;
			}

			
		}

	}

	system("pause > 0");
	return 0;
}