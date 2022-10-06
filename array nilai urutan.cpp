#include <iostream>
using namespace std; 
int main()
{
	int nilai [5];
	nilai [0]=6;
	nilai[4]=-2;
	// sama dengan nilai [1] = 2
	// dijadikan sebagai indeks 1 karena 3/2 itu 1,5. 
	// Kemudian, karena merupakan int, akan dibulatkan menjadi 1. Jadi, nilai indeks 1 = 2.
	nilai [3/2]=2; 
	
	nilai [2]= nilai [0];
	// sama dengan nilai [3] = 2+6
	nilai [3]= nilai [1]+ nilai [2];
	
	cout << "Elemen array nilai tersebut adalah:\n"<<endl; 
	cout << nilai [0]<<" "<< nilai[1] << " "<< nilai [2] << " " << nilai [3] <<" " << nilai [4]; 
	
	return 0;
}
