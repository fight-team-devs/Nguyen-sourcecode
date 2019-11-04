#include <iostream>
using namespace std;
int main() 
{
	float a, a1, b,b1, c,c1,TB;
	cout << "diem thi mon toan la : ";
	cin >> a;
	cout << "he so: ";
	cin >> a1;
	cout << "diem thi mon hoa la : ";
	cin >> b;
	cout <<"he so: ";
	cin >> b1;
	cout << "diem thi mon ly la : ";
	cin >> c;
	cout <<"he so : ";
	cin >> c1;
	cout.setf(ios::showpoint);
	cout.precision(3);
	TB = (a * a1 + b * b1 + c * c1) / (a1 + b1 + c1);
	cout << "diem trung binh cua hoc sinh la : " << TB<<endl;
	system("pause");
    return 0;
}