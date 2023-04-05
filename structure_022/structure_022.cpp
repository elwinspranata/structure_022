#include <iostream> 
using namespace std; 

struct Mahasiswa
{
	string NIM;
	string Nama;
	string Alamat;
	int umur;

};

int main()
{
    Mahasiswa mhs;

	cout << "Masukan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukan Nama = ";
	cin >> mhs.Nama; 
	cout << "Masukan Alamat = ";
	cin >> mhs.Alamat;
	cout << "Masukan Umur = "; 
	cin >> mhs.umur; 

	cout << "NIM = " << mhs.NIM;
	cout << "Masukan Nama" << mhs.Nama;
	cout << "Masukan Alamat" << mhs.Alamat;
	cout << "Masukan Umur" << mhs.umur;


