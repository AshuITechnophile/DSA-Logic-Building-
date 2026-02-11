// Reverse a Number using a While loop .
#include <iostream>
using namespace std;
int main()
{
    int n;
    int reverse = 0;
    cin >> n;
    while (n > 0)
    {
        int k = n % 10;
        n = n / 10;
        reverse = reverse * 10 + k;
    }
    cout << "Reverse of this no is " << reverse;
    return 0;
}