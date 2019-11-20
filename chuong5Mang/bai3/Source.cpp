//cac thao tac tim kiem trong mang
//a)vi tri bat ki trong mang
//b)vi tri so nguyen to dau tien trong mang neu co
//c)tim so nho nhat trong mang
//d)tim so duong nho nhat trong mang
#include<iostream>
using namespace std;
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout << "nhap mang: " << endl;
		}
		cin >> a[i];
	}
}
//kiem tra so nguyen to
int KiemTraSoNguyenTo(int n)
{
	if (n == 0 || n == 1)
	{
		return 0;
	}
	else if (n == 2)
		return 1;
	else if (n > 2)
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
//ham tim so nho nhat trong mang
int SoNhoNhat(int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}
//so duong nho nhat trong mang
int SoDuongNhoNhat(int a[], int n)
{
	int min = 0;
	int flag = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] >= 0 && flag==0)
		{
			min = a[i];
			flag = 1;
			continue;
		}
		if (flag == 1)
		{
			if (a[i] < min && a[i] >= 0)
			{
				min = a[i];
			}
		}
	}
	return min;
}
//kiem tra co so duong trong mang hay khong
int kiemTraTonTaiSoDuong(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			return 1;break;
		}
		if (i == (n - 1))
		{
			return 0;
		}
	}	
}
int main()
{
	int MangA[1000];
	int n,vitri;
	cout << "nhap so phan tu cho mang: ";
	cin >> n;
	NhapMang(MangA, n);
	cout << "nhap vi tri can tim trong mang: ";
	cin >> vitri;
	// vi tri cua phan tu trong mang
	if (vitri > n)
	{
		cout << "nhap lai vi tri: ";
		cin >> vitri;
	}
	cout << "gia tri thu " << vitri << " trong mang la " << MangA[vitri-1] << endl;
	//vi tri so nguyen to dau tien
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(MangA[i]) == 1)
		{
			cout << "so nguyen to dau tien trong mang nam o vi tri so " << (i + 1) << endl;break;
		}
		if(KiemTraSoNguyenTo(MangA[i]) == 0 && i==(n-1))
		{
			cout << "khong co so nguyen to nao trong mang" << endl;
		}
	}
	//tim so nho nhat trong mang
	cout << "gia tri nho nhat trong mang la: " << SoNhoNhat(MangA, n) << endl;
    //tim so duong nho nhat trong mang
	if (kiemTraTonTaiSoDuong(MangA, n) == 0)
	{
		cout << "mang khong co so duong." << endl;
	}
	else
	{
		cout << "So duong nho nhat trong mang la: " << SoDuongNhoNhat(MangA, n) << endl;
	}
	system("pause");
	return 0;
}