#include<iostream>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;
int DecimalToBinary(int decimalNumber)
{
	int binaryNumber = 0;
	int p = 0;
	while (decimalNumber > 0)
	{
		binaryNumber += (decimalNumber % 2) * (int)pow(10, p);
		++p;
		decimalNumber /= 2;
	}

	return binaryNumber;
}
int BinaryToDecimal(int binaryNumber)
{
	int p = 0;
	int decimalNumber = 0;
	while (binaryNumber > 0)
	{
		decimalNumber += (binaryNumber % 10) * (int)pow(2, p);
		++p;
		binaryNumber /= 10;
	}
	return decimalNumber;
}
int ConvertToLuckyNumber(int NhiPhanCuaHieu, int dodai)
{
	int surplus;
	int LuckyNumber = 0;
	for (int i = 0; i < (dodai - 1); i++)
	{
		surplus = NhiPhanCuaHieu % 10;
		if (surplus == 0)
		{
			LuckyNumber += 4 * (int)pow(10, i);
		}
		if (surplus == 1)
		{
			LuckyNumber += 7 * (int)pow(10, i);
		}
		NhiPhanCuaHieu = NhiPhanCuaHieu / 10;
	}
	return LuckyNumber;
}
int main()
{
	int n, dodai, SoNhiPhan = 0,SoNhiPhan1=0, SoThapPhan;
	int hieu, NhiPhanCuaHieu;
	string s;
	cout << "enter number: ";
	cin >> n;
	s = to_string(DecimalToBinary(n));
	dodai = s.length();	
	for (int j = 0; j < dodai; j++)
	{
		SoNhiPhan1 += (int)pow(10, j);
	}
	if (SoNhiPhan1 == DecimalToBinary(n))
	{
		++dodai;
		NhiPhanCuaHieu = 0;
		cout << ConvertToLuckyNumber(NhiPhanCuaHieu, dodai) << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < (dodai - 1); i++)
	{
		SoNhiPhan += (int)pow(10, i);
	}
	SoThapPhan = BinaryToDecimal(SoNhiPhan);
	hieu = n - SoThapPhan;
	NhiPhanCuaHieu = DecimalToBinary(hieu);
	cout << ConvertToLuckyNumber(NhiPhanCuaHieu, dodai) << endl;
	system("pause");
	return 0;
}