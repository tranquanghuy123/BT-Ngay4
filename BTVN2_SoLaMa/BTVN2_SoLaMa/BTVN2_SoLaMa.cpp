//Khai bao thu vien
#include <iostream>;
//Khai báo tên
using namespace std;

int main() {
	//Khai báo biến n có kiểu dữ liệu là số nguyên không dấu
	signed int n;
	// Xuất số nguyên n
	cout << " Nhap n = " << endl;
	// Nhập số nguyên n
	cin >> n;
	// Khai báo biến a có kiểu dữ liệu là số nguyên không dấu với biến a là hàng đơn vị
	signed int a = n % 10;
	// Khai báo biến b có kiểu dữ liệu là số nguyên không dấu với biến b là hàng chục
	signed int b = (n / 10) % 10;
	//Khai báo biến c có kiểu dữ liệu là số nguyên không dấu với biến  là hàng trăm
	signed int c = n / 100;

	//Điều kiện để số có 3 chữ số
	if (n < 10 || n > 99) {
		cout << " Nhap so co 3 chu so : " << endl;
	}
	else {
		// In ra hàng trăm
		switch (c) {
		case 1: cout << " C" << endl;
			break;
		case 2: cout << " CC" << endl;
			break;
		case 3: cout << " CCC" << endl;
			break;
		case 4: cout << " CD" << endl;
			break;
		case 5: cout << " D" << endl;
			break;
		case 6: cout << " DC" << endl;
			break;
		case 7: cout << " DCC" << endl;
			break;
		case 8: cout << " DCCC" << endl;
			break;
		case 9: cout << " CM" << endl;
			break;
		}
		//In ra hàng chục
		switch (b) {
		case 1: cout << " X" << endl;
			break;
		case 2: cout << " XX" << endl;
			break;
		case 3: cout << " XXX" << endl;
			break;
		case 4: cout << " XL" << endl;
			break;
		case 5: cout << " L" << endl;
			break;
		case 6: cout << " LX" << endl;
			break;
		case 7: cout << " LXX" << endl;
			break;
		case 8: cout << " LXXX" << endl;
			break;
		case 9: cout << " XC" << endl;
			break;
		}
		switch (a) {
		case 1: cout << " I" << endl;
			break;
		case 2: cout << " II" << endl;
			break;
		case 3: cout << " III" << endl;
			break;
		case 4: cout << " IV" << endl;
			break;
		case 5: cout << " V" << endl;
			break;
		case 6: cout << " VI" << endl;
			break;
		case 7: cout << " VII" << endl;
			break;
		case 8: cout << " VIII" << endl;
			break;
		case 9: cout << " IX" << endl;
			break;
		}
	}
	return 0;
	}
