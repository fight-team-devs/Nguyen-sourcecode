#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	float a,b,tong,hieu,tich,thuong;
	cout << "nhap lan luot hai so a va b: \n";
	cin >> a >> b;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a/b;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "tong hai so la : "<< tong<<endl;
	cout << "hieu hai so la : " << hieu <<endl;
	cout <<"tich hai so la: " << tich<<endl;
	cout<<"thuong hai so la: " <<thuong<<endl;
	system("pause");
	return 0;
}