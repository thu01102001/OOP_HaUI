#include<iostream> 
#include<math.h> 
using namespace std;
class PhanSo {
	private:
		int a, b;
	public:
		PhanSo()  {
			a = 0;
			b = 1;
		}
		PhanSo(int a, int b){
            this->a = a;
            this->b = b;
        }
        ~PhanSo(){
            a = 0;
            b = 1;
        }
        void NHAP() {
        	cout << "\nNhap vao tu so ";
			cin >> a;
			do {
				cout << "\nNhap vao mau so ";
				cin >> b;
				if(b==0)
					printf("\nMau phai khac khong\nVui long kiem tra lai");
			}while(b==0);
		}
		void XUAT() {
	   		cout << "Phan so: " << a << " / " << b << endl;
		}
		int ucln(int a, int b) {
			int uc;
			for(;a != b;) {
				if(a>b) 
					a = a - b;
				else 
					b = b - a;
			}
			uc = a;
		}
		void RUT() {
			cout << a << " / " << b << " = " << a/ucln(a,b) << " / " << b/ucln(a,b);
		}
};
int main() {
	PhanSo P(4,8);
	PhanSo Q;
	P.XUAT();
	P.RUT();
	Q.NHAP();
	Q.XUAT();
	Q.RUT();
}
