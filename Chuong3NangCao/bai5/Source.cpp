#include<iostream>
using namespace std;
int main()
{
	int x, i ,binhphuong;
	cout << "nhap vao so nguyen duong X = ";
	cin >> x;
	binhphuong = 1;
	for (i = 0;i <=x;i++)
	{
		binhphuong = (int)pow(i,2);
		if (binhphuong == x)
		{
			cout << "so vua nhap la so chinh phuong" << endl;
			binhphuong = x;
			break;
		}
	}
	if (x!=binhphuong)
	{
		cout << "so vua nhap khong phai la so chinh phuong" << endl;
	}
	system("pause");
	return 0;
}