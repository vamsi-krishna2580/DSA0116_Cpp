#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw("Divide by zero not possible");
        }
        else
        {
            cout << a / b;
        }
    }
    catch (const char *e)
    {
        cout << e;
    }
    return 0;
}