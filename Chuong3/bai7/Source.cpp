#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	while(1){
	float a, b, c, denta,x1,x2;
	cout << "giai phuong trinh bac hai: "<<endl;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "nhap c: ";
	cin >> c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
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
			if (c == 0)
			{
				cout << "phuong trinh co nghiem x = 0" << endl;
			}
			else
			{
				cout << "phuong trinh co nghiem la: " << (-c / b) << endl;
			}
		}

	}
	else
	{
		denta = pow(b, 2) - 4 * a * c;
		if (denta < 0)
		{
			cout << "phuong trinh vo nghiem" << endl;
		}
		if (denta == 0)
		{
			cout << "phuong trinh co nghiem kep: x = " << (-b / (2 * a)) << endl;
		}
		if (denta > 0)
		{
			x1 = (-b + sqrt(denta)) / (2 * a);
			x2 = (-b - sqrt(denta)) / (2 * a);
			cout << "phuong trinh co hai nghiem phan biet: x1 = " << x1 << " ,x2 = " << x2 << endl;
		}
	}
	}
	system("pause");
	return 0;
}