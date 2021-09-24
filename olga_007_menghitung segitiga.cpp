#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	// deklarasi variabel 
	int tinggi, alas, sisi_miring, keliling;
	
	// input alas dan tinggi segitiga
	cout<< "masukkan tinggi : ";
	cin>> tinggi;
	cout<< "masukkan alas : ";
	cin>> alas;
	
	// logika program
	sisi_miring = sqrt(alas*alas*tinggi*tinggi) <<endl;
	keliling = tinggi + alas + sisi_miring <<endl;
	
	
	return 0;
}
