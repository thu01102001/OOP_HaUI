#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class NSX {
	char mancc[30];
	char tenncc[30];
	char dcncc[30];
	friend class HANG;
	public:
		void NHAP();
		void XUAT();
};
void NSX::NHAP() {
	cout << "Nhap ma NCC: ";
	gets(mancc);
	fflush(stdin);
	cout << "Nhap ten NCC: ";
	gets(tenncc);
	fflush(stdin);
	cout << "Nhap dia chi NCC: ";
	gets(dcncc);
}

void NSX::XUAT() {
	cout << left << setw(20) << "Ma NCC: " << setw(30) << mancc << setw(20) << "Ten NCC: " << setw(20) << tenncc << endl;
    cout << left << setw(20) << "Dia chi: " << setw(30) << dcncc << endl;
}

class HANG
{
 	char TenHang[20];
 	float DonGia;
 	int SoLuong;
public:
 	void NHAP();
 	void XUAT();
 	friend class PHIEUMUAHANG;
};
class PHIEUMUAHANG
{
 	char MaPhieu[20];
 	char NgayLap[20];
 	NSX y;
 	HANG *x;
 	int n;
public:
 	void NHAP();
 	void XUAT();
};
void HANG::NHAP()
{
	
	 cout<<"Ten hang: "; fflush(stdin); gets(TenHang);
	 cout<<"Don gia: "; cin >> DonGia;
	 cout<<"So luong: "; cin >> SoLuong;
	 
}
void HANG::XUAT()
{
	cout << setw(20) << TenHang << setw(10) << DonGia << setw(10) << SoLuong << setw(10) << DonGia*SoLuong << endl;
}
void PHIEUMUAHANG::NHAP()
{
	 cout<<"Ma phieu: "; fflush(stdin); gets(MaPhieu);
	 cout<<"Ngay lap: "; fflush(stdin); gets(NgayLap);
	 y.NHAP();
	 cout<<"Nhap so mat hang: "; cin>>n;
	 x=new HANG[n];
	 for(int i=0; i<n; i++)
	 x[i].NHAP();
}
void PHIEUMUAHANG::XUAT()
{
	 cout << "\n\t\t\t-----PHIEU NHAP HANG-----" << endl << endl;
	 cout << left << setw(20) << "Ma phieu: " << setw(30) << MaPhieu << setw(20) << "Ngay lap: " << setw(20) << NgayLap << endl;
	 y.XUAT();
	 cout << setw(20) << "Ten hang" << setw(10) << "Don gia" << setw(10) << "So luong" << setw(10) << "Thanh tien" << endl;
	 for(int i=0; i<n; i++)
	 x[i].XUAT();
	 double TongTien =0;
	 for(int i=0; i<n; i++) TongTien += x[i].DonGia*x[i].SoLuong;
	 cout << setw(40) << "Cong thanh tien: " << TongTien << endl;
}
int main()
{
	 PHIEUMUAHANG a;
	 a.NHAP();
	 a.XUAT();
	 return 0;
}
