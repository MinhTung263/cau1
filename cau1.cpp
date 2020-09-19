/*Câu 1
Xây dung lop NhanVien gom có các thuoc tính: Mã nhân viên, tên nhân viên, nam sinh.
a.	Xây dung phuong thuc nhap/hien thông tin cho mot nhân viên.
b.	Xây dung phuong thuc lay tuoi cua nhân viên vua nhap. (nam hien tai – nam sinh)
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
