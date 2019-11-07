#include<iostream>
using namespace std;
int main()
{
	float a,b,x;
	cout << "giai phuong tirnh ax+b=0" << endl;
	cout << "gia tri a la: ";
	cin >> a;
	cout << "gia tri b la: ";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "phuong trinh co vo so nghiem" << endl;
		}
		else
		{
			cout << "phuong trinh vo nghiem" << endl;
		}
	}
	else
	{
		x = -b / a;
		if (b == 0)
		{
			cout << "phuong trinh co nghiem x = 0" << endl;
		}
		else
		{
			cout << "nghiem phuong trinh la: " << x << endl;
		}
	}
		system("pause");
	return 0;
}