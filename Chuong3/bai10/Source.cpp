#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c, pytago;
	while (1)
	{
		cout << "nhap gia tri 3 canh tam giac" << endl;
		cout << "nhap a: ";
		cin >> a;
		while (a <= 0)
		{
			cout << "nhap lai a :";
			cin >> a;
		}
		cout << "nhap b: ";
		cin >> b;
		while (a <= 0)
		{
			cout << "nhap lai b :";
			cin >> b;
		}
		cout << "nhap c: ";
		while (a <= 0)
		{
			cout << "nhap lai c :";
			cin >> c;
		}
		cin >> c;
		if (a < (b + c) && b < (a + c) && c < (a + b))
		{
			cout << "ba so vua nhap la 3 canh cua tam giac" << endl;
		    if (a == b || b == c || c == a)
			{
				if (a == b && b== c)
				{
					cout << "tam giac nay la tam giac deu"<<endl;
				}
				if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
				{
					cout << "tam giac nay la tam giac vuong can" << endl;
				}
				else
				{
					cout << "tam giac nay la tam giac can" << endl;
				}
			}
			else
			{
				if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
				{
					cout << "tam giac nay la tam giac vuong" << endl;
				}
				else
				{
					cout << "tam giac nay la tam giac thuong" << endl;
				}
			}
		}
		else
		{
			cout << "3 so vua nhap khong phai la ba canh cua tam giac" << endl;
		}
	}
	system("pause");
	return 0;
}