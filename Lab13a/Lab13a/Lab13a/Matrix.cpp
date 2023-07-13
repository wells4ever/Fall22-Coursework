#include "Matrix.h"
#include <iostream>

Matrix Matrix::operator + (Matrix someOtherMatrix)
{
	Matrix resultingMatrix;

	resultingMatrix.x11 = this->x11 + someOtherMatrix.x11;
	resultingMatrix.x12 = this->x12 + someOtherMatrix.x12;
	resultingMatrix.x21 = this->x21 + someOtherMatrix.x21;
	resultingMatrix.x22 = this->x22 + someOtherMatrix.x22;
	
	return resultingMatrix;
}

Matrix Matrix::operator - (Matrix someOtherMatrix)
{
	Matrix resultingMatrix;

	resultingMatrix.x11 = this->x11 - someOtherMatrix.x11;
	resultingMatrix.x12 = this->x12 - someOtherMatrix.x12;
	resultingMatrix.x21 = this->x21 - someOtherMatrix.x21;
	resultingMatrix.x22 = this->x22 - someOtherMatrix.x22;

	return resultingMatrix;
}

Matrix Matrix::operator * (Matrix someOtherMatrix)
{
	Matrix resultingMatrix;

	resultingMatrix.x11 = (this->x11 * someOtherMatrix.x11)+(this->x12 * someOtherMatrix.x21);
	resultingMatrix.x12 = (this->x11 * someOtherMatrix.x12)+(this->x12 * someOtherMatrix.x22);
	resultingMatrix.x21 = (this->x21 * someOtherMatrix.x11) + (this->x22 * someOtherMatrix.x21);
	resultingMatrix.x22 = (this->x21 * someOtherMatrix.x12) + (this->x22 * someOtherMatrix.x22);

	return resultingMatrix;
}

Matrix::Matrix()
{
	x11 = 0;
	x12 = 0;
	x21 = 0;
	x22 = 0;
}

Matrix::Matrix(int x11, int x12, int x21, int x22)
{
	this->x11 = x11;
	this->x12 = x12;
	this->x21 = x21;
	this->x22 = x22;
}

void Matrix::printInfo()
{
	std::cout << x11 << "\t" << x12 << "\n" << x21 << "\t" << x22 << "\n" << std::endl;
}