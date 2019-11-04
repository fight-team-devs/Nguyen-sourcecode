#include <iostream>
#include<string>
using namespace std;
void teststatic() {
	static int a = 1;
	a++;
}
int main()
{
	int BienSo, Tong = 0, m, sonut;
	cout << "nhap bien so xe toi da 5 chu so : ";
	cin >> BienSo;
	while (BienSo > 100000 || BienSo < 0) {
		cout << "deo thay bao nhap toi da 5 chu so ak,nhap lai : ";
		cin >> BienSo;
	}
	while (BienSo > 0) {
		m = BienSo % 10;
		Tong = Tong + m;
		BienSo = BienSo / 10;
	}
	sonut = Tong % 10;
	cout << "so nut cua bien so xe la : " << sonut << endl;


	system("pause");

	return 0;
}
