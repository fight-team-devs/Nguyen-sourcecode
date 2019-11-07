#include<iostream>
using namespace std;
int main()
{
	int number, chuc, donvi;

	cout << "nhap so co hai chu so: ";
	cin >> number;
	while (number > 99)
	{
		cout << "nhap lai: ";
		cin >> number;
	}
	chuc = number / 10;
	donvi = number % 10;
	switch (chuc) {
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
	case 1: cout << "mot";break;
	case 2: cout << "hai";break;
	case 3: cout << "ba ";break;
	case 4: cout << "bon ";break;
	case 5: cout << "nam ";break;
	case 6: cout << "sau ";break;
	case 7: cout << "bay ";break;
	case 8: cout << "tam ";break;
	case 9: cout << "chin ";break;
	}
	cout << endl;
	system("pause");
	return 0;
}