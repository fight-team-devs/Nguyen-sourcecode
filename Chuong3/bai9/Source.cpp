#include<iostream>
using namespace std;
int main()
{
	int thang, nam, x;
	while (1)
	{
		cout << "nhap thang: ";
		cin >> thang;
		while (thang <= 0 || thang > 12)
		{
			cout << "nhap lai: ";
			cin >> thang;
		}
		cout << "nhap nam: ";
		cin >> nam;
		x = nam % 4;
		
			switch (thang)
			{
			case 1: cout << "thang 1 nam " << nam << " co 31 ngay" << endl;break;
			case 3: cout << "thang 3 nam " << nam << " co 31 ngay" << endl;break;
			case 5: cout << "thang 5 nam " << nam << " co 31 ngay" << endl;break;
			case 7: cout << "thang 7 nam " << nam << " co 31 ngay" << endl;break;
			case 8: cout << "thang 8 nam " << nam << " co 31 ngay" << endl;break;
			case 10: cout << "thang 10 nam " << nam << " co 31 ngay" << endl;break;
			case 12: cout << "thang 12 nam " << nam << " co 31 ngay" << endl;break;
			case 4: cout << "thang 4 nam " << nam << " co 30 ngay" << endl;break;
			case 6: cout << "thang 6 nam " << nam << " co 30 ngay" << endl;break;
			case 9: cout << "thang 9 nam " << nam << " co 30 ngay" << endl;break;
			case 11: cout << "thang 11 nam " << nam << " co 30 ngay" << endl;break;
			case 2:
				if (x != 0)
				{
					cout << "thang 2 nam " << nam << " co 28 ngay" << endl;break;
				}
				else
				{
					cout << "thang 2 nam " << nam << " co 29 ngay" << endl;break;
				}
			}
		
		
		
	}
		system("pause");
		return 0;
}