#include <iostream>
using namespace std; 

//siapkan fungsi-fungsi operasi 
int calVolKubus(int sisi1, int sisi2, int sisi3){
return sisi1*sisi2*sisi3; 
}



int main()
{ 
//siapkan variabel menghitung volume kubus 
int volume;
int sisi1;
int sisi2;
int sisi3;


// input nilai 
cout<< "Masukkan nilai:\n";
cout<< "Masukkan s1:";
cin>> sisi1;
cout<< "Masukkan s2:";
cin>> sisi2;
cout<< "Masukkan s3:";
cin>> sisi3;

// operasi pengolahan nilai
volume = calVolKubus(sisi1,sisi2,sisi3);

//output 
 //cout << "Volume kubus adalah  "  << volume << " cm3";
 printf ("Volume kubus adalah = %icm^3",  volume);
return 0; 
}
