// Aplikasi kalkulator phytagoras sederhana
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	// Kamus
	int menu;
	float tinggi, alas, miring;
	float tinggi2, alas2, miring2;
	float sudut, radSudut, jwbSinCos;
	const float pi = 3.14159265359;
	float total;
	
	// Algoritma
	while (1) {
		// Header
		printf("Aplikasi Kalkulator Phytagoras Sederhana\n");
		printf("\nMain Menu: \n");
		printf("1. Mencari panjang sisi miring segitiga\n");
		printf("2. Mencari panjang sisi alas segitiga\n");
		printf("3. Mencari panjang sisi tinggi segitiga\n");
		printf("4. Mencari panjang sisi yang berhadapan dengan sudut\n");
		printf("5. Mencari panjang sisi datar yang membentuk sudut\n");
		printf("6. Menghitung sin sudut\n");
		printf("7. Menghitung cos sudut\n");
		printf("8. Menghitung tan sudut\n");
		printf("0. Keluar aplikasi\n");
		printf("\nPilih kode yang diinginkan: ");
		scanf(" %d", &menu);
		
		// Sisi miring kode 1
		if (menu==1) {
			printf("\n-----------------------------------------------\n");
			printf("Mencari Panjang Sisi Miring Segitiga\n");
			printf("Panjang sisi alas: ");
			scanf(" %f", &alas);
			printf("Panjang sisi tinggi: ");
			scanf(" %f", &tinggi);
			
			alas2 = pow(alas,2);
			tinggi2 = pow(tinggi,2);
			total = sqrt(alas2+tinggi2);
			printf("\nHasilnya %f", total);;
		}
		
		// SIsi alas kode 2
		else if (menu==2) {
			printf("\n-----------------------------------------------\n");
			printf("Mencari Panjang Sisi Alas Segitiga\n");
			printf("Panjang sisi tinggi: ");
			scanf(" %f", &tinggi);
			printf("Panjang sisi miring: ");
			scanf(" %f", &miring);
			
			miring2 = pow(miring,2);
			tinggi2 = pow(tinggi,2);
			total = sqrt(miring2-tinggi2);
			printf("\nHasilnya %f", total);;
		}
		
		// Sisi tinggi kode 3
		else if (menu==3) {
			printf("\n-----------------------------------------------\n");
			printf("Mencari Panjang Sisi Tinggi Segitiga\n");
			printf("Panjang sisi alas: ");
			scanf(" %f", &alas);
			printf("Panjang sisi miring: ");
			scanf(" %f", &miring);
			
			miring2 = pow(miring,2);
			alas2 = pow(alas,2);
			total = sqrt(miring2-alas2);
			printf("\nHasilnya %f", total);
		}
		
		// Sisi yang berhadapan dengan sudut kode 4
		else if (menu==4) {
			printf("\n-----------------------------------------------\n");
			printf("Mencari Panjang Sisi yang Berhadapan dengan Sudut\n");
			printf("Besar sudut (satuan derajat tidak perlu ditulis): ");
			scanf(" %f", &sudut);
			radSudut = sudut*pi/180;
			jwbSinCos = sin(radSudut);
			printf("Panjang sisi miring: ");
			scanf(" %f", &miring);
			total = jwbSinCos*miring;
			printf("\nHasilnya %f", total);
		}
		
		// Sisi Datar yang Membentuk Sudut kode 5
		else if (menu==5) {
			printf("\n-----------------------------------------------\n");
			printf("Mencari Panjang Sisi Datar yang Membentuk Sudut\n");
			printf("Besar sudut (satuan derajat tidak perlu ditulis): ");
			scanf(" %f", &sudut);
			radSudut = sudut*pi/180;
			jwbSinCos = cos(radSudut);
			printf("Panjang sisi miring: ");
			scanf(" %f", &miring);
			total = jwbSinCos*miring;
			printf("\nHasilnya %f", total);
		}
		
		// Sin sudut kode 6
		else if (menu==6) {
			printf("\n-----------------------------------------------\n");
			printf("Menghitung sin Sudut\n");
			printf("Besar sudut (satuan derajat tidak perlu ditulis): ");
			scanf(" %f", &sudut);
			radSudut = sudut*pi/180;
			total = sin(radSudut);
			printf("\nHasilnya %f", total);
		}
		
		// Cos sudut kode 7
		else if (menu==7) {
			printf("\n-----------------------------------------------\n");
			printf("Menghitung cos Sudut\n");
			printf("Besar sudut (satuan derajat tidak perlu ditulis): ");
			scanf(" %f", &sudut);
			radSudut = sudut*pi/180;
			total = cos(radSudut);
			printf("\nHasilnya %f", total);
		}
		
		// Tan sudut kode 8
		else if (menu==8) {
			printf("\n-----------------------------------------------\n");
			printf("Menghitung tan Sudut\n");
			printf("Besar sudut (satuan derajat tidak perlu ditulis): ");
			scanf(" %f", &sudut);
			radSudut = sudut*pi/180;
			total = tan(radSudut);
			printf("\nHasilnya %f", total);
		}
		
		// Keluar
		else if (menu==0) {
			exit(0);
		}
		
		// Invalid code
		else {
			printf("KODE INVALID WOI! NULIS YANG BENER!!");
		}
		
			printf("\n \n...............................................\n \n");
				
	}
return 0;
}
