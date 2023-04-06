#include<iostream>	// Khai báo thư viện
using namespace std; //đặt tên 
int main() {
	int a;
	cout << "Nhap a: " << endl;
	cin >> a;
	int b;
	cout << "nhap b: " << endl;
	cin >> b;

	int x = a % b;
	cout << " chia lay phan du cua a va b:" << x << endl;
	int v = a / b;
	cout << " chia lay phan nguyen cua a va b:" << v << endl;

	return 0;
}