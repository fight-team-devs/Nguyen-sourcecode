//thao tac tinh toan trong mang
//a)Co bao nhieu so chia het cho 4 nhung khong chia het cho 5
//b) Tinh Tong cac so nguyen to co trong mang
#include<iostream>
using namespace std;
//ham nhap mang
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
//xet so chia het cho 4 nhung khong chia het cho 5
int kiemTra(int n)
{
	int surplus1,surplus2;
	surplus1 = n % 4;
	surplus2 = n % 10;
	if (surplus1 == 0 && surplus2 != 0)
	{
		return 1;
	}
	else if (surplus1 != 0 || surplus2 == 0)
	{
		return 0;
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

//kiem tra so nguyen to
int main()
{
	int MangA[1000];
	int n;
	int count = 0;
	int TongSoNguyenTo=0;
	cout << "nhap so phan tu cho mang: ";
	cin >> n;
	NhapMang(MangA, n);
	for (int i = 0; i < n; i++)
	{
		if (kiemTra(MangA[i]) == 1)
		{
			count++;
		}
	}
	cout<<"Co "<<count<<" so chia het cho 4 nhung khong chia het cho 5"<<endl;
	for (int j = 0; j < n; j++)
	{
		if (KiemTraSoNguyenTo(MangA[j])==1)
		{
			TongSoNguyenTo += MangA[j];
		}
	}
	cout << "Tong cac so nguyen to co trong mang la: " << TongSoNguyenTo << endl;
	system("pause");
	return 0;
}