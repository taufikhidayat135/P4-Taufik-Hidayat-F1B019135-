#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int data_1(){
	int kode;
	int k[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int stok[16]={5,2,15,6,1,4,11,3,21,13,7,1,1,25,50,6};
	int pilharga[]={120000,5500000,35000,75000,11750000,175000,55000,275000,15000,5000,375000,1750000,1250000,135000,40000,300000,};
	cout<<"++++++Macam Macam Barang+++++\n";
	cout<<"**************************************************\n";
	cout<<"No\t Barang\t \tHarga\t \tStok\n";
	cout<<"**************************************************\n";
	cout<<"1.\t Kacamata\tRp."<<pilharga[0];
	cout<<"\t"<<stok[0];
	cout<<"\n2.\t Laptop\t\tRp."<<pilharga[1];
	cout<<"\t"<<stok[1];
	cout<<"\n3.\t Parfum\t \tRp."<<pilharga[2];
	cout<<"\t"<<stok[2];
	cout<<"\n4.\t Dompet\t \tRp."<<pilharga[3];
	cout<<"\t"<<stok[3];
	cout<<"\n5.\t Tv\t \tRp."<<pilharga[4];
	cout<<"\t"<<stok[4];
	cout<<"\n6.\t Nokia senter\tRp."<<pilharga[5];
	cout<<"\t"<<stok[5];
	cout<<"\n7.\t Asbak Rokok\tRp."<<pilharga[6];
	cout<<"\t"<<stok[6];
	cout<<"\n8.\t Kipas Angin\t Rp."<<pilharga[7];
	cout<<"\t"<<stok[7];
	cout<<"\n9.\t Sisir\t \tRp."<<pilharga[8];
	cout<<"\t"<<stok[8];
	cout<<"\n10.\t Gunting Kuku\t Rp."<<pilharga[9];
	cout<<"\t"<<stok[9];
	cout<<"\n11.\t Flashdisk\tRp."<<pilharga[10];
	cout<<"\t"<<stok[10];
	cout<<"\n12.\t Meja\t \tRp."<<pilharga[11];
	cout<<"\t"<<stok[11];
	cout<<"\n13.\t Kasur\t \tRp."<<pilharga[12];
	cout<<"\t"<<stok[12];
	cout<<"\n14.\t Charger Hp\tRp."<<pilharga[13];
	cout<<"\t"<<stok[13];
	cout<<"\n15.\t Kaos Kaki\t Rp."<<pilharga[14];
	cout<<"\t"<<stok[14];
	cout<<"\n16.\t Tas\t \tRp."<<pilharga[15];
	cout<<"\t"<<stok[15];
}
int main() {
kembali:
	system("cls");
	int nilai; 
    int produk ;
    int pil;
    char mau='y';
    int E, hasil=0;
    int keluar;
    int kode , harga , i=1 , total_pembelian=0, total;
    int k[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    	cout<<"======>PEMBELIAN BARANG<======\n";
    	cout<<"\n";
 	cout<<"1. List Barang\n";
	cout<<"2. Exit";
	cout<<"\n";
	cout<<"Silahkan pilih menu : ";
	cin>>produk;

	switch(produk){
	case 1:
	data_1();	
	while (mau=='y'){
			cout<<"   \nSilahkan pilih barang yang diinginkan ; ";
	cin>>kode;
	fflush (stdin);
		if(kode==1){	cout<<"barang  yang anda beli adalah : Kacamata\n";
	harga= 120000;
	cout<<"Harga =  "<< harga;	
		} else if (kode== 2){
			cout<<"barang  yang anda beli adalah : Laptop\n";
	harga= 5500000;
	cout<<"Harga =  "<< harga;
		}else if (kode==3){
			cout<<"barang  yang anda beli adalah : Parfum\n";
	harga= 35000;
	cout<<"Harga =  "<< harga;}
		else if (kode==4){
			cout<<"barang  yang anda beli adalah : Dompet\n";
	harga= 75000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==5){
		cout<<"barang  yang anda beli adalah : Tv\n";
	harga= 11750000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==6){
		cout<<"barang  yang anda beli adalah : Nokia Senter\n";
	harga= 175000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==7){
		cout<<"barang  yang anda beli adalah : Asbak Rokok\n";
	harga= 55000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==8){
		cout<<"barang  yang anda beli adalah : Kipas Angin\n";
	harga= 275000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==9){
		cout<<"barang  yang anda beli adalah : Sisir\n";
	harga= 15000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==10){
		cout<<"barang  yang anda beli adalah : Gunting Kuku\n";
	harga= 5000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==11){
		cout<<"barang  yang anda beli adalah : Flashdisk\n";
	harga= 375000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==12){
		cout<<"barang  yang anda beli adalah : Meja\n";
	harga= 1750000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==13){
		cout<<"barang  yang anda beli adalah : Kasur\n";
	harga= 1250000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==14){
			cout<<"barang  yang anda beli adalah : Charger Hp\n";
	harga= 135000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==15){
		cout<<"barang  yang anda beli adalah : Kaos Kaki\n";
	harga= 40000;
	cout<<"Harga =  "<< harga;
		}
		else if (kode==16){
		cout<<"barang  yang anda beli adalah : Tas\n";
	harga= 300000;
	cout<<"Harga =  "<< harga;
		}else {
			cout<<"Pilihan tidak ada";
		}
	total_pembelian=total_pembelian+harga;
	cout<<"\nApakah ingin berbelanja kembali? [y/t]:";
	cin>>mau;
	i++;
	}

		case 2:
	cout<<"\nApakah anda yakin ingin keluar? (1.keluar/2.kembali) = ";
	cin>>keluar;
		if(keluar==1){
			cout<<"\nTotal Belanja = "<<total_pembelian;
			cout<<"\nTerima Kasih telah berbelanja";
		exit(0);	
		} 
		else if (keluar==2){
			goto kembali;
		}
		else {
			cout<<"Pilihan tidak ada";
		}	
	exit(0);	
	break;
	
	default:
	cout<<"Tidak ada pilihan";
	}
cout<<"Total Belanja = "<<total_pembelian;
	return 0;	
}
