#include <iostream>
using namespace std;
int data_1(){
	int kode;
	int k[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int stok[16]={5,2,15,6,1,4,11,3,21,13,7,1,1,25,50,6};
	int pilharga[]={120000,5500000,35000,750000,11750000,175000,55000,275000,15000,5000,375000,1750000,1250000,135000,40000,300000,};
	printf("++++++Macam Macam Barang+++++\n");
	printf("**************************************************\n");
	printf("No\t Barang\t \tHarga\t \tStok\n");
	printf("**************************************************\n");
	printf("1.\t Kacamata\tRp.%i\t",pilharga[0],k[0]);
	printf("%i\n",stok[0]);
	printf("2.\t Laptop\t   \tRp.%i",pilharga[1],k[1]);
	printf("\t%i\n",stok[1]);
	printf("3.\t Parfum\t \tRp.%i",pilharga[2],k[2]);
	printf("\t%i\n",stok[2]);
	printf("4.\t Dompet\t \tRp.%i",pilharga[3],k[3]);;
	printf("\t%i\n",stok[3]);
	printf("5.\t Tv\t \tRp.%i",pilharga[4],k[4]);
	printf("\t%i\n",stok[4]);
	printf("6.\t Nokia senter\tRp.%i",pilharga[5],k[5]);
	printf("\t%i\n",stok[5]);
	printf("7.\t Asbak Rokok\tRp.%i",pilharga[6],k[6]);
	printf("\t%i\n",stok[6]);
	printf("8.\t Kipas Angin\t Rp.%i",pilharga[7],k[7]);
	printf("\t%i\n",stok[7]);
	printf("9.\t Sisir\t \tRp.%i",pilharga[8],k[8]);
	printf("\t%i\n",stok[8]);
	printf("10.\t Gunting Kuku\t Rp.%i",pilharga[9],k[9]);
	printf("\t%i\n",stok[9]);
	printf("11.\t Flashdisk\tRp.%i",pilharga[10],k[10]);
	printf("\t%i\n",stok[10]);
	printf("12.\t Meja\t \tRp.%i",pilharga[11],k[11]);
	printf("\t%i\n",stok[11]);
	printf("13.\t Kasur\t \tRp.%i",pilharga[12],k[12]);
	printf("\t%i\n",stok[12]);
	printf("14.\t Charger Hp\tRp.%i",pilharga[13],k[13]);
	printf("\t%i\n",stok[13]);
	printf("15.\t Kaos Kaki\t Rp.%i",pilharga[14],k[14]);
	printf("\t%i\n",stok[14]);
	printf("16.\t Tas\t \tRp.%i",pilharga[15],k[15]);
	printf("\t%i\n",stok[15]);
}
int main() {
kembali:
	system("cls");
	int nilai; 
    int produk ;
    int pil;
    char mau='y';
    int E, hasil=0;
    char keluar;
    int kode , harga , i=1 , total_pembelian=0, total;
    int k[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    	printf("======>PEMBELIAN BARANG<======\n");
    	printf("\n");
 	printf("1. List Barang\n");
	printf("2. Exit");
	printf("\n");
	printf("Silahkan pilih menu : ");
	scanf("%i",&produk);

	switch(produk){
	case 1:
	data_1();	
	while (mau=='y'){
			printf("   \nSilahkan pilih barang yang diinginkan ; ");
	scanf("%i",&kode);
	fflush (stdin);
		if(kode==1){	printf("barang  yang anda beli adalah : Kacamata\n");
	harga= 120000;
	printf("Harga = %d\n ", harga);	
		} else if (kode== 2){
			printf("barang  yang anda beli adalah : Laptop\n");
	harga= 5500000;
	printf("Harga = %d\n ", harga);
		}else if (kode==3){
			printf("barang  yang anda beli adalah : Parfum\n");
	harga= 35000;
	printf("Harga = %d\n ", harga);}
		else if (kode==4){
			printf("barang  yang anda beli adalah : Dompet\n");
	harga= 75000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==5){
		printf("barang  yang anda beli adalah : Tv\n");
	harga= 11750000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==6){
		printf("barang  yang anda beli adalah : Nokia Senter\n");
	harga= 175000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==7){
		printf("barang  yang anda beli adalah : Asbak Rokok\n");
	harga= 55000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==8){
		printf("barang  yang anda beli adalah : Kipas Angin\n");
	harga= 275000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==9){
		printf("barang  yang anda beli adalah : Sisir\n");
	harga= 15000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==10){
		printf("barang  yang anda beli adalah : Gunting Kuku\n");
	harga= 5000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==11){
		printf("barang  yang anda beli adalah : Flashdisk\n");
	harga= 375000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==12){
		printf("barang  yang anda beli adalah : Meja\n");
	harga= 1750000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==13){
		printf("barang  yang anda beli adalah : Kasur\n");
	harga= 1250000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==14){
			printf("barang  yang anda beli adalah : Charger Hp\n");
	harga= 135000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==15){
		printf("barang  yang anda beli adalah : Kaos Kaki\n");
	harga= 40000;
	printf("Harga = %d\n ", harga);
		}
		else if (kode==16){
		printf("barang  yang anda beli adalah : Tas\n");
	harga= 300000;
	printf("Harga = %d\n ", harga);
		}else {
			printf("Pilihan tidak ada");
		}
	total_pembelian=total_pembelian+harga;
	printf("Apakah ingin berbelanja kembali? [y/t]:");
	scanf("%c", &mau);
	i++;
	}

		case 2:
	printf("\nApakah anda yakin ingin keluar? (1.keluar/2.kembali) = ");
	scanf("%i",&keluar);
		if(keluar==1){
			printf("\nTotal Belanja = %d\n", total_pembelian);
			printf("Terima Kasih telah berbelanja",&keluar);
		exit(0);	
		} 
		else if (keluar==2){
			goto kembali;
		}
		else {
			printf("Pilihan tidak ada");
		}	
	exit(0);	
	break;
	
	default:
	printf("Tidak ada pilihan");
	}
printf("Total Belanja = %d\n", total_pembelian);
	return 0;	
}
