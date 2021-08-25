#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class DiaChi {
	char so[30];
	char ngo[30];
	char pho[30];
	char phuong[30];
	char quan[30];
	char thanhPho[30];
public:
	void NHAP();
	void XUAT();
	friend class HoTen;
};
void DiaChi::NHAP() {
	cout << "Nhap so: ";
	gét(so);
	fflush(stdin);
	cout << "Nhap ngo: ";
	gets(ngo);
	fflush(stdin);
	cout << "Nhap pho: ";
	gets(pho);
	fflush(stdin);
	cout << "Nhap phuong: ";
	gets(phuong);
	fflush(stdin);
	cout << "Nhap thanh pho: ";
	gets(thanhPho);
	fflush(stdin);
}
void DiaChi::XUAT() {
	cout << left << setw(2) << "Ðia chi: " << setw(2) << so << setw(2) << ngo <<setw(2) << pho << setw(2) << phuong << setw(2) << quan << setw(2) << thanhPho << endl;
}
class HoTen {
	char hoTen[30];
	int sdt;
	DiaChi z;
	friend class DiaChi;
	friend class HANG;
	public:
		void NHAP();
		void XUAT();
};
void HoTen::NHAP() {
	cout << "Nhap ho va ten nguoi di cho: ";
	gets(hoTen);
	fflush(stdin);
	cout << "Nhap so dien thoai: ";
	cin >> sdt;
	fflush(stdin);
	z.NHAP();
}

void HoTen::XUAT() {
	cout << left << setw(20) << "Ho va ten nguoi di cho: " << setw(30) << hoTen << endl;
    cout << left << setw(20) << "So dien thoai: " << setw(30) << sdt << endl;
    z.XUAT();
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
 	HoTen y;
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
	 cout << "\n\t\t\t-----PHIEU DI CHO-----" << endl << endl;
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
	 cout << "Luu y: Phieu chi co tac dung trong BTVN buoi 4 cua lop OOP 2021";
	 return 0;
}
