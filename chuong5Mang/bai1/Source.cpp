//cac thao tac kiem tra
//a)Mang co phai toan chan
//b)mang co phai la mang toan so nguyen to
//c)mang co phai la mang tang dan
#include<iostream>
using namespace std;
//ham nhap mang
void NhapMang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "phan tu thu " << i << " cua mang la: ";
		cin >> a[i];
	}
}
//kiem tra so n co phai la so chan hay khong
int KiemTraSoChan(int n)
{
	int surplus;
	surplus = n % 2;
	if (surplus != 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
//kiem tra so n co phai la so nguyen to
int SoNguyento(int n)
{
	if (n == 0 || n == 1)
	{
		return 0;
	}
	else if (n == 2)
		return 1;
	else if(n>2)
	{
		for (int i = 2; i < n; i++)
		{
			int surplus = n % i;
			if (surplus == 0)
			{
				return 0;break;
			}
			if (i == (n - 1))
			{
				return 1;break;
			}
		}
	}
}
//kiem tra mang co tang dan hay khong
int DayTangDan(int a[], int n)
{
	int min=a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			return 0;break;
		}
		else if(i=(n-1))
		{
			return 1;break;
		}
	}
}
int main()
{
	int MangA[1000];
	int n;
	cout << "nhao so luong phan tu cua mang: ";
	cin >> n;
    NhapMang(MangA,n);
	//kiem tra mang co phai toan so chan hay khong
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChan(MangA[i]) == 0)
		{
			cout << "mang khong phai toan so chan." << endl;break;
		}
		else if (i == (n - 1))
		{
			cout << "mang vua nhap toan so chan. " << endl;break;
		}
	}
	//xuat ra mang co phai toan so nguyen to hay khong
	for (int j = 0; j < n; j++)
	{
		if (SoNguyento(MangA[j]) == 0)
		{
			cout << "mang khong phai toan so nguyen to." << endl;break;
		}
		else if (j == (n - 1))
		{
			cout << "mang vua nhap toan so nguyen to. " << endl;break;
		}
	}
	//xuat ra mang co tnag dan hay khong
	if (DayTangDan(MangA, n) == 0)
	{
		cout<< "mang khong tang dan"<<endl;
	}
	else if (DayTangDan(MangA, n) == 1)
	{
		cout << "mang tang dan"<<endl;
	}
	system("pause");
	return 0;
}