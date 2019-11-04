#include <iostream>
#include <string>
using namespace std;
int main()
{
	string c;
	int Soluong;
	float DonGia, Tien,Thue;
	//cin.ignore();
	cout << "nhap ten san pham : ";
	getline(std::cin,c); 
	cout << endl << "So luong san pham : ";
	cin >> Soluong;
	cout << endl << "Don gia : ";
	cin >> DonGia;
	Tien = Soluong * DonGia;
	Thue = 0.1 * Tien;
	cout << "So tien phai tra la : "<<Tien<<" dong"<<endl;
	cout << "Thue GTGT la : " << Thue<<" dong"<<endl;
	cout << "Tong tien phai tra cho "<<Soluong<<" "<<c<<" la : " << Tien + Thue<<"dong"<<endl;
	system("pause");
	return 0;
}
