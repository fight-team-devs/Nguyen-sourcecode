#include<iostream>
#include<math.h>
using namespace std;
long int n, m;
void SoDoiXung()//so doi xung la so khi ghi nguoc lai se bang so ban dau
{
	long int a, b = 0, i;
	//thuat toan:ghi nguoc lai so vua nhap
	for (i = 0;;i++)
	{
		a = n % 10;//chia lay du (tach so cuoi cung)
		b = a + 10 * b;//ghi nguoc tung so
		n = n / 10;//cat so cuoi cung di
		if (n == 0)
		{
			break;
		}
	}
	if (m < 10)//so tu 1 den 9 coi nhu khong doi xung
	{
		cout << "so vua nhap khong phai la so doi xung" << endl;
	}
	else if (b == m)//so sanh so ghi nguoc voi so ban dau duoc nhap
	{
		cout << "so vua nhap la so doi xung" << endl;
	}
	else
	{
		cout << "so vua nhap khong phai la so doi xung" << endl;
	}

}
void SoChinhPhuong()
{
	long int i, binhphuong = 1;
	for (i = 0;i <= m;i++)//xet day so tu 0 den so vua nhap
	{
		binhphuong = (int)pow(i, 2);
		if (binhphuong == m)
		{
			cout << "so do la so chinh phuong" << endl;
			break;
		}
	}
	if (binhphuong != m)
	{
		cout << "so do khong phai la so chinh phuong" << endl;
	}
}
//cach 2: tinh can bac hai truoc roi so sanh kieu nguyen va kieu thuc
//{	
//	double a;
//	int i;
//	for (i = 0;i <= m;i++)
//	{
//		a = sqrt(m);
//		if (double(a) == int(a))
//		{
//			cout << "so do la so chinh phuong" << endl;break;
//		}
//		else
//		{
//			cout << "so do khong phai la so chinh phuong" << endl;break;
//		}
//	}	
//}
void SoNguyenTo()
{
	int i, sodu = 0;
	if (m == 1 || m == 0)
	{
		cout << "so do khong phai la so nguyen to" << endl;
	}
	else if (m == 2)
	{
		cout << "so do la so nguyen to" << endl;
	}
	else
	{
		for (i = 2;i < m;i++)
		{
			sodu = m % i;//chia lay du lan luot tu 2 den so vua nhap
			if (sodu == 0)
			{
				cout << "so do khong phai la so nguyen to" << endl;break;
			}
		}
		if (sodu != 0)
		{
			cout << "so do la so nguyen to" << endl;
		}
	}
}
void TangDanGiamDan()//thuat toan: xet nguoc so vua nhap, neu giam dan => so do tang dan va nguoc lai
{
	int i, sodu, a = 10, b = 0;
	int c = 0, d = 0, e = 10, f = 10;
	for (i = 0;m > 0;i++)
	{
		sodu = m % 10;
		b = a - sodu;//bieu thuc tim so tang dan
		c = sodu - d;//bieu thuc tim so giam dan
		a = sodu;//luu lai gia tri so du "TRUOC DO" cho truong hop tang dan
		d = sodu;//luu lai gia tri so du "TRUOC DO" cho truong hop giam dan
		m = m / 10;
		if (b < 0 && c < 0)
		{
			cout << "cac chu so vua nhap khong tang dan,khong giam dan" << endl;break;
		}
		if (b == 0)//neu tang dan nhung khong nghiem ngat
		{
			e = 0;//muc dich nhu flag de thong bao
		}
		if (c == 0)//neu giam giam nhung khong nghiem ngat
		{
			f = 0;//muc dich nhu flag de thong bao
		}
	}

	if (b >= 0)//neu tat ca deu tang dan
	{
		if (e == 0)//neu co it nhat 2 so lien tiep bang nhau
		{
			cout << "cac chu so vua nhap tang dan khong nghiem ngat" << endl;
		}
		else
		{
			cout << "cac chu so vua nhap tang dan nghiem ngat" << endl;
		}
	}
	else if (c >= 0)//su dung else if vi truong hop tren xay ra, ta se khong xet nua
	{
		if (f == 0)//neu co it nhat 2 so lien tiep bang nhau
		{
			cout << "cac chu so vua nhap giam dan khong nghiem ngat" << endl;
		}
		else
		{
			cout << "cac so vua nhap giam dan nghiem ngat" << endl;
		}
	}
}
int main()
{
	cout << "nhap so n: ";
	cin >> n;
	m = n;
	SoDoiXung();
	SoChinhPhuong();
	SoNguyenTo();
	TangDanGiamDan();
	system("pause");
	return 0;

}