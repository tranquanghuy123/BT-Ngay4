#include <iostream>//thu vien
using namespace std;//dat ten
int main()
{
    int n, a, b, c;//khai bao bien n,a,b,c
    cout << "Nhap so n = ";//ham xuat n
    cin >> n;//ham nhap n
    /// n = 12
    cout << "Cac so nguyen to : ";// ket qua xuat ra
    for (a = 2; a <= n; a++) {
        /// a = 6
        c = 0;

        // chạy xong vòng lặp b
        for (b = 2; b < a; b++) {
            // b = 3
            /// nếu a chia hết cho b => đây không phải là số nguyên tố 
            if (a % b == 0) {
                c = 1;
            }
        }

        /// nếu c =1 thì nó k phải là số nguyên tố
        /// nếu c = 0 thì nó k phải là số nguyên tố
        if (c == 0) cout << a << "  ";
    }
    return 0;