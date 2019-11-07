#include<iostream>
using namespace std;
int main()
{
	char kytu,kytu1;
	int so;
	while (1)
	{
		cout << "nhap vao ky tu: ";
		cin >> kytu;
		so = static_cast<int>(kytu);
		while (so < 65 || (so > 90 && so < 97) || so>122)
		{
			cout << "nhap lai ky tu: ";
			cin >> kytu;
			so = static_cast<int>(kytu);
		}
		if (so > 41 && so <= 90)
		{
			so = so + 32;
			kytu1 = static_cast<char>(so);
			cout << "chu cai thuong la: " << kytu1 << endl;
			so = so - 32;
		}
		if(so>96&&so<123)
		{
			so = so - 32;
			kytu1 = static_cast<char>(so);
			cout << "chu cai hoa la: " << kytu1 << endl;
		}
	}
	system("pause");
	return 0;
}