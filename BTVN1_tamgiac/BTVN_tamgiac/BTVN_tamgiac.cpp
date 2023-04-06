// Khai báo thư viện
#include <iostream>;
// Khai báo tên
using namespace std;

int main() {
	//Khai báo biến a, b, c thuộc kiểu dữ liệu số thực
	double a, b, c;
	// xuất dữ liệu a
	cout << " Nhap a: " << endl;
	// nhập dữ liệu a
	cin >> a;
	// xuất dữ liệu b
	cout << " Nhap b: " << endl;
	//Nhập dữ liệu b
	cin >> b;
	//Xuất dữ liệu c
	cout << " Nhap c: " << endl;
	//Nhap dữ liệu c
	cin >> c;

	/* P: Chu vi; S: Dien tich; v: nữa chu vi; h: đường cao;
	z (trong tam giác cân): h là đường cao nên z =  HB = HC = 1/2 BC*/
	double P, S, v, h, z;


	// Xét điều kiện để a, b, c là 3 cạnh của tam giác
	if (a, b, c > 0 && a + b > c && a + c > b && b + c > a) {
		// Nếu điều kiện đúng
		cout << " a, b , c la 3 canh cua tam giac " << endl;

		// Điều kiện nếu 3 canh a, b, c là tam giac deu
		if (a == b && b == c && a == c) {
			cout << " Tam giac deu" << endl;
			P = 3 * a;
			S = (a * a) * (sqrt(3) / 4);
			cout << " Chu vi P = " << P << " va " << " Dien tich S = " << S << endl;
		}
		
		// Điều kiện để a, b, c là tam giác vuông
		else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
			cout << " Tam giac vuong " << endl;
			P = a + b + c;
			S = (a * b) / 2;
			cout << " Chu vi P = " << P << " va " << " Dien tich S = " << S << endl;

		}
		//Điều kiện để a, b, c là tam giác cân
		else if (a == b || a == c || b == c) {
			cout << " Tam giac can" << endl;
			/*trong tam giac can h là đường cao
			chia đôi cạnh c --> z = 1/2 canh c*/
			z = 0.5 * c;
			h = sqrt((a * a) - (z * z));
			P = a * 2 + c;
			S = 0.5 * a * h;
			cout << " Chu vi P = " << P << " va " << " Dien tich S = " << S << endl;
		}
		else{
			cout << "Tam giac thuong " << endl;
			v = (a + b + c) / 2;
			h = 2 * (sqrt(v * (v - a) * (v - b) * (v - c)) / a);
			P = a + b + c;
			S = (1 / 2) * h * c;
			cout << "  nua chu vi v = " << v << " va " << " chieu cao h = " << h << endl;
			cout << " Chu vi P = " << P << " va " << " Dien tich S = " << S << endl;
		}
	}
	else
		cout << " a, b, c khong phai la 3 canh cua tam giac " << endl;
	return 0;
}