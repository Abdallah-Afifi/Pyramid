#include <iostream>
using namespace std;

int main()
{
    int space, n;

    cin >> n;

    for (int i = 1, j = 0; i <= n; ++i, j = 0)
    {
        for (space = 1; space <= n - i; ++space)
        {
            cout << " ";
        }

        while (j != 2 * i - 1)
        {
            cout << "*";
            ++j;
        }
        cout << endl;
    }
    return 0;
}
