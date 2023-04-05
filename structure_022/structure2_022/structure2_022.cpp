#include <iostream>
using namespace std; 

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string Nama;
	DetailAlamat Alamat;
	int umur;

};

int main()
{
	Mahasiswa mhs;

	cout << "Masukkan NIm = ";
	cin >> mhs.NIM;
	cout << "Masukan Nama = ";
	cin >> mhs.Nama;
	cout << "Alamat :" << endl;
	cout << "\tMasukan Desam = ";
	cin >> mhs.Alamat.desa;
	cout << "\tMasukan Kota = ";
	cin >> mhs.Alamat.kota;
	cout << "Masukan Umur = ";
	cin >> mhs.umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nDesa = " << mhs.Alamat.desa;
	cout << "\Kota = " << mhs.Alamat.kota;
	cout << "\;nUmur = " << mhs.umur;
}
