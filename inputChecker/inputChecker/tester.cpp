#include <iostream>

using namespace std;

void CheckString(string);

int main()
{
	string input;
	cout << "Please input a sting of numbers, letters, and/or special characters." << endl;
	cin >> input;

	CheckString(input);
}

void CheckString(string stringIN)
{
	for (int i = 0; i < stringIN.length(); i++)
	{
		if (isdigit(stringIN[i]))
		{
			cout << "digit" << endl;
		}
		else if (isalpha(stringIN[i]))
		{
			cout << "alphabetic" << endl;
		}
		else
		{
			cout << "special character" << endl;
		}
	}
}