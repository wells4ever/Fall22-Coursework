#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> alpha;
	vector <int>::size_type i;
	vector <int>::iterator Iter;
	i = alpha.size();
	

	cout << "Integer-type vector details:" << endl;
	cout << "----------------------------" << endl;
	cout << "Initial number of elements: " << i << endl;

	alpha.push_back(5);
	alpha.push_back(22);
	alpha.push_back(37);
	alpha.push_back(88);
	alpha.push_back(102);
	cout << "Contents after pushing 5,22,37,88,102: " << endl;
	for (Iter = alpha.begin(); Iter != alpha.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;

	cout << "Contents after erasing first to third positions: " << endl;
	alpha.erase(alpha.begin(), alpha.begin() + 3);
	for (Iter = alpha.begin(); Iter != alpha.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;

	cout << "Contents after inserting 59 in second position: " << endl;
	alpha.insert(alpha.begin() + 1, 59);
	for (Iter = alpha.begin(); Iter != alpha.end(); Iter++)
		cout << " " << *Iter;
	cout << endl;

	i = alpha.size();
	cout << "Updated size: " << i << endl;

	

	vector <string> bravo;
	vector <string>::size_type j;
	vector <string>::iterator Iter2;
	j = bravo.size();

	cout << "String-type vector details:" << endl;
	cout << "---------------------------" << endl;
	cout << "Inital number of elements: " << j << endl;

	bravo.push_back("Cat");
	bravo.push_back("Dog");
	bravo.push_back("Bird");
	bravo.push_back("Snake");
	bravo.push_back("Horse");

	cout << "Contents after pushing Cat,Dog,Bird,Snake,Horse: " << endl;
	for (Iter2 = bravo.begin(); Iter2 != bravo.end(); Iter2++)
		cout << " " << *Iter2;
	cout << endl;

	cout << "Contents after erasing Second to Fourth positions: " << endl;
	bravo.erase(bravo.begin() + 1, bravo.end() - 1);
	for (Iter2 = bravo.begin(); Iter2 != bravo.end(); Iter2++)
		cout << " " << *Iter2;
	cout << endl;

	cout << "Contents after inserting Spider in First position: " << endl;
	bravo.insert(bravo.begin() , "Spider");
	for (Iter2 = bravo.begin(); Iter2 != bravo.end(); Iter2++)
		cout << " " << *Iter2;
	cout << endl;

	i = bravo.size();
	cout << "Updated size: " << i << endl;


	
}