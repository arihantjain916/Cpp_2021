#include <iostream>
using namespace std;

int main()
{
    int occ, number;
    int n, flag = 0;
    cin >> occ;
    for (int i = 0; i < occ; i++)
    {
        cin >> number;
        n = number / 2;
        for (int j = 2; j <= n; j++)
        {
            if (number % j == 0)
            {
                cout << "Not a prime number" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Prime number" << endl;
        }
    }
    return 0;
}