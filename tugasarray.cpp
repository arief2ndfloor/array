#include <iostream>
using namespace std;


int main(){
	char nilai[10];
	int i, hasil = 0;
	
	//input
	for (int i=0; i< 10; i++) {
		cout << "Masukan Nama Karakter : ";
		cin >> nilai[i];
		
		
		
		if (nilai[i] == 'a' || nilai[i] == 'A'){
			hasil++;
		}
	}
	
	//output
	cout << "Hasil Semua Elemen Array : ";
	for (int i=0; i< 10; i++){
		cout << nilai [i];
		
	}
	
	cout << endl << "Jumlah Karakter Array (a/A) : " << hasil;
}
