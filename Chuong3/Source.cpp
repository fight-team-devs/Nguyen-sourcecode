#include<iostream>
using namespace std;
int main()
{
	int a, b, max, min;
	cout << "nhap gia tri cho a: ";
	cin >> a;
	cout << "nhap gia tri cho b: ";
	cin >> b;
	(a > b) ? max = a : max = b;
	cout << "gia tri max la: " << a<<endl;
	(a < b) ? min = a : min = b;
	cout << "gia tri min la: " << b<<endl;
	system("pause");
	return 0;
}