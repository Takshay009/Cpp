#include <bits/stdc++.h>

using namespace std;

void divide(int num1, int num2)
{
    if (num2 == 0)
    {
        throw "Arithematic Exception";
    }
    cout << "Result: " << num1 / num2 << endl;
}

int main()
{
    try
    {
        divide(5, 0);
    }
    catch (const char *msg)
    {
        cout<< msg << endl;
    }

    return 0;
}