#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main (void){
	//	inisialisasi variable
	int kode, harga, total;
	char jenis, *diskon;

	cout<<""<<endl;
	cout<<"                 PROGRAM HITUNG DISKON "<<endl;
	cout<<"                17312081 - GAYU GUMELAR "<<endl;
	
	//	deskripsi biaya
	cout<<"=================================================================="<<endl;
	cout<<"Jenis A : Diskon 10%"<<endl;
	cout<<"Jenis B : Diskon 15%"<<endl;
	cout<<"Jenis C : Diskon 20%"<<endl;
	cout<<"=================================================================="<<endl;
	cout<<""<<endl;
	
	//	input data
	cout<<"Masukan Kode = ";
	cin >> kode;
	cout<<"Masukan Jenis = ";
	cin >>jenis;
	cout<<"Masukan Harga = ";
	cin >>harga;
	
	
	//	proses mencari diskon	
	if(jenis == 'A' || jenis == 'a'){
		diskon = "10%";
		total = harga - (0.1*harga);
	} 
	else if(jenis == 'B' || jenis == 'b'){
		diskon = "15%";
		total = harga - (0.15*harga);
	}
	else if(jenis == 'C' || jenis == 'c'){
		diskon = "20%";
		total = harga - (0.2*harga);
	}
	
	//	output data
	cout<<"=================================================================="<<endl;
	cout<<"Jenis barang = "<<jenis;
	cout<<" mendapatkan diskon = "<<diskon;
	cout<<" , Harga setelah diskon = Rp. "<<total;

}
