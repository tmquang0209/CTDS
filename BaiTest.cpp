#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    for (int i = 1; i < 87; i++)
    {
        if (65 * i % 87 == 1)
            cout << i << endl;
    }
}

// int main()
// {
//     int n;
//     cout << "\nNhap n = ";
//     cin >> n;
//     int dem;

//     for (int i = 2; i <= n; i++)
//     {
//         dem = 0;
//         while (n % i == 0)
//         {
//             ++dem;
//             n /= i;
//         }
//         if (dem)
//         {
//             cout << i;
//             if (dem > 1)
//                 cout << "^" << dem;
//             if (n > i)
//             {
//                 cout << " * ";
//             }
//         }
//     }
// }
