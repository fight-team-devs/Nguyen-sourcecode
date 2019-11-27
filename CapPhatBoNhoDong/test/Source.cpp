//Cho một ma trận vuông mà mỗi phần tử là một bit bất kỳ.
//Mỗi hàng tính từ trái qua phải, mỗi cột tính từ trên xuống dưới 
//và hai đường chéo chính phụ là các dãy bit có độ dài bằng nhau 
//và đều có thể tạo thành một số nhị phân có nghĩa.
//Yêu cầu: Hãy tìm trong chúng số nhị phân có giá trị lớn nhất.
#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int MaxInArray(int* array, int length)
{
	int max = 0;
	max = array[0];
	for (int i = 0; i < length; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}
//ham tinh so thap phan
int SoThapPhan(int BitNhiPhan, int sobit)
{
	int surplus;
	int SoThapPhan = 0;
	for (int i = 0; i < sobit; i++)
	{
		surplus = BitNhiPhan % 10;
		SoThapPhan += (int)pow(2, i) * surplus;
		BitNhiPhan = BitNhiPhan / 10;
	}
	return SoThapPhan;
}

int main() {
	string chuoibit;
	int  x = 0, n;
	int Elements,len,hieu=0;
	cout << "Enter the number of element you want to create in matrix: ";
	cin >> Elements;
	int number = Elements;
	int** p_array;
	p_array = new int* [Elements];
	int SoLuong = 2 * Elements + 2;
	int* array = new int[SoLuong];
	//tao bo nho trong vung nho heap cho mang 2 chieu
	for (int i = 0; i < Elements; i++)
	{
		p_array[i] = new int[Elements];
	}
	//nhap cac gia tri vao mang 2 chieu
	for (int i = 0; i < Elements; i++)
	{
		for (int j = 0; j < Elements; j++)
		{
			cin >> p_array[i][j];
			n = p_array[i][j];
			if (n != 1 && n != 0)
			{
				cout << "the bit you have just typed was wrong. " << endl << "please type new bit ( 1 or 0)" << endl;
				j--;
			}
		}
	}
	cout << "The bit matrix that you have just created is: " << endl;
	for (int i = 0; i < Elements; i++)
	{

		for (int j = 0; j < Elements; j++)
		{
			cout << p_array[i][j] << " ";
		}
		cout << endl;
	}
	//tinh theo chieu ngang	
	for (int i1 = 0; i1 < Elements; i1++)
	{
		int a = 0;
		int m1 = Elements - 1;
		for (int j1 = 0; j1 < Elements; j1++)
		{
			a += p_array[i1][j1] * (int)pow(10, m1);
			m1--;

		}
		*(array + x) = a;
		x++;
	}
	//tinh theo chieu doc
	Elements = number;
	for (int j2 = 0; j2 < Elements; j2++)
	{
		int a1 = 0;
		int m2 = Elements - 1;
		for (int i2 = 0; i2 < Elements; i2++)
		{
			a1 += p_array[i2][j2] * (int)pow(10, m2);
			m2--;
		}
		*(array + x) = a1;
		x++;
	}
	//tinh duong cheo chinh
	Elements = number;
	int j3 = 0;
	int a2 = 0;
	int m3 = Elements - 1;
	for (int i3 = 0, j3 = 0; j3 < Elements; i3++, j3++)
	{
		a2 += p_array[i3][j3] * (int)pow(10, m3);
		m3--;
	}
	*(array + x) = a2;
	x++;
	//tinh duong cheo phu
	Elements = number;
	int j4 = 0;
	int a3 = 0;
	int m4 = Elements - 1;
	for (int i4 = 0, j4 = (Elements - 1); j4 >= 0; i4++, j4--)
	{
		a3 += p_array[i4][j4] * (int)pow(10, m4);
		m4--;
	}
	*(array + x) = a3;
	chuoibit = to_string(MaxInArray(array, x));
	len = chuoibit.length();
	hieu = Elements - len;
	for (int i = 0; i < hieu; i++)
	{
		cout << '0';
	}
	cout << MaxInArray(array, x) << endl;
	cout << SoThapPhan(MaxInArray(array, x), number) << endl;
	system("pause");
	return 0;
}