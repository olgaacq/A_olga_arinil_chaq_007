#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int harga_awal, jumlah_cicilan, total_pengeluaran, bunga, keuntungan, harga_motor, jangka_waktu;
	
	cout<< "\t Program Menghitung Kredit Motor" <<endl;
	
	cout<< "masukkan Harga Motor = Rp. "; cin>>harga_motor;
	cout<< "masukkan Lama Kredit (bulan) = "; cin>>jangka_waktu;
	cout<<endl;
	cout<< "\nRincian Biaya dan Keuntungan" <<endl;
	cout<< "================================" <<endl;
	
	harga_awal = harga_motor/jangka_waktu;
	bunga = harga_awal*0.1;
	jumlah_cicilan = harga_awal+bunga;
	total_pengeluaran = jumlah_cicilan*jangka_waktu;
	keuntungan = total_pengeluaran-harga_motor;
	
	cout<< "Bunga = Rp. "<<bunga;
	cout<<endl;
	cout<< "Cicilan = Rp. "<<jumlah_cicilan;
	cout<<endl;
	cout<< "Total Harga = Rp. "<<total_pengeluaran;
	cout<<endl;
	cout<< "Keuntungan Diler = Rp. "<<keuntungan;
	cout<<endl;
		
	return 0; 
}
