#include<iostream>

using namespace std;

int main() {
	int x, i;
	int total = 0;

	cout << "Enter the number of integers for this array:" << "\n";
	cin >> i;

	int* arr = new int(i);

	cout << "Enter " << i << " integers" << endl;

	for (x = 0; x < i; x++) {
		cin >> arr[x];
	}

	for (int y = 0; y < i; y++)
	{
		total = total + arr[y];
	}

	double average = total / i;
	
	cout << "Average is: " << average << endl;
	return 0;
}