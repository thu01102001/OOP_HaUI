#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    void Nhap();
    void Xuat();
    friend class Emp;
};
void Date::Nhap()
{
    cout << "\nNhap ngay: ";
    cin >> day;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;
}
void Date::Xuat()
{
    cout << day << "/" << month << "/" << year;
}
class Employee
{
private:
    static int codeOfEmp;
    char nameOfEmp[30];
    Date Emp;

public:
    void Nhap();
    void Xuat();
};

int Employee::codeOfEmp = 1;

void Employee::Nhap()
{
    cout << "\nNhap ten: ";
    fflush(stdin);
    gets(nameOfEmp);
    cout << "\nNhap ngay sinh ";
    Emp.Nhap();
}
void Employee::Xuat()
{
    cout << left << setw(20) << this->codeOfEmp++ << setw(20) << this->nameOfEmp;
    this->Emp.Xuat();
    cout << endl;
}
int main()
{
    Employee *z;
    int n;
    cout << "\nNhap so luong nhan su: ";
    cin >> n;
    z = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ma nhan su: " << i + 1  << "\n";
        z[i].Nhap();
    }
    cout << left << setw(20) << "Ma NS" << setw(20) << "Ten NS" << setw(20) << "Date" << endl;
    for (int i = 0; i < n; i++)
    {

        z[i].Xuat();
    }
    return 0;
}
