/*
Viết chương trình chạy thuật toán Euclide.
Đầu vào: Hai số nguyên không âm a và b.
Đầu ra: UCLN (a, b).
*/
#include <iostream>

using namespace std;

int findGCD(int num1, int num2);

int main()
{
    int num1, num2, gcd;
    num1 = 0;
    num2 = 2;
    // cout << "Enter two numbers: ";
    // cin >> num1 >> num2;
    gcd = findGCD(num1, num2);
    cout << gcd << endl;
    return 0;
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
