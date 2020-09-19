/*C�u 1
X�y dung lop NhanVien gom c� c�c thuoc t�nh: M� nh�n vi�n, t�n nh�n vi�n, nam sinh.
a.	X�y dung phuong thuc nhap/hien th�ng tin cho mot nh�n vi�n.
b.	X�y dung phuong thuc lay tuoi cua nh�n vi�n vua nhap. (nam hien tai � nam sinh)
*/
#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
class NhanVien{
	private:
		string MaNV,TenNV;
		int NamSinh;
	public:
		void Nhap();
		void Hien();
		int LayTuoi();
		
};
void NhanVien::Nhap(){
	fflush(stdin);
	cout<< "\t\t Nhap thong tin nhan vien\n";
	cout<< " Ma nhan vien: ";
	getline(cin,MaNV);
	cout<< " Ten nhan vien: ";
	getline(cin,TenNV);
	cout<< " Nam sinh : ";
	cin>> NamSinh;
}
void NhanVien::Hien(){
	cout<< "\t\t Thong tin nhan vien\n ";
	cout<< "Ma nhan vien: "<<MaNV<<" - Ten nhan vien: "<<TenNV<<" - Nam sinh: "<<NamSinh;
}
int NhanVien::LayTuoi(){
	int namhientai=2020;
    cout << " - Tuoi: " << namhientai-NamSinh << endl; 
	}
int main(){
	NhanVien nv;
	nv.Nhap();
	nv.Hien();
	nv.LayTuoi();
}
