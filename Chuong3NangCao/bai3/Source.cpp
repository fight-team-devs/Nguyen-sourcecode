#include<iostream>
using namespace std;

int main()
{
	while (1) {
		int number, basodau, basogiua, basocuoi;
		int tramtrieu, chuctrieu, trieu;
		int tramnghin, chucnghin, nghin;
		int tram, chuc, donvi;

		cout << "nhap so co chin chu so: ";
		cin >> number;
		basodau = number / 1000000;
		basogiua = number / 1000 - basodau * 1000;
		basocuoi = number - 1000000 * basodau - 1000 * basogiua;
		//cout << basodau << endl << basogiua << endl << basocuoi << endl;
		//cach tinh 3 so dau
		tramtrieu = basodau / 100;
		chuctrieu = (basodau % 100) / 10;
		trieu = (basodau % 100) % 10;
		switch (tramtrieu) {
		case 1: cout << "mot tram";break;
		case 2: cout << "hai tram";break;
		case 3: cout << "ba tram";break;
		case 4: cout << "bon tram";break;
		case 5: cout << "nam tram";break;
		case 6: cout << "sau tram";break;
		case 7: cout << "bay tram";break;
		case 8: cout << "tam tram";break;
		case 9: cout << "chin tram";break;
		}
		cout << " ";
		switch (chuctrieu) {
		case 0:
			if (tramtrieu == 0)
			{
				break;
			}
			if (trieu == 0) {
				cout << "";break;
			}
			else
			{
				cout << "le";break;
			}
		case 1: cout << "muoi";break;
		case 2: cout << "hai muoi";break;
		case 3: cout << "ba muoi";break;
		case 4: cout << "bon muoi";break;
		case 5: cout << "nam muoi";break;
		case 6: cout << "sau muoi";break;
		case 7: cout << "bay muoi";break;
		case 8: cout << "tam muoi";break;
		case 9: cout << "chin muoi";break;
		}
		cout << " ";
		switch (trieu) {
		case 0:
			if (chuctrieu == 0 && tramtrieu == 0)
			{
				cout << "";break;
			}
			cout << "";break;
		case 1: cout << "mot ";break;
		case 2: cout << "hai ";break;
		case 3: cout << "ba ";break;
		case 4: cout << "bon ";break;
		case 5: 
			if (chuctrieu == 0 && tramtrieu == 0)
			{
				cout << "nam";break;
			}
			else
			{
				cout << "lam ";break;
			}
			
		case 6: cout << "sau ";break;
		case 7: cout << "bay ";break;
		case 8: cout << "tam ";break;
		case 9: cout << "chin ";break;
		}
		if (tramtrieu == 0 && chuctrieu == 0 && trieu == 0)
		{
			cout << "";
		}
		else
		{
			cout << " trieu ";
		}
		//cach tinh 3 so giua
		tramnghin = basogiua / 100;
		chucnghin = (basogiua % 100) / 10;
		nghin = (basogiua % 100) % 10;
		switch (tramnghin) {
		case 0:
			if (chucnghin==0 && nghin == 0)
			{
				cout << "";break;
			}
			if (tramtrieu == 0 && chuctrieu == 0 && trieu == 0)
			{
				cout << "";break;
			}
			else
			{
				cout << "khong tram";break;
			}
		case 1: cout << "mot tram";break;
		case 2: cout << "hai tram";break;
		case 3: cout << "ba tram";break;
		case 4: cout << "bon tram";break;
		case 5: cout << "nam tram";break;
		case 6: cout << "sau tram";break;
		case 7: cout << "bay tram";break;
		case 8: cout << "tam tram";break;
		case 9: cout << "chin tram";break;
		}
		cout << " ";
		switch (chucnghin) {
		case 0:
			if (tramnghin == 0 && tramtrieu == 0 && chuctrieu == 0 && trieu == 0)
			{
				break;
			}
			if (nghin == 0) {
				cout << "";break;
			}
			else
			{
				cout << "le";break;
			}
		case 1: cout << "muoi";break;
		case 2: cout << "hai muoi";break;
		case 3: cout << "ba muoi";break;
		case 4: cout << "bon muoi";break;
		case 5: cout << "nam muoi";break;
		case 6: cout << "sau muoi";break;
		case 7: cout << "bay muoi";break;
		case 8: cout << "tam muoi";break;
		case 9: cout << "chin muoi";break;
		}
		cout << " ";
		switch (nghin) {
		case 0:
			if (chucnghin == 0 && tramnghin == 0)
			{
				cout << "";break;
			}
			cout << "";break;
		case 1: cout << "mot ";break;
		case 2: cout << "hai ";break;
		case 3: cout << "ba ";break;
		case 4: cout << "bon ";break;
		case 5:
			if (chucnghin == 0 && tramnghin == 0)
			{
				cout << "nam ";break;
			}
			else
			{
				cout << "lam ";break;
			}
			
		case 6: cout << "sau ";break;
		case 7: cout << "bay ";break;
		case 8: cout << "tam ";break;
		case 9: cout << "chin ";break;
		}
		if (tramnghin == 0 && chucnghin == 0 && nghin == 0)
		{
			cout << "";
		}
		else
		{
			cout << "nghin ";
		}
		//cach tinh 3 so cuoi
		tram = basocuoi / 100;
		chuc = (basocuoi % 100) / 10;
		donvi = (basocuoi % 100) % 10;
		switch (tram) {
		case 0:
			if (chuc == 0 && donvi == 0)
			{
				cout << "";break;
			}
			
			if (tramtrieu == 0 && chuctrieu == 0 && trieu == 0 && tramnghin == 0 && chucnghin == 0 && nghin == 0)
			{
				cout << "";break;
			}
			else
			{
				cout << "khong tram";break;
			}
		case 1: cout << "mot tram";break;
		case 2: cout << "hai tram";break;
		case 3: cout << "ba tram";break;
		case 4: cout << "bon tram";break;
		case 5: cout << "nam tram";break;
		case 6: cout << "sau tram";break;
		case 7: cout << "bay tram";break;
		case 8: cout << "tam tram";break;
		case 9: cout << "chin tram";break;
		}
		cout << " ";
		switch (chuc) {
		case 0:
			if (tram == 0 && tramtrieu == 0 && chuctrieu == 0 && trieu == 0 && tramnghin == 0 && chucnghin == 0 && nghin == 0)
			{
				break;
			}
			if (donvi == 0) {
				cout << "";break;
			}
			else
			{
				cout << "le";break;
			}
		case 1: cout << "muoi";break;
		case 2: cout << "hai muoi";break;
		case 3: cout << "ba muoi";break;
		case 4: cout << "bon muoi";break;
		case 5: cout << "nam muoi";break;
		case 6: cout << "sau muoi";break;
		case 7: cout << "bay muoi";break;
		case 8: cout << "tam muoi";break;
		case 9: cout << "chin muoi";break;
		}
		cout << " ";
		switch (donvi) {
		case 1: cout << "mot ";break;
		case 2: cout << "hai ";break;
		case 3: cout << "ba ";break;
		case 4: cout << "bon ";break;
		case 5:
			if (chuc == 0 && tram == 0)
			{
				cout << "nam";break;
			}
			else
			{
				cout << "lam ";break;
			}
		case 6: cout << "sau ";break;
		case 7: cout << "bay ";break;
		case 8: cout << "tam ";break;
		case 9: cout << "chin ";break;
		}
		
		if (tramtrieu == 0 && chuctrieu == 0 && trieu == 0 && tramnghin == 0 && chucnghin == 0 && nghin == 0 && tram == 0 && chuc == 0 && donvi == 0)
		{
			cout << "khong" << endl;
		}
		cout << endl;
	}
	system("pause");

	return 0;
}