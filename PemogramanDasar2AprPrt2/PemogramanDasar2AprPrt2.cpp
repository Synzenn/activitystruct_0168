#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	string umur;
};

int main() {
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;
	cout << "Alamat Mahasiswa : " << endl;
	cout << "\t Desa :";
	cin >> mhs.alamat.desa;
	cout << "\t Kota :";
	cin >> mhs.alamat.kota;
	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n NIM :" << mhs.nim;
	cout << "\n Nama :" << mhs.nama;
	cout << "\n Alamat :";
	cout << "\n \t Desanya :" << mhs.alamat.desa;
	cout << "\n \t Kotanya :" << mhs.alamat.kota;
	cout << "\n Umur :" << mhs.umur;
};