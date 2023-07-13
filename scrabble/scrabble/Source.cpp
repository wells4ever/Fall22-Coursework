#include <iostream>
#include <string>

using namespace std;
int calculateScore(string);
int getLetterValue(char);

int main()
{
	do
	{
		char word[26];
		cout << "Please enter a word in all lower case (Enter a space to quit)" << endl;
		cin.getline(word, 26);

		if (word[0] == ' ')
			break;

		int score = calculateScore(word);
		cout << "the score for: " << word << " is: " << score << endl;
	} while (true);
}

int calculateScore(string word)
{
	int total = 0;
	int length = word.length();

	for (int i = 0; i < length; i++)
	{
		total = total + getLetterValue(word[i]);
	}
	return total;
}

int getLetterValue(char letter)
{
	int value = 0;

	switch (letter)
	{
	case 'a': case 'e': case 'i': case 'l': case 'n': case 'o': case 'r': case 's': case 't': case 'u':
		value = value + 1;
		break;

	case 'd': case 'g':
		value = value + 2;
		break;

	case 'b': case 'c': case 'm': case 'p':
		value = value + 3;
		break;

	case 'f': case 'h': case 'v': case 'w': case 'y':
		value = value + 4;
		break;

	case'k':
		value = value + 5;
		break;

	case 'j': case 'x':
		value = value + 8;
		break;

	case'q': case'z':
		value = value + 10;
		break;


	}
	return value;
}