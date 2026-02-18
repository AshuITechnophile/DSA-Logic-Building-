#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "  ";
        }
        for (int k = i; k <= i; k++)
        {
            cout << k << " ";
        }
        int l = i;
        for (int k = l + (i / 2); k <= i - 1; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}