#include<iostream>
#include<string>
using namespace std;
//ham tinh chieu dai chuoi
int TinhChieuDaiChuoi(string a)
{
	int count = 0, i = 0;
	while (a[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}

//bai 2 y 1: cac ky tu thanh ky tu thuong
string TraVeChuThuong(string a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if ('A' <= a[i] && a[i] <= 'Z')
		{
			a[i] += 32;
		}
	}
	return a;
}
//bai 2 y 2: cac ky tu thanh chu hoa
string TraVeChuHoa(string a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if ('a' <= a[i] && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
	return a;
}
//bai 2 y 3: cac ky tu dau tien moi tu thanh ky tu hoa
string KyTuHoaDauTien(string a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if ('a' <= a[0] && a[0] <= 'z')
		{
			a[0] -= 32;
		}
		if (a[i] == ' ')
		{
			if ('a' <= a[i + 1] && a[i + 1] <= 'z')
			{
				a[i + 1] -= 32;
			}
		}
	}
	return a;
}
//xoa 1 ky tu bat ky trong chuoi
string XoaKyTu(string a, int n, char x)
{
	int j;
	for (int i = 0; i < n; i++)
	{
		j = i;
		if (a[i] == 'x')
		{
			while (i < n)
			{
				a[i] = a[i + 1];
				i++;
			}
		}
		i = j;
	}
	return a;
}
//bai 2 y 4
//xoa khoang trang thua
string XoaKhoangTrangThua(string a, int n)
{
	int j, flag;
	for (int i = 0; i < n; i++)
	{
		flag = 0;
		j = i;
		if (a[i] == ' ' && a[i + 1] == ' ')
		{
			// dung flag de xac dinh co khoang trang hay khong
			flag = 1;
			//xoa khoang trang
			while (i < n)
			{
				a[i] = a[i + 1];
				i++;
			}
			n--;
		}
		if (flag == 1)
		{
			//khi co khoang trang lien tiep gia tri i se giu nguyen
			i = j - 1;
		}
		if (flag == 0)
		{
			i = j;
		}
	}
	return a;
}
//bai3:xoa cac khoang trang
string XoaCacKhoangTrang(string a, int n)
{
	int j, flag;
	for (int i = 0; i < n; i++)
	{
		flag = 0;
		j = i;
		if (a[i] == ' ')
		{
			flag = 1;
			while (i < n)
			{
				a[i] = a[i + 1];
				i++;
			}
			n--;
		}
		if (flag == 1)
		{
			//khi co khoang trang gia tri i se giu nguyen
			i = j - 1;
		}
		if (flag == 0)
		{
			i = j;
		}
	}
	return a;
}
//bai 4
//ham nhan vao mot chuoi va dem so tu trong chuoi
int DemTu(string a,int n)
{
	int count=1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ' ' && a[i + 1] != ' ')
		{
			count++;
		}
	}
	return count;
}
//bai 5: ham nhan vao chuoi va xuat ra cac tu tren cac dong lien tiep
string XuatRaCacTuTheoTungDong(string a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ' '&&a[i+1]!=' ')
		{
			a[i] = '\n';
		}
	}
	return a;
}
int main()
{
	int count = 0, i = 0, len;
	string chuoi;
	cout << "nhap chuoi: ";
	getline(std::cin, chuoi);
	cout << "chieu dai cua chuoi la: "<<TinhChieuDaiChuoi(chuoi) << endl;
	len = TinhChieuDaiChuoi(chuoi);
	cout << TraVeChuThuong(chuoi, len) << endl;
	cout << TraVeChuHoa(chuoi, len) << endl;
	cout << KyTuHoaDauTien(TraVeChuThuong(chuoi, len), len) << endl;
	//cout << XoaKyTu(chuoi, len,'N')<<endl;
	cout << XoaKhoangTrangThua(chuoi, len) << endl;
	cout << XoaCacKhoangTrang(chuoi, len) << endl;
	cout<<"co "<<DemTu(chuoi, len)<<" tu trong chuoi vua nhap."<<endl;
	cout << XuatRaCacTuTheoTungDong (chuoi,len)<< endl;
	system("pause");
	return 0;
}
