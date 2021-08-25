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
	cout << left << setw(20) << "Ma nha cung cap: " << setw(30) << mancc << setw(20) << "Ten nha cung cap: " << setw(20) << tenncc << endl;
    cout << left << setw(20) << "Dia chi: " << setw(30) << dcncc << endl;
}

class HANG
{
 	char MaSP[20];
 	char TenSP[20];
 	char TinhTrang[20];
 	int SoLuong;
 	float DonGia;
public:
 	void NHAP();
 	void XUAT();
 	friend class PHIEUMUAHANG;
};
class PHIEUMUAHANG
{
 	char MaPhieu[20];
 	NSX y;
 	HANG *x;
 	int n;
public:
 	void NHAP();
 	void XUAT();
};
void HANG::NHAP()
{
	
	 cout<<"Ma san pham: "; fflush(stdin); gets(MaSP);
	 cout<<"Ten san pham: "; fflush(stdin); gets(TenSP);
	 cout<<"Ten tinh trang: "; fflush(stdin); gets(TinhTrang);
	 cout<<"So luong: "; cin >> SoLuong;
	 cout<<"Don gia: "; cin >> DonGia;
	 
}
void HANG::XUAT()
{
	
	cout << setw(10) << MaSP << setw(10) << TenSP << setw(10) << TinhTrang << setw(10) << SoLuong << setw(10) << DonGia << setw(10) << DonGia*SoLuong << endl;
}
void PHIEUMUAHANG::NHAP()
{
	 cout<<"Ma phieu: "; fflush(stdin); gets(MaPhieu);
	 y.NHAP();
	 cout<<"Nhap so mat hang: "; cin>>n;
	 x=new HANG[n];
	 for(int i=0; i<n; i++)
	 x[i].NHAP();
}
void PHIEUMUAHANG::XUAT()
{
	 cout << "\n\t\t\t-----PHIEU NHAP THIET BI MAY TINH-----" << endl << endl;
	 cout << left << setw(20) << "Ma phieu: " << setw(30) << MaPhieu << endl;
	 y.XUAT();
	 cout << setw(10) << "Ma SP" << setw(10) << "Ten SP" << setw(10) << "Tinh trang" << setw(10) << "So luong" << setw(10) << "Don gia" << setw(10) << "Thanh tien" << endl;
	 for(int i=0; i<n; i++)
	 x[i].XUAT();
	 double TongTien =0;
	 for(int i=0; i<n; i++) TongTien += x[i].DonGia*x[i].SoLuong;
	 cout << setw(40) << "Cong thanh tien: " << TongTien << endl;
}
int main()
{
	
	 PHIEUMUAHANG a;
	 char truong[30];
	 cout << "Nhap truong dai hoc: ";
	 gets(truong);
	 fflush(stdin);
	 a.NHAP();
	 cout << truong;
	 a.XUAT();
	 return 0;
}
