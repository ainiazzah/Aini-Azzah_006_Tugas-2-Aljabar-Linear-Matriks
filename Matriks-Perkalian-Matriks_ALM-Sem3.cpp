/*
	NAMA	:	AINI AZZAH
	NIM		:	21091397006
	PRODI	:	D4 MANAJEMEN INFORMATIKA / 2021 B
*/

#include <iostream>
using namespace std;

int main()
{
	 cout << "==========================================================\n";
 	 cout << "\t PROGRAM PERKALIAN MATRIKS DENGAN MATRIKS" << endl;
 	 cout << "==========================================================\n\n";
	  
	  //Inisialisasi variable program perkalian matriks dengan matriks
	  int matriks1[10][10];
	  int matriks2[10][10];
	  int hasil[10][10];
	  int baris1, kolom1;
	  int baris2, kolom2;
	  int i, j, k, jumlah = 0;
	  
	  
	  //Input jumlah baris dan kolom matriks 1 dan matriks 2
	  cout << "\tMasukkan jumlah baris matriks pertama : ";
	  cin >> baris1;
	  
	  cout << "\tMasukkan jumlah kolom matriks pertama : ";
	  cin >> kolom1;
	  cout << endl;
	  
	  cout << "\tMasukkan jumlah baris matriks kedua : ";
	  cin >> baris2;
	  
	  cout << "\tMasukkan jumlah kolom matriks kedua : ";
	  cin >> kolom2;
	  cout << endl;
	  
	  //Perhitungan perkalian matriks dengan matriks menggunakan program if
	  if(kolom1 != baris2)
	  {
		    cout << "\tMatriks tidak dapat dikalikan satu sama lain.\n";
			
		} else {
			//Input nilai matriks 1
		    cout << "\tMasukkan nilai matriks pertama = \n";
		    for(i = 0; i < baris1; i++)
			{
				 cout << "\t";
		         for(j = 0; j < kolom1; j++)
				  {
			         cin >> matriks1[i][j];
			      }
		    }
		    
		    //Input nilai matriks 2
		    cout << "\tMasukkan nilai matriks kedua = \n";
		    for(i = 0; i < baris2; i++)
			{
				  cout << "\t";
			      for(j = 0; j < kolom2; j++)
				  {
			         cin >> matriks2[i][j];
			      }
		    }
		    cout << endl;
		    
		    
		    //Program perkalian matriks dengan matriks
		    for(i = 0; i < baris1; i++)
			{
			      for(j = 0; j < kolom2; j++)
				  {
				        for(k = 0; k < baris2; k++)
						{
							//Rumus perkalian matriks dengan matriks
				             jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
				        }
				        hasil[i][j] = jumlah;
				        jumlah = 0;
			      }
		    }
		    
		    
		    //Menampilkan hasil perkalian matriks dengan matriks
		    cout << "\tHasil perkalian matriks = \n";
		    for(i = 0; i < baris1; i++)
			{
			      for(j = 0; j < kolom2; j++)
				  {
			         cout << "\t" << hasil[i][j] ;
			      }
			      cout << endl;
		    }
	  }
	  return 0;
}
