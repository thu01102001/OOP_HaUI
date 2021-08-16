#include<iostream>
#include<string.h>
using namespace std;
class School
{
private:
    char name[30];
    char date[15];
public:
    friend class Faculty;
    friend class Student;
};
class Faculty
{
private:
    char name[30];
    char date[15];
    School x;
public:
    void Input();
    void Output();
    friend class Student;
};
void Faculty::Input()
{
    cout << "Nhap thong tin truong: " << endl;
    cout << "\tNhap ten truong: ";    
	fflush(stdin);  
	gets(x.name);
    cout << "\tNhap ngay thanh lap truong: ";    
	fflush(stdin);  
	gets(x.date);
    cout << "\nNhap thong tin khoa cua truong: " << endl;
    cout << "\tNhap ten khoa: ";    
	fflush(stdin);  
	gets(name);
    cout << "\tNhap ngay thanh lap khoa: ";    
	fflush(stdin);  
	gets(date);
}
void Faculty::Output()
{
    cout << "Ten truong: " << x.name << endl;
    cout << "Ngay thanh lap truong: " << x.date << endl;
    cout << "Ten khoa: " << name << endl;
    cout << "Ngay thanh lap khoa: " << date << endl;
}
class Student
{
private:
    Faculty y;
    char class_SV[30];
    float score;
public:
    Student();
    ~Student();
    void Input();
    void Output();
};
Student::Student()
{
    strcpy( y.x.name, "");
    strcpy( y.x.date, "");
    strcpy( y.name, "");
    strcpy( y.date, "");
    strcpy( class_SV, "");
    score = 0;
}
Student::~Student()
{
    strcpy( y.x.name, "");
    strcpy( y.x.date, "");
    strcpy( y.name, "");
    strcpy( y.date, "");
    strcpy( class_SV, "");
    score = 0;
}

void Student::Input()
{
    y.Input();
    cout << "\nNhap ten lop: ";     fflush(stdin);  gets(class_SV);
    cout << "\nNhap diem cua sinh vien: ";     cin >> score;
}
void Student::Output()
{
    y.Output();
    cout << "Ten lop: " << class_SV << endl;
    cout << "Diem cua sinh vien: " << score <<endl;
}
int main(int argc, char const *argv[])
{
    Student sv;
    sv.Input();
    sv.Output();
    return 0;
}
