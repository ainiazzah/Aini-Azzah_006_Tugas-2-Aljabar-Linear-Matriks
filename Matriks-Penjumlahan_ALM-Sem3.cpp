/*	
	NAMA	:	AINI AZZAH
	NIM		:	21091397006
	PRODI	:	D4 MANAJEMEN INFORMATIKA / 2021 B
*/

#include <iostream>
using namespace std;

int main()
{
	 cout << "=======================================================\n";
 	 cout << "\t\t PROGRAM PENJUMLAHAN MATRIKS" << endl;
 	 cout << "=======================================================\n\n";
	  
	 //Inisialisasi variable program penjumlahan matriks
	 int i, j;
	 int baris;
	 int kolom;
	 int matriks1[10][10];
	 int matriks2[10][10];
	 int hasil[10][10];
	
	
	 //Input jumlah baris dan kolom matriks
	 cout << "\tMasukkan jumlah baris matriks : ";
	 cin >> baris;
	  
	 cout << "\tMasukkan jumlah kolom matriks : ";
	 cin >> kolom;
	 cout << endl;
	  
	  
	 //Input nilai matriks 1
	 cout << "\tMasukkan elemen matrix pertama : \n";
	 for(i = 0; i < baris; i++)
	 {
	 	 cout << "\t";
		 for(j = 0; j < kolom; j++)
		 {
	         cin >> matriks1[i][j];
	     }
	 }
	  
	 cout << "\tMasukkan elemen matrix kedua: \n";
	 for(i = 0; i < baris; i++)
	 {
	 	 cout << "\t";
	     for(j = 0; j < kolom; j++)
		 {
	      cin >> matriks2[i][j];
	     }
	 }
	  
	 cout << "\tHasil penjumlahan matrix: \n";
	 for(i = 0; i < baris; i++)
	 {
	   for(j = 0; j < kolom; j++)
		{
	      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
	      cout << "\t" << hasil[i][j] ;
	    }
	   cout << endl;
	 }
	 return 0;
}
