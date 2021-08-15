#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class NSX {
	char mansx[30];
	char tennsx[30];
	char dcnsx[30];
	friend class HANG;
	public:
		void NHAP();
		void XUAT();
};
void NSX::NHAP() {
	cout << "\tNhap ma nha san xuat: ";
	gets(mansx);
	fflush(stdin);
	cout << "\tNhap ten nha san xuat: ";
	gets(tennsx);
	fflush(stdin);
	cout << "\tNhap dia chi nha san xuat: ";
	gets(dcnsx);
}

void NSX::XUAT() {
	cout << "\tMa nha san xuat: " << mansx << endl;
	cout << "\tTen nha san xuat: " << tennsx << endl;
	cout << "\tDia chi nha san xuat: " << dcnsx << endl; 
}
class HANG {
	private: 
		char maHang[30];
		char tenHang[30];
		NSX x;
	public:
		void NHAP();
		void XUAT();
};
void HANG::NHAP() {
	cout << "\tNhap ma hang: "; fflush(stdin); gets(maHang);
	cout << "\tNhap ten hang: "; fflush(stdin); gets(tenHang);
	x.NHAP();
}
void HANG::XUAT() {
	cout << "\tMa hang: " << maHang << endl;
	cout << "\tTen hang: " << tenHang << endl;
	x.XUAT();
}
int main() {
	HANG *x;
	int n; 
	cout << "Nhap so luong mat hang: ";
	cin >> n;
	cin.ignore();
	x = new HANG[n];
	for(int i = 1; i <= n; i++) {
		cout << "Nhap thong tin mat hang thu " << i << " :" << endl;
		(x + i)->NHAP();
	}
    cout << "Thong tin " << n << " mat hang vua nhap la: " << endl;
    for(int i = 1; i <= n; i++){
    	cout << "Mat hang thu " << i << " :" << endl;
    	(x + i)->XUAT();
	}
	return 0;
}
