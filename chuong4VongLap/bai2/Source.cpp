#include<iostream>
#include<string>
#include<math.h>
using namespace std;
//check Symmetric numbers
bool symmetricNumber(int number)
{
	int OriNumber = number;
	int reNumber = 0, surplus = 0;
	while (number > 0)
	{
		//Read backwards
		surplus = number % 10;
		reNumber = surplus + 10 * reNumber;
		number = number / 10;
	}
	if (reNumber == OriNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// check square root number
bool squareRootnumber(int number)
{
	int i, square = 1;
	for (i = 0;i < number;i++)
	{
		square = (int)pow(i, 2);
		if (square == number)
		{
			return true;
		}
	}
	return false;
}
//check prime number
bool primeNumber(int number)
{
	int i, surplus;
	if (number == 0 || number == 1)
	{
		return false;
	}
	if (number == 2)
	{
		return true;
	}
	for (i = 2;i < number;i++)
	{
		surplus = number % i;
		if (surplus == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int numbera, numberb;
	int count0 = 0, count1 = 0, count2 = 0;
	int count[3] = { count0,count1,count2 };
	int sum0 = 0, sum1 = 0, sum2 = 0;
	int sum[3] = { sum0,sum1,sum2 };
	string typeNumber[3] = { "symmertric","square root","prime" };
	cout << "create number a: ";
	cin >> numbera;
	cout << "create number b (b>a) : ";
	cin >> numberb;
	while (numberb <= numbera)
	{
		cout << "create number b again: ";
		cin >> numberb;
	}
	//check numbers from number a to number b
	for (int i = numbera; i <= numberb; i++)
	{
		if (symmetricNumber(i) == true)
		{
			count[0]++;
			sum[0] += i;
		}
		if (squareRootnumber(i) == true)
		{
			count[1]++;
			sum[1] += i;
		}
		if (primeNumber(i) == true)
		{
			count[2]++;
			sum[2] += i;
		}
	}
	for (int j = 0; j < 3; j++)
	{
		cout << "there is " << count[j] << " " << typeNumber[j] << " Numbers in [a,b]" << endl;
		//the total of numbers
		cout << "the total of " << typeNumber[j] << " numbers is: " << sum[j] << endl<<endl;
	}
	system("pause");
	return 0;
}