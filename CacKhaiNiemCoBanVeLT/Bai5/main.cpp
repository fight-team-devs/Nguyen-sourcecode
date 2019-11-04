#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double pi = 3.14256, r,p,s;
	cout << "ban kinh cua duong tron la : ";
	cin >> r;
	p = 2 * pi * r;
	s = pi * pow(r, 2);
	// cach xuat ra man hinh so co 3 chu so sau dau phay
    /*cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3); */
	cout << "chu vi hinh tron la : " << p << endl;
	cout << " dien tich hinh tron la : " << s<<endl;
	system("pause");
	return 0;
}