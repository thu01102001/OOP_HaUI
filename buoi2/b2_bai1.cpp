#include<iostream>
#include<math.h>
using namespace std;
class PTBac2{
	private:
		float a, b, c;
    public:
        PTBac2(){
            a = 0;
            b = 0;
            c = 0;
        }
        PTBac2(float a, float b, float c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
         ~PTBac2(){
            a = 0;
            b = 0;
            c = 0;
        }
        void NHAP(){
            cout << "\nNhap he so a = ";
            cin >> a;
            cout << "\nNhap he so b = ";
            cin >> b;
            cout << "\nNhap he so c = ";
            cin >> c;
        }
        void XUAT(){
            cout << a << "x^2 + " << b << "x + " << c << " = 0";
        }
        void GIAI(){
            float denta = b*b - 4*a* c;
            if(denta < 0)
                cout << "\nPhuong trinh vo nghiem";
            else if(denta == 0)
                cout << "\nPhuong trinh co nghiem kep: x1 = x2 = " << - b / (2*a);
            else {
            	cout << "\nPhuong trinh co 2 nghiem phan biet: ";
				cout << "\nx1 = " << (-b + sqrt(denta)) / (2*a);
				cout << "\nx1 = " << (-b - sqrt(denta)) / (2*a);
			}
                
        }
};

int main(){
    PTBac2 P(1,4,4);
	PTBac2 Q;
    P.XUAT();
    P.GIAI();
    Q.NHAP();
    Q.XUAT();
    Q.GIAI();
    return 0;
}
