#include<iostream>
#include<string.h>
using namespace std;
class SinhVien {
public:
     int masv;
     char hoten[30];
     int ngaysinh;
     int thangsinh;
     int namsinh;
     char gioitinh[30];
     double diemtrungbinh;
     char xeploai[30];
     void Nhap();
     void Xuat();
};
void SinhVien::Nhap() {
     cout << "Nhap ma sinh vien: ";
     cin >> masv;
     fflush(stdin);
     cout << "Nhap ho ten: ";
     gets(hoten);
     fflush(stdin);
     cout << "Nhap ngay sinh: ";
     cin >> ngaysinh;
     fflush(stdin);
     cout << "Nhap thang sinh: ";
     cin >> thangsinh;
     fflush(stdin);
     cout << "Nhap nam sinh: ";
     cin >> namsinh;
     fflush(stdin);
     cout << "Nhap gioi tinh: ";
     gets(gioitinh);
     fflush(stdin);
     cout << "Nhap diem trung binh: ";
     cin >> diemtrungbinh;
     fflush(stdin);
     cout << "Nhap xep loai: ";
     gets(xeploai);
}
void SinhVien::Xuat() {
     cout << "Ma sinh vien: " << masv << endl;
     cout << "Ho ten: " << hoten << endl;
     cout << "Ngay sinh: " << ngaysinh << endl;
     cout << "Thang sinh: " << thangsinh << endl;
	 cout << "Nam sinh: " << namsinh << endl;
     cout << "Gioi tinh: " << gioitinh << endl;
     cout << "Diem trung binh: " << diemtrungbinh << endl;
     cout << "Xep loai: " << xeploai << endl;
}

int main() {
     SinhVien SVDiemCao,SVDiemThap,SVtmp;
     SVDiemCao.Nhap();
     SVDiemThap.Nhap();
    
     if(SVDiemCao.diemtrungbinh < SVDiemThap.diemtrungbinh) {
     	SVtmp = SVDiemCao;
		SVDiemCao = SVDiemThap;
		SVDiemThap = SVtmp;
     }
     
     cout<< "Sinh vien co diem cao: " <<endl;
     SVDiemCao.Xuat();
     
     cout<< "Sinh vien co diem thap: " <<endl;
     SVDiemThap.Xuat();
     
}
/*
Cài đặt lớp SinhVien bao gồm: Mã sinh viên, họ tên, ngày sinh, tháng sinh, năm sinh, giới tính, điểm trung bình, xếp loại đạo đức và các phương thức cần thiết
Khai báo 2 sinh viên: SVDiemCao, SVDiemThap
Nhập thông tin cho 2 sinh viên
Nếu SVDiemCao mà có điểm trung bình thấp hơn SVDiemThap thì hoán đổi thông tin của 2 sinh viên
Sau đó xuất ra màn hình thông tin của 2 sinh viên

*/
