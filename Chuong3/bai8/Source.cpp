#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	while (1) {
		float a, b, c, denta, x1, x2,nghiem;
		cout << "giai phuong trinh trung phuong: " << endl;
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
					nghiem = -c / b;
					if (nghiem > 0)
					{
						cout << "phuong trinh co 2 nghiem x1 = " << (sqrt(-c / b)) << " x2 = " << (-sqrt(-c / b)) << endl;
					}
					else
					{
						cout << "phuong trinh vo nghiem " << endl;
					}
				}
			}

		}
		else
		{
			if (b == 0)
			{
				if (c == 0)
				{
					cout << "phuong trinh co nghiem x = 0" << endl;
				}
				else
				{
					nghiem = -c / a;
					if (nghiem > 0)
					{
						cout << "phuong trinh co nghiem x1 = " << (sqrt(sqrt(nghiem))) << " x2 = " << -(sqrt(sqrt(nghiem))) << endl;
					}
					else
					{
						cout << "phuong trinh vo nghiem" << endl;
					}
				}
			}
			else
			{
				if (c == 0)
				{
					nghiem = -b / a;
					if (nghiem > 0)
					{
						cout << "phuong trinh co 3 nghiem x1 = 0 x2 = " << (sqrt(nghiem)) << "x3 = " << -(sqrt(nghiem)) << endl;
					}
					else
					{
						cout << "phuong trinh co nghiem x = 0 " << endl;
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
						nghiem = -b / (2 * a);
						if (nghiem > 0)
						{
							cout << "phuong trinh co 2 nghiem x1 = " << (sqrt(nghiem)) << " x2 = " << (-sqrt(nghiem)) << endl;
						}
						else
						{
							cout << "phuong trinh vo nghiem" << endl;
						}
					}
					if (denta > 0)
					{
						x1 = (-b + sqrt(denta)) / (2 * a);
						x2 = (-b - sqrt(denta)) / (2 * a);
						if (x1 > 0)
						{
							if (x2 > 0)
							{
								cout << "phuong trinh co 4 nghiem x1 = " << (sqrt(x1)) << " x2 = " << -(sqrt(x1)) << " x3 = " << (sqrt(x2)) << " x4 = " << -(sqrt(x2)) << endl;
							}
							else
							{
								cout << "phuong trinh co 2 nghiem : x1 = " << (sqrt(x1)) << " x2 = " << -(sqrt(x1)) << endl;
							}
						}
						else
						{
							if (x2 > 0)
							{
								cout << "phuong trinh co 2 nghiem x1 = " << (sqrt(x2)) << " x2 = " << -(sqrt(x2)) << endl;
							}
							else
							{
								cout << "phuong trinh vo nghiem" << endl;
							}
						}
					}
				}
			}
			
		}
	}
	system("pause");
	return 0;
}