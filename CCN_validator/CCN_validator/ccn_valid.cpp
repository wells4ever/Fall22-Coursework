#include <iostream>

using namespace std;

bool checkCardValid(const string& ccn);

int main()
{
    string card = "79927398713";
    if (checkCardValid(card))
        cout << "This is a valid card.";
    else
        cout << "This is not a valid card.";
    return 0;
}

bool checkCardValid(const string& ccn)
{
    int digits = ccn.length();

    int nSum = 0, isSecond = false;
    for (int i = digits - 1; i >= 0; i--) {

        int d = ccn[i] - '0';

        if (isSecond == true)
            d = d * 2;

        // We add two digits to handle
        // cases that make two digits after
        // doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}