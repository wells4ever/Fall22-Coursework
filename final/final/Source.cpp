#include <iostream>

using namespace std;



int main()
{
    const int ROW_COUNT = 3;
    const int COL_COUNT = 4;
    const int PAGE_COUNT = 5;



    int threeDArray[ROW_COUNT][COL_COUNT][PAGE_COUNT];



    int totalCount = 0;

    for (int row = 0; row < ROW_COUNT; row++)
    {
        for (int col = 0; col < COL_COUNT; col++)
        {
            for (int page = 0; page < PAGE_COUNT; page++)
            {
                totalCount++;
                threeDArray[row][col][page] = totalCount;
            }
        }
    }

    cout << threeDArray[2][3][4];
}