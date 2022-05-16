// MidtermPractical_JaleenCheers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	srand(time(0));
	int rand1 = rand();
	int rand2 = rand();
	int op = rand() % 5;


}

void MathProblem(int _rand1, int _rand2, int _op) {
	char opChar;
	int userInput;
	bool loop = false;
	switch (_op)
	{
	case 1:
		opChar = '+';
		break;
	case 2:
		opChar = '-';
		break;
	case 3:
		opChar = '/';
		break;
	case 4:
		opChar = '*';
		break;
	default:
		break;
	}

	std::cout << "What is " << _rand1 << opChar << _rand2 << ": ";
	while (!loop) {
		std::cin >> userInput;
		loop = ValidateInt();
	}
}
void Problem() {

}
bool ValidateInt() {
	bool success;

	if (std::cin.fail())
	{
		success = false;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cout << "Invalid input...Must be an int...Try again" << std::endl;
	}
	else
	{
		success = true;
	}
	return success;
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
