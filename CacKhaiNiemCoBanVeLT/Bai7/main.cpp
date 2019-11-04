#include <iostream>
using namespace std;
int main()
{
	int a, b,max,min;
	cout << "nhap lan luot hai so nguyen: " << endl;
	cin >> a;
	cin >> b;
	max=(a > b ? a : b);
	min = a < b ? a : b;
	cout << "gia tri max la: " << max << endl;
	cout << "gia tri min la: " << min << endl;
	system("pause");
	return 0;
}