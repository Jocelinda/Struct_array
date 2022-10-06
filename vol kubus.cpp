#include <iostream>
using namespace std; 
int main()
{ 
//siapkan variabel menghitung volume kubus 
int volume;
int sisi1;
int sisi2;
int sisi3;

//siapkan fungsi-fungsi operasi 
int calVolKubus(int sisi1, int sisi2, int sisi3);
return sisi1*sisi2*sisi3; 

// input nilai 
cout<< "Masukkan nilai:";
cin>> sisi1 >> sisi2 >> sisi3;

// operasi pengolahan nilai 
volume = calVolKubus(sisi1,sisi2,sisi3);

//output 
//  cout << "Volume kubus adalah hasil dari sisi1:" << sisi1<< "sisi2:"<<sisi2 << "sisi3:"<<sisi3 << "adalah=" <<volume << "cm3";
printf ("Volume kubus dari sisi1:%i sisi2:%i sisi3:%i adalah = %icm^3", sisi1, sisi2, sisi3);
return 0; 
}
