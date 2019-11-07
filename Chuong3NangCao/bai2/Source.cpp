#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d, e, f;
	float D,Dx,Dy;
	while (1)
	{
		cout << "giai he phuong trinh:" << endl;
		cout << "nhap gia tri cho a: " << endl;
		cin >> a;
		cout << "nhap gia tri cho b: " << endl;
		cin >> b;
		cout << "nhap gia tri cho c: " << endl;
		cin >> c;
		cout << "nhap gia tri cho d: " << endl;
		cin >> d;
		cout << "nhap gia tri cho e: " << endl;
		cin >> e;
		cout << "nhap gia tri cho f: " << endl;
		cin >> f;
		D = a * e - b * d;
		Dx = c * e - f * b;
		Dy = a * f - d * c;
		if (D == Dx && Dx == Dy && Dy == 0)
		{
			cout << "he co vo so nghiem" << endl;
		}
		if (D == 0 && Dx != 0)
		{
			cout << "he vo nghiem" << endl;
		}
		if (D == 0 && Dy != 0)
		{
			cout << "he vo nghiem" << endl;
		}
		if (D != 0)
		{
			cout << "he co nghiem la: x = " << (Dx / D) << " y = " << (Dy / D) << endl;
		}

	}
	system("pause");
	return 0;
}