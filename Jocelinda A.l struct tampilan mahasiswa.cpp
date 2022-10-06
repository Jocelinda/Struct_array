#include <iostream>
#include <string>
using namespace std; 


int main(){
 
 struct siswa{
	string nama;
	string kampus;
	string alamat; 
} siswa01, siswa02;

 int pilihan;
 do
 {
 cout << "1. Tampilkan data mahasiswa 1\n";
 cout << "2. Tampilkan data mahasiswa 2 \n";
 cout << "3. Tampilkan data kedua mahasiswa \n";
 cout << "Masukkan pilihan Anda:"; 
 cin  >> pilihan;
 
 switch (pilihan)
 {
 	case 1:
 		cout << "Masukkan nama mahasiswa 1: \n";
 		cin >> siswa01.nama;
 		cout << "Masukkan nama kampus mahasiswa 1: \n"; 
 		cin >> siswa01.kampus; 
 		cout << "Masukkan alamat mahasiswa 1:\n"; 
 		cin >> siswa01.alamat; 
 		cout << siswa01.nama << " berkuliah di " << siswa01.kampus << " yang beralamat di " << siswa01.alamat << endl; 
 	break; 
 	
 	case 2:
 		cout << "Masukkan nama mahasiswa 2: \n";
 		cin >> siswa02.nama;
 		cout << "Masukkan nama kampus mahasiswa 2: \n"; 
 		cin >> siswa02.kampus; 
 		cout << "Masukkan alamat mahasiswa 2:\n"; 
 		cin >> siswa02.alamat; 
 		cout << siswa02.nama << " berkuliah di " << siswa02.kampus << " yang beralamat di " << siswa02.alamat << endl; 
 		break; 
 		
 	case 3: 
 	    cout << siswa01.nama  << " berkuliah di " << siswa01.kampus << " yang beralamat di " << siswa01.alamat << endl; 
 		cout << siswa02.nama << " berkuliah di " << siswa02.kampus << " yang beralamat di " << siswa02.alamat << endl; 
 	    break; 
 	    
 	case 4: 
 		system ("exit");
 		cout << "Terima kasih telah menggunakan program ini :)\n";
		break;
		
	 default:
		cout << "Pilihan tidak ada\n";
		break;
				
	}
		system("pause");
		system("cls");
 } while (pilihan != 4 );
 return 0; 
 
 }

