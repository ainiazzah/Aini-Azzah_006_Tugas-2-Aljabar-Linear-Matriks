/*	
	NAMA	:	AINI AZZAH
	NIM		:	21091397006
	PRODI	:	D4 MANAJEMEN INFORMATIKA / 2021 B
*/

#include <iostream>
using namespace std;

int main()
{
	 cout << "=============================================\n";
 	 cout << "\t PROGRAM PENGURANGAN MATRIKS" << endl;
 	 cout << "=============================================\n\n";
	  
	 //Inisialisasi variable program pengurangan matriks
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
	
	 
	 //Looping untuk menginput nilai matriks 1
	 cout << "\tMasukkan elemen matriks pertama : \n";
	 for(i = 0; i < baris; i++)
	  {
	  	 cout << "\t";
	     for(j = 0; j < kolom; j++)
		 {
	      cin >> matriks1[i][j];
	     }
	  }
	  
	 
	 //Looping untuk menginput nilai matriks 2
	 cout << "\tMasukkan elemen matriks kedua : \n";
	  for(i = 0; i < baris; i++)
	  {
	  	 cout << "\t";
	     for(j = 0; j < kolom; j++)
		 {
	      cin >> matriks2[i][j];
	    }
	  }
	  
	 
	 //Looping untuk menghitung serta menampilkan hasil pengurangan matriks
	 cout << "\tHasil penjumlahan matriks = \n";
	  for(i = 0; i < baris; i++)
	  {
	    for(j = 0; j < kolom; j++)
		{
		  //rumus pengurangan matriks
	      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
	      
	      //program menampilkan hasil pengurangan matriks
	      cout << "\t" << hasil[i][j] ;
	    }
	    cout << endl;
	  }
	  return 0;
}
