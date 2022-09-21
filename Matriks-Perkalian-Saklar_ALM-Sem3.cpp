 /*
 	NAMA	:	AINI AZZAH
	NIM		:	21091397006
	PRODI	:	MANAJEMEN INFORMATIKA / 2021 B
 */
 
 #include <iostream>
 using namespace std;

 int main()
 {
 	cout << "=======================================================\n";
 	cout << "\t PROGRAM PERKALIAN MATRIKS DENGAN SKALAR" << endl;
 	cout << "=======================================================\n\n";
 	
	 //Inisialisasi variabel program perkalian matriks dengan skalar
 	int matriks[50][50];
 	int hasil [50][50];
 	int baris;
 	int kolom;
 	int skalar;
 	

 	//Input jumlah baris, kolom, dan skalar
 	cout << "\tMasukkan jumalh baris matriks : ";
 	cin >> baris;
 	
 	cout << "\tMasukkan jumlah kolom matriks : ";
 	cin >> kolom;
 	cout << endl;
 	
 	cout << "\tMasukkan bilangan skalar : ";
 	cin >> skalar;
 	cout << endl;


 	//Looping program input nilai matriks
 	cout << "\tMasukkan nilai Matriks = " << endl;
 	for (int i = 0; i<baris; i++)
	 {
	 	cout << "\t";
 		for (int j = 0; j<kolom; j++)
		 {
 			cin >> matriks[i][j];
		 }
	 }
	 cout<<endl;


	 //Looping menampilakan hasil matriks
	 cout<<"\tHasil perkalian skalar dan matriks = "<<endl;
	 for (int i=0; i<baris; i++)
	 {
	 	for (int j=0; j<kolom; j++)
		 {
		 	//Rumus perkalian matriks dengan skalar
	 		hasil[i][j] = skalar * matriks[i][j];
	 		
	 		//Menampilakan hasil matriks
	 		cout << "\t" << hasil[i][j];
		 }
		 cout<<endl;
	 }
	 return 0;
 }
