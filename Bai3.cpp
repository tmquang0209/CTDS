/*
Viết chương trình tìm UCLN của nhiều số.
Đầu vào: n (n ≥ 2) số nguyên không âm a1, a2, . . . , an.
Đầu ra: UCLN (a1, a2, . . . , an).
*/
#include <iostream>

using namespace std;

int inputValue(int);
int findGCD(int, int);

int main()
{
    int size;
    int *arr;
    int gcd;
    cout << "Enter the size: ";
    size = inputValue(size);
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
    gcd = arr[0];
    for (int i = 1; i < size; i++)
    {
        gcd = findGCD(gcd, arr[i]);
    }
    cout << "GCD: " << gcd << endl;
    return 0;
}

int inputValue(int num)
{
    while (!(cin >> num) || num < 0)
    {
        if (num < 0)
            cout << "Enter a positive number: ";
    }
    return num;
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