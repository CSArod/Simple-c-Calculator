#include "std_lib_facilities.h"

int main()
{
	char op;
	float num1, num2;

	cout << "Enter  your operator -, +, *, /:";
	cin >> op;
	cout << "Enter your inputs: ";
	cin >> num1 >> num2;

	switch (op)
	{
	case '-':
		cout << num1 - num2;
		break;
	case '+':
		cout << num1 + num2;
		break;
	case '/':
		break;
	case '*':
		cout << num1 * num2;
		break;
	default:
		cout << "Wrong input!";
	}
	return 0;
}