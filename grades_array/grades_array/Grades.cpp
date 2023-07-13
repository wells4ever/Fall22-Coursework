#include <iostream>

using namespace std;


int main()
{
	int studentGrades[4][3]
	{
		{10,9,90},
		{8,7,75},
		{8,8,80},
		{10,10,100}

	};

	for (int i = 0; i < 4; i++)
	{
		cout << "\nStudent " << i+1 << ":" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << studentGrades[i][j] << "\t";
		}
	}
}