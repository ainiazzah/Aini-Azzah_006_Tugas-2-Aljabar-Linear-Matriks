/*	
	NAMA	:	AINI AZZAH
	NIM		:	21091397006
	PRODI	:	MANAJEMEN INFORMATIKA / 2021 B
*/

#include <iostream>
using namespace std;

int main()
{
	 cout << "====================================================\n";
 	 cout << "\t\t PROGRAM MATRIKS TRASPOSE" << endl;
 	 cout << "====================================================\n\n";
	 
	 //Inisialisasi variable program matriks transpose
	 int i, j;
	 int baris;
	 int kolom;
	 int matriks[10][10];
	 int transpose[10][10];
	 
 	
 	 //Input jumlah baris dan kolom
	 cout << "\tMasukkan jumlah baris Matriks : ";
	 cin >> baris;
  
	 cout << "\tMasukkan jumlah kolom Matriks : ";
	 cin >> kolom;
	 cout << endl;
	
	
	 //Looping program input nilai matriks
	 cout << "\tMasukkan nilai Matriks  = " << endl;
	 for (i = 0; i < baris; i++)
	 {
	 	for (j = 0; j < kolom; j++)
		 	{
		 		cout << "\t";
	      		cin  >> matriks[i][j];
	     	}
	   	 	cout << endl;
	 }
	 cout << endl;
	
	
	 //Looping rumus transpose Matriks
	 for (i = 0; i < baris; i++)
	 {
	 	for (j = 0; j < kolom; j++)
	     	{
	     		 transpose[j][i] = matriks[i][j];
	   		}
	 }
	  
	  
	 //Looping menampilkan hasil trasnpose Matriks
	 cout << "\tHasil Transpose Matriks = " << endl;
	 for (i = 0; i < kolom; i++)
	  {
	    for (j = 0; j < baris; j++)
	        {
			     cout << "\t" << transpose[i][j] << "\t";
	     	}
	    cout << endl;
	  }
	  return 0;
}
