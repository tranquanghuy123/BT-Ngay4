//Khai báo thư viện
#include <iostream>;
//Khai báo tên
using namespace std;

int main() {
	//Khai báo biến a, b, c có kiểu dữ liệu là số nguyên
		int a, b, c;
	// xuất a
		cout << " Nhap a: " << endl;
	// nhập a
		cin >> a;
	// xuất b
		cout << " Nhap b: " << endl;
	// nhập b
		cin >> b;
	// xuất c
		cout << "Nhap c: " << endl;
	// nhap c
		cin >> c;
		int x1;
		int x2;
 
	// nhap delta	
		float delta = (b*b) - 4*a*c;
		// xuat delta
		cout << "gia tri cua delta la: " << delta << endl;
	// căn bậc 2 của delta
		
		if (delta < 0) {
			cout << " Phuong trinh vo nghiem" << endl;
	}
		else if (delta == 0) {
			x1 = x2 = -b / 2 * a;
			cout << "Phuong trinh co nghiem kep" << x1 << endl;

		}
		else if (delta > 0) {
			delta = sqrt(delta);
			x1 = (-b + delta) / (2 * a);
			x2 = (-b - delta) / (2 * a);
			cout << "Phuong trinh co 2 nghiem phan biet : " << x1 << " va "  << x2 << endl;

		}
		return 0;

}