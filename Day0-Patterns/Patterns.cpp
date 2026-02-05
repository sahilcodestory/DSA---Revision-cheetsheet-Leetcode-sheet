#include <iostream>
using namespace std;
void fullpyramid(int n)
{
    // int n = 5;
    for (int i = 0; i < n; i++)
    {
        // spaces first
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    // fullpyramid()
    fullpyramid(5);
}