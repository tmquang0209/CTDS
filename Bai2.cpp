/*
Viết chương trình chạy thuật toán Euclide mở rộng.
Đầu vào: Hai số nguyên không âm a và b.
Đầu ra: Bộ ba (d, x, y) với d = UCLN (a, b) và x, y ∈ Z thỏa mãn d = a.x + b.y
*/
#include <iostream>

using namespace std;

int main()
{
    int x = 1, y = 0, u = 0, v = 1;
    int a, b, q, r, s, t;
    a = 924;
    b = 360;
    while (b != 0)
    {
        div_t result = div(a, b);
        q = result.quot;
        r = a - b * q;
        s = x - u * q;
        t = y - v * q;
        a = b;
        x = u;
        y = v;
        b = r;
        u = s;
        v = t;
    }
    cout << "GCD: " << a << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}