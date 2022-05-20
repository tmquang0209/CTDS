#include <iostream>

using namespace std;

int findGCD(int num1, int num2)
{
    int r;
    while (num2 != 0)
    {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    return num1;
}

int main()
{
    int a = 100, b = 600, plus = 100;
    while (true)
    {
        if ((a * b == 100000) && findGCD(a, b) == 100)
        {
            cout << a << " " << b << endl;
            return 0;
        }
        cout << a << " " << b << endl;

        a += 100;
        // b += 100;
    }
}