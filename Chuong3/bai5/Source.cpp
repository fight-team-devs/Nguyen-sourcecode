#include<iostream>
#include<string>
using namespace std;
int main()
{
	float TNCT,heso1,heso2,heso3,heso4,a;
	a = 650000;
	heso1 = (a * 192)/100;
	heso2 = a * 234/100;
	heso3 = a * 3;
	heso4 = a * 45/10;
	cout << "tham nien cong tac cua nhan vien do la: ";
	cin>> TNCT;
	while (TNCT <= 0)
	{
		cout << "nhap the nay lam eo gi co tien,nhap lai: ";
		cin >> TNCT;
	}
	if (TNCT < 12)
	{
		cout << "luong cua nhan vien nay la: " <<dec<<heso1 ;
	}
	else if(TNCT < 36)
	{
		cout << "luong cua nhan vien nay la: " <<heso2 ;
	}
	else if (TNCT < 60)
	{
		cout << "luong cua nhan vien nay la: " <<heso3 ;
	}
	else
	{
		cout << "luong cua nhan vien nay la: " <<heso4 ;
	}
	cout << endl;
	system("pause");
	return 0;
}