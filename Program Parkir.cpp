#include <iostream>
using namespace std;

int main (){
	//	inisialisasi variable
	int harga, tambahan, jm_masuk, jm_berikutnya, total_biaya_parkir;

	cout<<""<<endl;
	cout<<"                PROGRAM PARKIR KENDARAAN "<<endl;
	cout<<"                17312081 - GAYU GUMELAR "<<endl;
	
	//	deskripsi biaya
	cout<<"=================================================================="<<endl;
	cout<<"Biaya parkir 2 Jam pertama = Rp. 2000"<<endl;
	cout<<"Jam berikutnya + Rp. 500"<<endl;
	cout<<"=================================================================="<<endl;
	cout<<""<<endl;
	
	//	input data
	cout<<"Input Jam Masuk = ";
	cin >> jm_masuk;
	cout<<"Input Lama Parkir (Per Jam) = ";
	cin >>jm_berikutnya;
	
	//	proses biaya parkir
	harga = 2000;
	tambahan= 500;
	
	if(jm_berikutnya>2){
		total_biaya_parkir = tambahan*(jm_berikutnya-2);
	} else{
		jm_berikutnya = 0;
	}
	
	//	output data
	cout<<"=================================================================="<<endl;
	cout<<"2 Jam Pertama = Rp. "<<harga<<endl;
	cout<<"Jam Berikutnya = Rp. "<<total_biaya_parkir<<endl;
	cout<<"Total Bayar = Rp."<<harga+total_biaya_parkir;

}
