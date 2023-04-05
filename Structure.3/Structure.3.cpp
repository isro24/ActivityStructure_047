#include <iostream>
using namespace std;

struct DetailAlamat {
	char Desa[20];
	char Kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char Nama[20];
	DetailAlamat Alamat;
	int umur;

};

int main()
{
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukkan NIM = ";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukkan Nama = ";
		cin.getline(mhs[i].Nama, 20);
		cout << "Alamat :" << endl;
		cout << "\tMasukkan Desa = ";
		cin.getline(mhs[i].Alamat.Desa, 20);
		cout << "\tMasukkan Kota = ";
		cin.getline(mhs[i].Alamat.Kota, 20);
		cout << "Masukkan umur = ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}
	for (int i = 0; i < 3; i++) {
		cout << "\nNIM =" << mhs[i].NIM;
		cout << "\nNama =" << mhs[i].Nama;
		cout << "\nDesa =" << mhs[i].Alamat.Desa;
		cout << "\nKota =" << mhs[i].Alamat.Kota;
		cout << "\numur =" << mhs[i].umur;
	}
}