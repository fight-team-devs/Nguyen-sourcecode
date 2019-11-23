#include<iostream>
#include<string>

using namespace std;
bool Count(string input, int length)
{
	int couple = length/2;
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		//find the first ')' then finding the nearest character of ')' in the string before the first ')' 
		if (input[i] == ')')
		{
			for (int j = i-1; j >= 0; j--)
			{
				//when there is a '(' in the string. i will call it a Couple and change them to 0
				if (input[j] == '(')
				{
					count++;
					input[i] = 0;
					input[j] = 0;
					break;
				}
			}
		}
	}
	//the length is always even
	if (couple == count)
	{
		return true;
	}
	else
	{
		return false;
	}

}
//the right string have to start with'(' character and all characters in string are '(' or')'
bool CheckString(string input, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (input[0] == ')')
		{
			return false;
		}
		if (input[i] != '(' && input[i] != ')')
		{
			return false;
		}
	}
	return true;
}
// the right string have to has the number of '(' characters equal the number of')' characters
bool Comparision(string input, int length)
{
	int count1 = 0, count2 = 0;
	for (int i = 0; i < length; i++)
	{
		if (input[i] == '(')
		{
			count1++;
		}
		if (input[i] == ')')
		{
			count2++;
		}
	}
	if (count1 == count2)
	{
		return true;
	}
	if (count1 != count2)
	{
		return false;
	}
}

int main()
{
	int len;
	string InputString;
	cout << "create string you want to check: ";
	cin >> InputString;
	len = InputString.length();
	cout << len << endl;
	if (CheckString(InputString, len) == false || Comparision(InputString, len) == false||Count(InputString,len)==false)
	{
		cout << "your input string was wrong" << endl;
	}
	if (CheckString(InputString, len) == true && Comparision(InputString, len) == true&& Count(InputString,len) == true)
	{
		cout << "your input string exactly right" << endl;
	}
	system("pause");
	return 0;
}