#include <iostream>
using namespace std;
int main()
{
    int n, i, j, d;
    cout << "Nhap so n = ";
    cin >> n;
    cout << "Cac so nguyen to : ";
    for (i = 2; i <= n; i++) {
        d = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) d = 1;
        }
        if (d == 0) cout << i << "  ";
    }
    return 0;
}
