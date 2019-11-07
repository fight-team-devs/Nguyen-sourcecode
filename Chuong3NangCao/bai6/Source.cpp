#include<iostream>
using namespace std;
int main()
{
	int maso, sanpham;
	double gio,doanhso;
	while (1)
	{
		cout << "nhap ma so : ";
		cin >> maso;
		switch (maso)
		{
		case 1:
			cout << "luong cua nhan vien nay la: X (dong)" << endl;break;
		case 2:
			cout << "nhap so gio lam viec: ";
			cin >> gio;
			if (gio>0 && gio <= 40)
			{
				cout << "luong cua nhan vien nay la: " << gio << "Y dong" << endl;
			}
			if (gio > 40)
			{
				cout << "luong cua nhan vien nay la: " << ((gio - 40) * 1.5 + 40) << "Y dong" << endl;
			}
			break;
		case 3:
			cout << "nhap doanh so: ";
			cin >> doanhso;
			cout << "luong cua nhan vien nay la: 500000 + " << (0.07 * doanhso) << " dong" << endl;
			break;
		case 4:
			cout << "nhap so san pham: ";
			cin >> sanpham;
			cout << "luong cua nhan vien nay la: " << sanpham << "s dong" << endl;break;
		default:
			cout << "ma so tu 1 den 4:" << endl;
			break;
		}
		
	}
	system("pause");
	return 0;
}