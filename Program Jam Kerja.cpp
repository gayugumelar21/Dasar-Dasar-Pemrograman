#include <iostream>
using namespace std;

int main (){
	//	inisialisasi variable
	int jm_masuk, jm_pulang, lama_kerja;
	string pesan;

	cout<<""<<endl;
	cout<<"                   PROGRAM JAM KERJA "<<endl;
	cout<<"                17312081 - GAYU GUMELAR "<<endl;
	
	//	deskripsi soal
	cout<<"=================================================================="<<endl;
	cout<<""<<endl;
	cout<<"*Catatan : Seorang Pegawai Bekerja Kurang dari 12 Jam"<<endl;
	cout<<"=================================================================="<<endl;
	cout<<""<<endl;
	
	//	input data
	cout<<"Input Jam Masuk = ";
	cin >> jm_masuk;
	cout<<"Input Jam Pulang = ";
	cin >>jm_pulang;
	
	//	proses waktu kerja
	lama_kerja = jm_pulang-jm_masuk;	
	
	if(lama_kerja>=12){
		pesan = "Pegawai Bekerja Lebih Dari 12 Jam";
	} 
	
	//	output data
	cout<<"=================================================================="<<endl;
	cout<<"Lama Bekerja "<<lama_kerja<<" Jam"<<endl;
	cout<<""<<pesan;
}
