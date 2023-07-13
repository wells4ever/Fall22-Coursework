#pragma once
class Matrix
{
private:
	int x11, x12, x21, x22;

public:

	Matrix operator + (Matrix);
	Matrix operator - (Matrix);
	Matrix operator * (Matrix);

	Matrix();
	Matrix(int, int, int, int);

	void printInfo();
};

