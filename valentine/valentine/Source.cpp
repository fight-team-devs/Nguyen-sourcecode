#include<iostream>
using namespace std;
int main()
{
	long int n,x,y,z;
	cout << "nhap gia tri n: ";
	cin >> n;
	while ( n > 0)
	{
		x = n % 10;
		y = n % 100;
		z = n % 1000;
		if (z == 144)
		{
			n = n / 1000;
		}
		else if(y==14)
		{
			n = n / 100;
		}
		else if (x == 1)
		{
			n = n / 10;
		}
		else
		{
			cout << "so vua nhap khong phai la so valentine" << endl;break;
		}
		while(n == 0)
		{
			cout << "so vua nhap la so valentine" << endl;break;
		}
	}
	
	
	system("pause");
	return 0;
}
