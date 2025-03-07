#include <iostream>
#include "SubAlgebraX.h";
#include "RandomNums.h";
#include "Operators.h";
#include "AddNum.h";


using namespace std;

long answer;
long calcultion;
long correctNum;
bool isNotCorrect = false;
bool isCorrect = false;

int main() {


	long Num1 = Numbers::Number(10);
	long Num2 = Numbers::Number(5);
	string op = Operator::Operators();

	long al = SubAlX::SubAl(Num1);
	long al2 = AddAl::AddAlNum(Num1);


	if (isCorrect == false) {

		cout << "What is: " << Num1 << " " << op << " " << Num2 << "\n";
		std::cin >> answer;


		if (op == "-" && answer == al) {


			cout << "Answer " << Num1 << " = "
				<< Num1 << " - " << Num2 << " - " << "1" << endl;
		}

		if (op == "+" && answer == al2) {


			cout << "Answer " << Num1 << " = "
				<< Num1 << " + " << Num2 << " - " << "1" << endl;
		}



	}


	system("pause > 0");
	return 0;
}