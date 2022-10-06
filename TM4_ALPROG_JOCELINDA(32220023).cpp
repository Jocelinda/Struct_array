#include <iostream>
using namespace std; 
struct saya{
	string nama; 
	int nilai;
};

int main ()
{
	int i,n;
	cout << "Masukkan Jumlah Data:\n";
	cin >> n;
	struct saya mahasiswa[n];
 


	for (i=0; i < n ; i++)
	{
		
		cout << "\nNama: ";
		cin >> mahasiswa[i].nama;
		cout << "Nilai: ";
		cin >> mahasiswa[i].nilai;
		cout << "Status:";

	if (mahasiswa[i].nilai >=50 ){
		cout <<" Lulus\n\n";
	
	} 
	else{
		cout  << " Tidak Lulus\n\n";
	}
	}
	};

	


