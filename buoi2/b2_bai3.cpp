#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
class HANG {
	private:
		string Mahang, Tenhang;
		float Dongia;
		int Soluong;
		string Ngaynhap, NSX;
	public:
		HANG() {
			Mahang = "";
			Tenhang = "";
			Dongia = 0;
			Soluong = 0;
			Ngaynhap ="";
			NSX = "";
		}
		HANG(string Mahang, string Tenhang, float Dongia, int Soluong, string Ngaynhap, string NSX) {
			this->Mahang = Mahang;
            this->Tenhang = Tenhang;
            this->Dongia = Dongia;
            this->Soluong = Soluong;
            this->Ngaynhap = Ngaynhap;
            this->NSX = NSX;
		}
		~HANG() {
			Mahang = "";
			Tenhang = "";
			Dongia = 0;
			Soluong = 0;
			Ngaynhap ="";
			NSX = "";
		}
		void NHAP() {
			cout << "Nhap ma hang: ";
			getline(cin, Mahang);
			fflush(stdin);
			cout << "Nhap ten hang: ";
			getline(cin, Tenhang);
			fflush(stdin);
			cout << "Nhap don gia: ";
			cin >> Dongia;
			fflush(stdin);
			cout << "Nhap so luong: ";
			cin >> Soluong;
			fflush(stdin);
			cout << "Nhap ngay nhap hang: ";
			getline(cin, Ngaynhap);
			fflush(stdin);
			cout << "Nhap NSX: ";
			getline(cin, NSX);
		}
		void XUAT() {
			cout << setw(10) << "Ma hang" << setw(15) << "Ten hang" << setw(15) << "Ngay nhap" << setw(15) << "NSX" << setw(20) << "Don gia" << setw(20) << "So luong" << setw(20) << "Thanh tien" << endl;
			cout << setw(10) << Mahang << setw(15) << Tenhang << setw(15) << Ngaynhap << setw(15) << NSX << setw(20) << Dongia << setw(20) << Soluong << setw(20) << Dongia * Soluong << endl;
		}
};
int main() {
	HANG P("A","quan ao",120000,3,"01/10/2001","08/04/2021");
	HANG Q;
	cout << "Mat hang P" << endl;
	P.XUAT();
	cout << "Nhap mat hang Q" << endl;
	Q.NHAP();
	cout << "Mat hang Q" << endl;
	Q.XUAT();
}
