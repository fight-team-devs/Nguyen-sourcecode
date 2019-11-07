#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	float giobatdau, gioketthuc, giothue,tong;
	float a = 30000, b = 21000, c = 90000;
	while (1)
	{
		cout << "gio bat dau: ";
		cin >> giobatdau;
		while (giobatdau < 8 || giobatdau>24)
		{
			cout << "nhap lai gio bat dau: ";
			cin >> giobatdau;
		}
		cout << "gio ket thuc: ";
		cin >> gioketthuc;
		while (gioketthuc <= giobatdau || gioketthuc > 24)
		{
			cout << "nhap lai gio ket thuc: ";
			cin >> gioketthuc;
		}
		giothue = gioketthuc - giobatdau;
		if (giothue <= 3)
		{
			tong = giothue * 30000;
			cout << "so tien khach phai tra la: " << tong << " dong" << endl;
		}
		else
		{
			if (giothue < 8)
			{
				tong = c + (giothue - 3) * b;
				cout << "so tien khach phai tra la: " << tong << " dong" << endl;
			}
			else
			{
				tong = (float)0.9 * (c + (giothue - 3) * b);
				cout << "so tien khach phai tra la: " << tong << " dong" << endl;
			}
		}
	}
	system("pause");
	return 0;
}