// Find the Sum of digits of a given number using a loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    while (n > 0)
    {
        int k = n % 10;
        sum = sum + k;
        n = n / 10;
    }
    cout << "Sum of the digits is " << sum;
    return 0;
}