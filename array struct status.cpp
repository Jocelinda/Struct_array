#include <iostream>
using namespace std; 
struct mahasiswa{
	string nama; 
	int nilai;
} data_mhs;

int main ()
{
	int n;
	cout << "Masukkan Jumlah Data:\n";
	cin >> n;

	int i;
	int x;
	double nilai;
	
	for (i=0; i <=(n-1) ; i++)
	{
		
		cout << "Nama: ";
		cin >> data_mhs.nama;
		cout << "Nilai: ";
		cin >> data_mhs.nilai;
		cout << endl; 
		 
	}
	for (x=0; x<=(n-1); x++)
	
if (data_mhs.nilai >=50)
{
	cout << data_mhs.nama <<  " Anda lulus" << endl;
}
else if (data_mhs.nilai<= 50)
{
	cout << data_mhs.nama << " Anda tidak lulus" << endl; 
}
else 
{
	cout << "Maaf, format nilai yang Anda masukkan tidak sesuai";
}

return 0; 

}
