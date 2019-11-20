//tach so nguyen to trong mang a vao mang b
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
			if (i == (n - 1))
			{
				return 1;break;
			}
		}
	}
}
int main()
{
	int MangA[1000],MangB[1000];
	int n,m=0;
	cout << "nhap so phan tu cho mang: ";
	cin >> n;
	NhapMang(MangA, n);
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(MangA[i]) == 1)
		{
			MangB[m] = MangA[i];
			if (m == 0)
			{
				cout << "mang B gom cac so nguyen to la : B[] = { ";
			}
			cout << MangB[m]<<" ";
			m++;
		}
	}
	cout <<" }"<<endl;
	system("pause");
	return 0;
}