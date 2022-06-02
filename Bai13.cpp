#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num)
{
    if (num == 1)
        return false;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

double eulerFunc(int num)
{
    if (isPrime(num))
        return num - 1;

    int count = 0;
    double result = num;
    for (int i = 2; i <= num; i++)
    {
        count = 0;
        while (num % i == 0)
        {
            ++count;
            num /= i;
        }
        if (count)
        {
            if (count > 1)
            {
                result *= (1 - 1 / i);
            }
        }
    }
    return result;
}

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
    int a, b, m, gcd;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "m = ";
    cin >> m;

    gcd = findGCD(a, b);

    if (gcd != 1)
    {
        cout << "GCD = " << gcd << endl;
        a /= gcd;
        b /= gcd;
        m /= gcd;
    }

    if (findGCD(a, m) != findGCD(b, m))
    {
        cout << "Phuong trinh vo nghiem" << endl;
        return 0;
    }
    cout << "x = " << (int)pow(a, eulerFunc(m) - 1) % m * b;
    return 0;
}