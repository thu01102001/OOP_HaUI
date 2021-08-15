#include<iostream>
#include<string.h>
using namespace std;

class Date {
	private:
		int day, month, year;
	public: 
		Date();
		Date(int d, int m , int y);
		void NHAP();
		void XUAT();
};

Date::Date() {
	day = month = year = 0;
}

Date::Date(int d, int m , int y) {
	day = d;
	month = m;
	year = y;
}

void Date::NHAP() {
	cout << "Nhap ngay thanh lap: "; cin >> day;
	cout << "Nhap thang thanh lap: "; cin >> month;
	cout << "Nhap nam thanh lap: "; cin >> year;
}

void Date::XUAT() {
	cout << day << "/" << month << "/" << year <<endl;
}
class DiaChi{
	char dienThoai[12];
	char phuong[30];
	char quan[30];
	char thanhPho[30];
	friend class DoanhNghiep;
};
class DoanhNghiep {
	private:
		int maDn;
		char tenDn[60];
		Date ngayTl;
		DiaChi diaChi;
		char giamDoc[30];
		long doanhThu;	
	public:
		void NHAP();
		void XUAT();
};
void DoanhNghiep::NHAP() {
	cout << "Nhap ma doanh nghiep: ";
	cin >> maDn;
	fflush(stdin);
	cout << "Nhap ten doanh nghiep: ";
	gets(tenDn);
	fflush(stdin);
	ngayTl.NHAP();
	fflush(stdin);
	cout << "Nhap so dien thoai: ";
	gets(diaChi.dienThoai);
	fflush(stdin);
	cout << "Nhap phuong: ";
	gets(diaChi.phuong);
	fflush(stdin);
	cout << "Nhap quan: ";
	gets(diaChi.quan);
	fflush(stdin);
	cout << "Nhap thanh pho: ";
	gets(diaChi.thanhPho);
	fflush(stdin);
	cout << "Nhap ten giam doc: ";
	gets(giamDoc);
	cout << "Nhap doanh thu: ";
	cin >> doanhThu;
}
void DoanhNghiep::XUAT() {
	cout << "\tMa doanh nghiep" << maDn << endl;
	cout << "\tTen doanh nghiep" << tenDn << endl;
	cout << "\tNgay thanh lap: ";
	 ngayTl.XUAT();
	cout << "\tSo dien thoai: " << diaChi.dienThoai << endl;
	cout << "\tPhuong: " << diaChi.phuong << endl;
	cout << "\tQuan: " << diaChi.quan << endl;
	cout << "\tThanh pho: " << diaChi.thanhPho << endl;
	cout << "\tGiam doc: " << giamDoc << endl;
	cout << "\tDoanh thu: " << doanhThu << endl;
}
int main() {
	DoanhNghiep dnA;
	dnA.NHAP();
	cout << "Thong tin doanh nghiep vua nhap la:" << endl;
	dnA.XUAT();
	return 0;
}

