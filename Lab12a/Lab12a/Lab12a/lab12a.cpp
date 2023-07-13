#include <iostream>

using namespace std;

int rows = 0;
int columns = 0;
int** generateMultiplicationTable(int, int);

int main()
{



	cout << "Enter the number of rows for the table." << endl;
	cin >> rows;
	cout << "Enter the number of columns for the table." << endl;
	cin >> columns;

	int** table = generateMultiplicationTable(rows, columns);

	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < columns; col++)
		{
			cout << table[row][col] << "\t" ;
		}
		cout << "\n";
	}
	
}

int** generateMultiplicationTable(int rows, int columns)
{
	int** table = new int* [rows];

	for (int row = 0; row < rows; row++)
	{
		table[row] = new int[columns];

	}
	

	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < columns; col++)
		{
			table[row][col] = (row + 1) *(col + 1);
		}
	}

	return table; 
}