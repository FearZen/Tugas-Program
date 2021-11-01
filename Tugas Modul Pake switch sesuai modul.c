#include <stdio.h>
#include <stdlib.h>
#include "aa.h"

int main(){
	int menu, pilihan;
	float p, l, r, t, s, volumeb,volumek,luask,luasb,volumett,luast;                                         
	system("color a");
	awal:
		printf("--=== Volume dan Luas Permukaan Bangun Datar ===--\n");
		printf("          --== Pilih Bangun Datar!! ==--\n");
		printf("                -== 1.Balok  ==-\n");
		printf("                -== 2.Kubus  ==-\n");
		printf("                -== 3.Tabung ==-\n");
		printf("         --== Pilihanmu Nomer [1-3]? ==--\n\t\t\t");
		scanf("%d", &menu);
		
     switch(menu){
		 case 1:
		 	printf("Masukkan Panjang Balok : ");
		 	scanf("%f", &p);
		 	printf("Masukkan Lebar Balok : ");
		 	scanf("%f", &l);
		 	printf("Masukkan Tinggi Balok : ");
		 	scanf("%f", &t);
		 	volumeb = balokPep(p,l,t);
		 	luasb = balokPip(p,l,t);
		 	printf("Volume Baloknya adalah = %.2f\n", volumeb);
		 	printf("Luas Permukaan Balok adalah = %.2f\n", luasb);
		 	break;
		 case 2:
		 	printf("Masukkan Sisi Kubus : ");
		 	scanf("%f", &s);
		 	volumek = kubusEh(s);
		 	luask = kubusAh(s);
		 	printf("Volume Kubusnya adalah = %.2f\n", volumek);
		 	printf("Luas Permukaan Kubus adalah = %.2f\n", luask);
		 	break;
		 case 3:
		 	printf("Nilai Phi Telah Terdefinisikan : 3.14\n");
		 	printf("Masukkan Jari-jari Tabung : ");
		 	scanf("%f", &r);
		 	printf("Masukkan Tinggi Tabung : ");
		 	scanf("%f", &t);
		 	volumett= tabungVe(r,t);
	        luast = tabungLu(r,t);
		 	printf("Volume Tabungnya adalah = %.2f\n", volumett);
		 	printf("Luas Permukaan Tabung adalah = %.2f", luast);
		 	break;
	 }
	 printf("\n");
	 printf("Masukkan Angka 1 Jika Ingin Kembali ke Menu Utama atau Masukkan Angka 2 untuk Keluar\n");
	 printf("Pilihanmu [1-2]?\n");
	 scanf("%d", &pilihan);
	 system("cls");
	 
	 switch(pilihan){
		 case 1:
		 	goto awal;
         case 2:
         	goto keluar;
	 }
	 
	 keluar:
	 	 return 0;	 
}