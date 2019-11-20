//sua cac so nguyen to co trong mang thanh so 0
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
		}
		return 1;
	}
}
int main()
{
	int MangA[1000];
	int n, m = 0;
	cout << "nhap so phan tu cho mang: ";
	cin >> n;
	NhapMang(MangA, n);
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(MangA[i]) == 1)
		{
			MangA[i] = 0;
		}
		if (i == 0)
		{
			cout << "mang A sau khi sua la: " ;
		}
		cout << MangA[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}