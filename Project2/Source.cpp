// Task #1

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number;
	cout << ("Enter 6 digit number: ");
	cin >> number;
	if (number < 100000 || number > 999999) 
	{
		std::cout << "Error: non 6 digit number has been entered.";
	}

	int first_summ, second_summ;

	for (int i = 0; i < 3; i++) 
	{
		first_summ += number % 10;
		number /= 10;
		second_summ += number % 10;
		number /= 10;
	}

	if (first_summ == second_summ) 
	{
		std::cout << "Happy number";
	}
	else 
	{
		std::cout << "Unhappy number";
	}
	return 0;
}

// Task #2

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int main_number;
	cout << ("Enter 4 digit number: ");
	cin >> main_number;

	if (main_number < 100000 || main_number > 999999)
	{
		std::cout << "Error: non 4 digit number has been entered.";
	}

	int number1 = main_number / 1000;
	int number2 = (main_number % 1000) / 100;
	int number3 = (main_number % 100) / 10;
	int number4 = main_number % 10;

	int new_number = number2 * 1000 + number1 * 100 + number4 * 10 + number3;

	cout << "New number: " << new_number;

	return 0;
}

// Task #3

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int max_number;
	cout << "Enter 7 numbers: ";

	for (int i = 1; i <= 7; i++) 
	{
		int number;
		cin >> number;
	
	if (i == 1) 
	{
		max_number = number;
	}
	else if (number > max_number) 
	{
		max_number = number;
	}
	}

	cout << "Max number: " << max_number;

	return 0;
}