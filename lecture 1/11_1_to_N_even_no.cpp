// Print all even number form 1 to 100 using a loop
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i;
            cout << endl;
        }
    }
    return 0;
}