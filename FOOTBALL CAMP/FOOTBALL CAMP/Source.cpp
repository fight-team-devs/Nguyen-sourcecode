#include<iostream>
using namespace std;
#include<string>activecf.h
#include<math.h>
#include<conio.h>
class HocVien
{
private:
	string hoten;
	int tuoi;
	string sdt;
	string diachi;
public:
	void NhapThongTin()
	{
		cout << "Ten Hoc Vien: ";
		getline(cin, hoten);
		cout << "Tuoi: ";
		cin >> tuoi;
		cin.ignore();
		cout << "So Dien Thoai: ";
		getline(cin, sdt);
		cout << "Dia Chi: ";
		getline(cin, diachi);
	}
	void XuatThongTin() 
	{
		cout << "Hoc Vien: " << hoten << endl;
		cout << "Tuoi: " << tuoi << endl;
		cout << "So Dien Thoai: " << sdt << endl;
		cout << "Dia Chi: " << diachi << endl;
	}
	int Tuoi()
	{
		int TuoiHocVien;
		TuoiHocVien = tuoi;
		return TuoiHocVien;
	}
	HocVien()
	{

	}
	~HocVien()
	{

	}
};
void MenuDanhSach(int a, int b, int c, int d, int e, int f, HocVien DSHV_NguoiLonCoBan[], HocVien DSHV_NguoiLonNangCao[], HocVien DSHV_NguoiLonDacBiet[], HocVien DSHV_TreEmCoBan[], HocVien DSHV_TreEmNangCao[], HocVien DSHV_TreEmDacBiet[])
{
	while (1)
	{
		system("cls");
		cout << "DANH SACH HOC VIEN DA DANG KI THANH CONG LA" << endl;
		cout << "1. LOP CO BAN CHO NGUOI LON. " << endl;
		cout << "2. LOP NANG CAO CHO NGUOI LON. " << endl;
		cout << "3. LOP DAC BIET CHO NGUOI LON. " << endl;
		cout << "4. LOP CO BAN CHO TRE EM. " << endl;
		cout << "5. LOP CO NANG CAO TRE EM. " << endl;
		cout << "6. LOP CO DAC BIET TRE EM. " << endl;
		cout << "0. Thoat" << endl;
		int Luachonxem;
		cout << "lua chon: ";
		cin >> Luachonxem;
		system("cls");
		if (Luachonxem == 0)
		{
			break;
		}
		if (Luachonxem == 1)
		{
			cout << "DANH SACH HOC VIEN LOP BONG DA CO BAN CHO NGUOI LON" << endl;
			for (int i = 0; i < a; i++)
			{
				cout << "\nThong Tin hoc Vien Bong Da Thu " << i + 1 << " la: " << endl;
				DSHV_NguoiLonCoBan[i].XuatThongTin();
				cout << "HOC PHI : FREE" << endl;
			}
		}
		if (Luachonxem == 2)
		{
			cout << "DANH SACH HOC VIEN LOP BONG DA NANG CAO CHO NGUOI LON" << endl;
			for (int i = 0; i < b; i++)
			{
				cout << "\nThong Tin hoc Vien Bong Da Thu " << i + 1 << " la: " << endl;
				DSHV_NguoiLonNangCao[i].XuatThongTin();
				cout << "HOC PHI : FREE" << endl;
			}
		}
		if (Luachonxem == 3)
		{
			cout << "DANH SACH HOC VIEN LOP BONG DA DAC BIET CHO NGUOI LON" << endl;
			for (int i = 0; i < c; i++)
			{
				cout << "\nThong Tin hoc Vien Bong Da Thu " << i + 1 << " la: " << endl;
				DSHV_NguoiLonDacBiet[i].XuatThongTin();
				cout << "HOC PHI : 100k" << endl;
			}
		}
		if (Luachonxem == 4)
		{
			cout << "DANH SACH HOC VIEN LOP BONG DA CO BAN CHO TRE EM" << endl;
			for (int i = 0; i < d; i++)
			{
				cout << "\nThong Tin hoc Vien Bong Da Thu " << i + 1 << " la: " << endl;
				DSHV_TreEmCoBan[i].XuatThongTin();
				cout << "HOC PHI : FREE" << endl;
			}
		}
		if (Luachonxem == 5)
		{
			cout << "DANH SACH HOC VIEN LOP BONG DA NANG CAO CHO TRE EM" << endl;
			for (int i = 0; i < d; i++)
			{
				cout << "\nThong Tin hoc Vien Bong Da Thu " << i + 1 << " la: " << endl;
				DSHV_TreEmNangCao[i].XuatThongTin();
				cout << "HOC PHI : FREE" << endl;
			}
		}
		if (Luachonxem == 6)
		{
			cout << "DANH SACH HOC VIEN LOP BONG DA DAC BIET CHO TRE EM" << endl;
			for (int i = 0; i < c; i++)
			{
				cout << "\nThong Tin hoc Vien Bong Da Thu " << i + 1 << " la: " << endl;
				DSHV_TreEmDacBiet[i].XuatThongTin();
				cout << "HOC PHI : 100k" << endl;
			}
		}
		//giao dien dieu khien
		cout << "1. Quay Lai           2. Thoat"<<endl;
		int control;
		cout << "lua chon: ";
		cin >> control;
		if (control == 2)
		{
			system("cls");
			break;
		}
		if (control == 1)
		{
			continue;
		}
	}
}
void MenuDangKi( int a, int b, int c, int d, int e,int f,HocVien DSHV_NguoiLonCoBan[], HocVien DSHV_NguoiLonNangCao[], HocVien DSHV_NguoiLonDacBiet[], HocVien DSHV_TreEmCoBan[], HocVien DSHV_TreEmNangCao[], HocVien DSHV_TreEmDacBiet[] )
{
	while(1)
	{
		system("cls");
	HocVien HocVienBongDa;
	cout << "DANG KI THAM GIA FOOTBALL CAMP 2020" << endl;
	HocVienBongDa.NhapThongTin();
	if (HocVienBongDa.Tuoi() < 8 || HocVienBongDa.Tuoi() > 30)
	{
		cout << "Xin loi, Do Tuoi Dang Ki Tu 8 Den 30 Tuoi, Hen Gap Ban Lan Sau!" << endl;
		system("pause");
		continue;
	}
	system("cls");
	int luachon;
	cout << "BAN MUON DANG KI VAO LOP NAO ?" << endl;
	cout << "1. LOP CO BAN" << endl;
	cout << "2. LOP NANG CAO" << endl;
	cout << "3. LOP DAC BIET (100k/1 slot)" << endl;
	cout << "4. DANH SACH HOC VIEN DA DANG KI" << endl;
	cout << "0. THOAT DANG KI" << endl;
	cout << "========== END ==========" << endl;

	cout << "Nhap Lua Chon: ";
	cin >> luachon;
	while (luachon < 0 || luachon>4)
	{
		cout << "Lua Chon Khong Hop Le, Vui Long Chon lai!" << endl;
		cout << "Nhap Lua Chon: ";
		cin >> luachon;
	}
	if (luachon == 0)
	{
		break;
	}
	if (luachon == 1)
	{
		system("cls");
		if (HocVienBongDa.Tuoi()>15 && HocVienBongDa.Tuoi() < 30)
		{
			DSHV_NguoiLonCoBan[a] = HocVienBongDa;
			a++;
			cout << "\n\n\t\t\tCONGRATULATION\n\nBAN DA DANG KI THANH CONG LOP BONG DA CO BAN CHO NGUOI LON!" << endl;
		}
		if (HocVienBongDa.Tuoi()>8 && HocVienBongDa.Tuoi() < 16)
		{
			DSHV_TreEmCoBan[b] = HocVienBongDa;
			b++;
			cout << "\n\n\t\t\tCONGRATULATION\n\nBAN DA DANG KI THANH CONG LOP BONG DA CO BAN CHO TRE EM!" << endl;
		}
	}
	if (luachon == 2)
	{
		system("cls");
		if (HocVienBongDa.Tuoi()>15 && HocVienBongDa.Tuoi() < 30)
		{
			DSHV_NguoiLonNangCao[c] = HocVienBongDa;
			c++;
			cout << "\n\n\t\t\tCONGRATULATION\n\nBAN DA DANG KI THANH CONG LOP BONG DA NANG CAO CHO NGUOI LON!" << endl;
		}
		if ( HocVienBongDa.Tuoi()>8 && HocVienBongDa.Tuoi() < 16)
		{
			DSHV_TreEmNangCao[d] = HocVienBongDa;
			d++;
			cout << "\n\n\t\t\tCONGRATULATION\n\nBAN DA DANG KI THANH CONG LOP BONG DA NANG CAO CHO TRE EM!" << endl;
		}
	}
	if (luachon == 3)
	{
		system("cls");
		if ( HocVienBongDa.Tuoi()>15 && HocVienBongDa.Tuoi() < 30)
		{
			DSHV_NguoiLonDacBiet[e] = HocVienBongDa;
			e++;
			cout << "\n\n\t\t\tCONGRATULATION\n\nBAN DA DANG KI THANH CONG LOP BONG DA DAC BIET CHO NGUOI LON!" << endl;
		}
		if (HocVienBongDa.Tuoi()>8 && HocVienBongDa.Tuoi() < 16)
		{
			DSHV_TreEmDacBiet[f] = HocVienBongDa;
			f++;
			cout << "\n\n\t\t\tCONGRATULATION\n\nBAN DA DANG KI THANH CONG LOP BONG DA DAC BIET CHO TRE EM!" << endl;
		}
	}
	if (luachon == 4)
	{
		MenuDanhSach(a, c, e, b, d, f, DSHV_NguoiLonCoBan, DSHV_NguoiLonNangCao, DSHV_NguoiLonDacBiet, DSHV_TreEmCoBan, DSHV_TreEmNangCao, DSHV_TreEmDacBiet);
	}
	//
	// TIEP TUC DANG KI HAY THOAT
	//
	    cout << "\n\nBan Muon Tiep Tuc Dang ki Hay Thoat Khoi Chuong Trinh ?" << endl;
		cout << "\n1. Tiep Tuc Dang Ki        2. Thoat Dang Ki        3. Xem Danh Sach" << endl;
		cout << "lua chon: ";
		int chonlua;
		cin >> chonlua;
		if (chonlua == 2)
		{
			break;
		}
		if (chonlua == 3)
		{
			MenuDanhSach(a, c, e, b, d, f, DSHV_NguoiLonCoBan, DSHV_NguoiLonNangCao, DSHV_NguoiLonDacBiet, DSHV_TreEmCoBan, DSHV_TreEmNangCao, DSHV_TreEmDacBiet);
			cin.ignore();
		}
		if (chonlua == 1)
		{
			cin.ignore();
		}
	}
}
int main()
{
	HocVien DSHV_NguoiLonCoBan[50];
	HocVien DSHV_NguoiLonNangCao[50];
	HocVien DSHV_NguoiLonDacBiet[50];
	HocVien DSHV_TreEmCoBan[50];
	HocVien DSHV_TreEmNangCao[50];
	HocVien DSHV_TreEmDacBiet[50];
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	MenuDangKi(a, b, c, d, e, f, DSHV_NguoiLonCoBan, DSHV_NguoiLonNangCao, DSHV_NguoiLonDacBiet, DSHV_TreEmCoBan, DSHV_TreEmNangCao, DSHV_TreEmDacBiet);
	return 0;
}