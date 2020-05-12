#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int data_1(){
	int stok[16]={5,2,15,6,1,4,11,3,21,13,7,1,1,25,50,6};
	printf("++++++Macam Macam Barang+++++\n");
	printf("**************************************************\n");
	printf("No\t Barang\t \tHarga\t \tStok\n");
	printf("**************************************************\n");
	printf("1.\t Kacamata\tRp.120.000\t");
	printf("%i\n",stok[0]);
	printf("2.\t Laptop\t   \tRp.5.500.000");
	printf("\t%i\n",stok[1]);
	printf("3.\t Parfum\t \tRp.35.000");
	printf("\t%i\n",stok[2]);
	printf("4.\t Dompet\t \tRp.75.000");
	printf("\t%i\n",stok[3]);
	printf("5.\t Tv\t \tRp.11.750.000");
	printf("\t%i\n",stok[4]);
	printf("6.\t Nokia senter\t Rp.175.000");
	printf("\t%i\n",stok[5]);
	printf("7.\t Asbak Rokok\t Rp.55.000");
	printf("\t%i\n",stok[6]);
	printf("8.\t Kipas Angin\t Rp.275.000");
	printf("\t%i\n",stok[7]);
	printf("9.\t Sisir\t \tRp.15.000");
	printf("\t%i\n",stok[8]);
	printf("10.\t Gunting Kuku\t Rp.5.000");
	printf("\t%i\n",stok[9]);
	printf("11.\t Flashdisk\t Rp.375.000");
	printf("\t%i\n",stok[10]);
	printf("12.\t Meja\t \tRp.1.750.000");
	printf("\t%i\n",stok[11]);
	printf("13.\t Kasur\t \tRp.1.250.000");
	printf("\t%i\n",stok[12]);
	printf("14.\t Charger Hp\t Rp.135.000");
	printf("\t%i\n",stok[13]);
	printf("15.\t Kaos Kaki\t Rp.40.000");
	printf("\t%i\n",stok[14]);
	printf("16.\t Tas\t \tRp.300.000");
	printf("\t%i\n",stok[15]);
	printf("17. Kembali ke menu Utama");
}
int main() {
kembali:
	system("cls");
	int nilai; 
    int produk ;
    int pil;
    int E, hasil=0;
    char keluar;
    
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
	printf("   \nSilahkan pilih barang yang diinginkan ; ");
	scanf("%i",&pil);
		if(pil==1){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.120.000\n");
			printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
	scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		} 
		else if (keluar==1){
			goto kembali;
		}
		} else if (pil== 2){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.5.500.000\n");
			printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==3){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.35.000\n");
			printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}}
		else if (pil==4){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.75.000\n");
			printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==5){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.11.750.000\n");
			printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==6){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.175.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==7){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.55.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==8){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.275.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==9){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.15.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==10){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.5.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==11){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.375.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==12){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.1.750.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==13){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.1.250.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==14){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.135.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==15){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.40.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==16){
			printf("Terima Kasih atas pembeliannya\n\t Total Harga : Rp.300.000\n");
		printf("Apakah anda yakin ingin berbelanjan kembali? (1.Ya/2.Tidak) = ");
			scanf("%i",&keluar);
		if(keluar==2){
			printf("\tAnda Telah Keluar \n\tTerima Kasih Telah Berbelanja",&keluar);
		exit(0);	
		}else if (keluar==1){
			goto kembali;
		}
		}
		else if (pil==17){
			goto kembali;
		}
		else {
			printf("Pilihan tidak ada");
		}
		break;
		case 2:
	printf("Apakah anda yakin ingin keluar? (1.keluar/2.kembali) = ");
	scanf("%i",&keluar);
		if(keluar==1){
			printf("Anda Telah Keluar",&keluar);
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

	return 0;	
}
