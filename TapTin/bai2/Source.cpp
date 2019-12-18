//tim so amstrong trong file
#include<iostream>
using namespace std;
#include<fstream>
#include<math.h>
//ham doc du lieu tu file
void ReadFile(int a[], int &n,ifstream &FileIn)
{
	while (FileIn.eof() == false)
	{
		FileIn >> a[n];
		n++;
	}
}
//ham xuat mang
void OutputArray(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
//ham kiem tra so amstrong
bool CheckAmstrong(int number)
{
	int count=0;
	int inputNumber,surplus;
	int sum=0;
	inputNumber = number;
	while (number!= 0) {
		number = number / 10;
		count++;
	}
	number = inputNumber;
	while (number != 0)
	{
		surplus = number % 10;
		sum = sum + pow(surplus, count);
		number = number / 10;
	}
	if (inputNumber == sum)
	{
		return true;
	}
	return false;
}
//ham ghi ca so amstrong vao file
int main()
{
	ifstream FileIn;
	FileIn.open("InputNumber.TXT", ios_base::in);
	if (FileIn.fail() == true)
	{
		cout << "file cua ban khong ton tai" << endl;
		system("pause");
		return 0;
	}
	int a[100];
	int n = 0;
	ReadFile(a, n, FileIn);
	cout << "integer array" << endl;
	OutputArray(a, n);
	ofstream FileOut;
	FileOut.open("Amstrong.txt", ios_base::out);
	cout << "Amstrong number is: ";
	for (int i = 0; i < n; i++)
	{
		if (CheckAmstrong(a[i]) == true)
		{
			FileOut << a[i] << " ";
			cout << a[i] <<" ";
		}
	}
	cout << endl;
	FileOut.close();
	FileIn.close();
	system("pause");
	return 0;
}