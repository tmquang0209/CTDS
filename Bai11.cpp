/*
Viết chương trình tính toán các lớp thặng dư
Đầu vào: m nguyên dương, 0 ≤ a, b < m.
Đầu ra: Lớp ~a + ~b, ~a^-1 (nếu tồn tại) trong Zm
*/
#include <iostream>
using namespace std;

int inputValue(int, int = -1);

int main()
{
    int m, a, b;
    cout << "m = ";
    m = inputValue(m);
    cout << "a = ";
    a = inputValue(a, m);
    cout << "b = ";
    b = inputValue(b, m);
    if (a % m == b % m)
    {
        cout << "~a + ~b = ~" << a + b << " = ~" << (a + b) % m << endl;
    }
    return 0;
}

int inputValue(int value, int maxValue)
{
    do
    {
        cin >> value;
        if (value < 0 || (maxValue != -1 && value > maxValue))
        {
            cout << "Invalid input! Please try again: ";
        }
    } while (value < 0 || (maxValue != -1 && value > maxValue));
    return value;
}