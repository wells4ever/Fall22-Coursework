#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
	Matrix m1(2, 5, 40, 72);
	Matrix m2(1, 4, 7, 10);

	Matrix m3 = m1 + m2;
	Matrix m4 = m1 - m2;
	Matrix m5 = m1 * m2;

	cout << "Matrix 1:" << endl;
	m1.printInfo();

	cout << "Matrix 2:" << endl;
	m2.printInfo();

	cout << "Sum of matrices 1 & 2:" << endl;
	m3.printInfo();

	cout << "Difference of matrices 1 & 2:" << endl;
	m4.printInfo();

	cout << "Product of matrices 1 & 2:" << endl;
	m5.printInfo();
	
}