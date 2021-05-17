#include<stdio.h>
#include<time.h>
#include<conio.h>

void waktu(){
	time_t wktu_skrg;//deklarasi
	time(&wktu_skrg);	
	printf(ctime(&wktu_skrg));// menampilkan variabelnya
}
typedef struct y{//perintah memberikan nama alias dari tipe data
	char *urutan1;
	int cost;
	
	}belanja;
	
int main(){
	char prsn='%';
	int i,k=0,jumlah,tot=0,uang,uang2,kembalian,jum_bar[7],jum[7];
	char *urutan[8]={"Shampoo","Pasta Gigi","Sikat Gigi","Sabun","Tepung","Minyak","Telur"};
	int harga[8]={20000,15000,5000,2500,5000,10000,1000};
	
	printf("\nSELAMAT DATANG DI TOKO MAPIRR\n");
	printf("------------------------------------------");
	printf("\nMasukkan Belanjaan Anda\n");
	
	belanja barang[7];
	
	for(i=0;i<=6;i++){
		barang[i].urutan1=urutan[i];
		barang[i].cost=harga[i];
		
	}
	for(i=0;i<=6;i++){
		printf("%-10s\t: ",barang[i].urutan1);
		scanf("%i",&jum[k]);
		//printf("%i",jum[i]);
		jum_bar[i]= barang[i].cost*jum[k];
		tot=tot+jum_bar[i];	
		k++;
	}
	
	
	printf("\nAnda akan mendapatkan diskon 15%c \njika belanja lebih dari Rp.200.000\nKlik Enter untuk Lanjut\n",prsn);
	getchar();
	getchar();
	
	printf("Total belanjaan: Rp.%i\n",tot);
	//getchar();
	if(tot>200000){
		printf("\nAnda mendapatkan diskon 15%c",prsn);
	}
	printf("\nMasukkan Jumlah Uang Pembayaran (Rp.): ");
	scanf("%i",&uang);
	
	do{
		if(uang<tot){
		printf("Uang anda tidak cukup %i\nMasukkan Uang Tambahan: ",tot-uang);
		scanf("%i",&uang2);
		uang=uang+uang2;
		}
	}while(uang<tot);
	
	kembalian=uang-tot;
	
	printf("\n------------------------------------------\n");	
	printf("\t      %-10s","TOKO MAPIRR\n");
	printf("JL. T. NYAK ARIEF - KOPELMA DARUSSALAM\n");
	printf("------------------------------------------\n");	
	printf("        "); waktu();
	printf("\n------------------------------------------\n");	
	printf("%-11s\t%-4s   %8s   %8s\n","Nama Barang","Jmlh","Harga","Total");
	for(i=0;i<=6;i++){
		printf("%-11s\t%4i   %8i   %8i\n",barang[i].urutan1,jum[i],barang[i].cost,jum_bar[i]);
	}
	printf("------------------------------------------\n");	
	printf("%35s","Total Harga : ");
	printf("%8i",tot);
	if(tot>200000){
		printf("\n%35s","Diskon 15\% : ");
		int diskon= tot*15/100;
		tot=tot-diskon;
		printf("%8i\n",diskon);
	}
	printf("\n------------------------------------------\n");
	printf("%35s","Total :");
	printf("%8i\n",tot);
	printf("%35s","Tunai : ");
	printf("%8i\n",uang);
	printf("%35s","Kembali : ");
	printf("%8i",uang-tot);
	printf("\n\n\n");
	
	printf("\t\t   TERIMA KASIH\n");
	printf("\t\tATAS KUNJUNGANNYA\n");
	printf("\tLAYANAN KONSUMEN SMS 082374194550");
	printf("\n------------------------------------------\n");
	return 0;
}
