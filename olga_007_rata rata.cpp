#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	int praktikum, teori, tugas, final_project
	
	cout<<"\tRata-rata Nilai Matkul Pemrograman Terstruktur"<<endl;
	
	cout<< "nilai praktikum = ";
	cin>>praktikum;
	cout<< "nilai teori = ";
	cin>>teori;
	cout<< "nilai tugas = ";
	cin>>tugas;
	cout<< "nilai final project = ";
	cin>>final_project;
	
	rata_rata = (praktikum*40/100 + teori*40/100 + tugas*10/100 + final_project*10/100) / 4;
	
	cout<< "Rata-rata Nilai = " <<rata_rata;
	
	cout<<endl;
	
	
	
	return 0;
}

