#include<iostream>
using namespace std;
int main()
{
	
	int Number_of_Elements;
	cout << "Enter the number of element you want to create in array: ";
	cin >> Number_of_Elements;
	int* p_array = new int[Number_of_Elements];
	//input array
	for (int i = 0; i < Number_of_Elements; i++)
	{
		cout << "array[" << i << "] : ";
		cin >> p_array[i];
	}
	//cout << p_array[2];
	//cout << p_array;
	system("pause");
	return 0;
}
