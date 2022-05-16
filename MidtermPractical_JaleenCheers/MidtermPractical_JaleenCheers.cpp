// MidtermPractical_JaleenCheers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
void MathProblem(int _rand1, int _rand2, int _op);
void Continue();

int main()
{
	srand(time(0));
	for (int i = 0; i < 5; ++i) {

	int rand1 = rand() % 9999;
	int rand2 = rand() & 9999;
	int op = rand() % 5;

	

		MathProblem(rand1, rand2, op);
		
	}
	
	Continue();

}

void MathProblem(int _rand1, int _rand2, int _op) {
	char opChar;
	int userInput = 0;
	int rando = rand() % 5;
	int answer = 0;
	bool loop = false;



	if (_op == 1) {
		opChar = '+';
		answer = _rand1 + _rand2;
	}
	else if (_op == 2) {
		opChar = '-';
		answer = _rand1 - _rand2;
	}
	else if (_op == 3) {
		opChar = '%';
		answer = _rand1 % _rand2;
	}
	else {
		opChar = '*';
		answer = _rand1 * _rand2;
	}



	std::cout << "What is " << _rand1 << " " << opChar << " " << _rand2 << std::endl;

	switch (rando)
	{
	case 1:
		std::cout << "1. " << answer << std::endl;
		std::cout << "2. " << rand() << std::endl;
		std::cout << "3. " << rand() % 1000 << std::endl;
		std::cout << "4. " << rand() % INT_MAX << std::endl;
		std::cin >> userInput;

		if (userInput == 1)
			std::cout << "Correct!" << std::endl;
		else					   
			std::cout << "WRONG!!!" << std::endl;
		break;
	case 2:
		std::cout << "1. " << rand() << std::endl;
		std::cout << "2. " << answer << std::endl;
		std::cout << "3. " << rand() % 1000 << std::endl;
		std::cout << "4. " << rand() % INT_MAX << std::endl;
		std::cin >> userInput;

		if (userInput == 2)
			std::cout << "Correct!" << std::endl;
		else
			std::cout << "WRONG!!!" << std::endl;
		break;
	case 3:
		std::cout << "1. " << rand() << std::endl;
		std::cout << "2. " << rand() % 1000 << std::endl;
		std::cout << "3. " << answer << std::endl;
		std::cout << "4. " << rand() % INT_MAX << std::endl;
		std::cin >> userInput;

		if (userInput == 3)
			std::cout << "Correct!" << std::endl;
		else
			std::cout << "WRONG!!!" << std::endl;
		break;
	case 4:
		std::cout << "1. " << rand() << std::endl;
		std::cout << "2. " << rand() % INT_MAX << std::endl;
		std::cout << "3. " << rand() % 1000 << std::endl;
		std::cout << "4. " << answer << std::endl;
		std::cin >> userInput;

		if (userInput == 4)
			std::cout << "Correct!" << std::endl;
		else
			std::cout << "WRONG!!!" << std::endl;
		break;
	default:
		std::cout << "1. " << rand() % 1000 << std::endl;
		std::cout << "2. " << rand() % INT_MAX << std::endl;
		std::cout << "3. " << rand() << std::endl;
		std::cout << "4. " << answer << std::endl;
		if (userInput == 4)
			std::cout << "Correct!" << std::endl;
		else
			std::cout << "WRONG!!!" << std::endl;
		break;
	}


}

void Continue()
{
	std::cout << "Press any key to continue" << std::endl;
	if (_getch())
		system("cls");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
