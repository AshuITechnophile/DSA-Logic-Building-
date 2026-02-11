// Find the Sum of N Natural Numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is = " << sum;
    return 0;
}