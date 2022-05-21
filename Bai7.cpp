/*
Viết chương trình chạy thuật toán Sàng Eratosthenes.
Đầu vào: n nguyên (n ≥ 2).
Đầu ra: Danh sách các số nguyên tố ≤ n.
*/

#include <iostream>

using namespace std;

void Eratosthenes()
{
    int n;
    cout << "Nhap n: ";
    while (!(cin >> n) || n < 2)
    {
        cout << "Nhap sai, nhap lai: ";
    }
    bool check[n + 1];
    for (int i = 0; i <= n; i++)
    {
        check[i] = true;
    }

    for (int i = 2; i <= n; i++)
    {
        if (check[i])
        {
            for (int j = i * 2; j <= n; j += i)
            {
                check[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (check[i])
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main()
{
    Eratosthenes();
    return 0;
}