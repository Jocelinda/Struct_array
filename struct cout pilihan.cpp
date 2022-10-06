#include <iostream>
#include <stdio.h>
using namespace std;

struct exo{
	string nama;
	string posisi;
	int umur;
	 
} suho, chanyeol, sehun;

int main()
{
	suho.nama = "Kim Junmyeon";
	suho.posisi = "Leader ";
	suho.umur = 32;
	
	chanyeol.nama = "Park Chanyeol";
	chanyeol.posisi = "Rapper ";
	chanyeol.umur = 30;
	
	sehun.nama = "Oh Sehun";
	sehun.posisi = "Maknae ";
	sehun.umur = 28; 
	
	int pilihan; 
	do 
	{
	cout <<"PILIHAN TAMPILAN DATA\n";
	cout <<"1. Tampilkan data suho\n";
	cout <<"2. Tampilkan data Chanyeol\n";
	cout <<"3. Tampilkan data Sehun\n";
	cout <<"Masukkan nomornya: ";
	cin >> pilihan;
	
	switch (pilihan)
	{
		case 1:
		cout << "Nama: " <<suho.nama << endl;
		cout << "Posisi: " << suho.posisi << endl; 
		cout << "Usia: "<<suho.umur<<endl;
		cout << "Suho mempunyai nama asli "<<suho.nama << " dengan posisi " << suho.posisi << " berusia "<<suho.umur<< " tahun"<< endl; 
		break; 
		
		case 2:
		cout << "Nama: " <<chanyeol.nama << endl;
		cout << "Posisi: " << chanyeol.posisi << endl; 
		cout << "Usia: "<<chanyeol.umur<<endl;
		cout << "Chanyeol mempunyai nama asli "<<chanyeol.nama << " dengan posisi " << chanyeol.posisi << " berusia "<<chanyeol.umur<<" tahun"<<endl; 
		break; 
		
		case 3: 
		cout << "Nama: " <<sehun.nama << endl;
		cout << "Posisi: " << sehun.posisi << endl; 
		cout << "Usia: "<<sehun.umur<<endl;
		cout << "Chanyeol mempunyai nama asli "<<sehun.nama << " dengan posisi " << sehun.posisi << " berusia "<<sehun.umur << " tahun" <<endl; 
		break; 
		
		case 4: 
		system ("exit");
		cout << "Terima kasih telah menggunakan program ini\n";
		
		default:
		cout<< "Pilihan belum dimasukkan\n";
		break; 
	}
	system ("pause");
	system ("cls");
} while (pilihan != 4);
return 0; 
}

