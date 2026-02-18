#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw(1);

        if (a < 0)
            throw("Negative Numbers not allowed");

        if (a > 100)
            throw(1.2);
        cout << "Result: " << a/b;
    }
    catch (int e)
    {
        cout << "Divide by zero not allowed: " << e << endl;
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
    catch (double e)
    {
        cout << "Number is too large: " << e;
    }
}