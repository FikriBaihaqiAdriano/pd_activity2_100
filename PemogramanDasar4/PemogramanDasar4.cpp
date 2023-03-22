#include <iostream>
using namespace std;

float Luaspersegipanjang(float p, float l) {
	return p * l;
}

float Luassegitiga(float a, float t) {
	return 0.5 * a * t;
}

float Luaslingkaran(float r) {
	return 3.14 * r * r;
}


int main() {

	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;


	cout << "____________________" << endl;
	cout << "______M E N U_______" << endl;
	cout << "____________________" << endl;

	cout << "1. Luas Persegipanjang" << endl;
	cout << "2. Luas Segitiga" << endl;
	cout << "3. Luas Lingkaran" << endl;
	cout << "4. Exit" << endl;

	cout << "Masukan pilihan : ";
	cin >> pilihan;


	system("cls");

	do
	{


		switch (pilihan)
		{
		case 1:
			cout << "Masukkan panjang : ";
			cin >> panjang;
			cout << "Masukkan lebar :";
			cin >> lebar;
			cout << "Luas persegipanjang = " << Luaspersegipanjang(panjang, lebar);
			break;

		case 2:
			cout << "Masukkan alas : ";
			cin >> alas;
			cout << "Masukkan tinggi : ";
			cin >> tinggi;
			cout << "Luas Segitiga + " << Luassegitiga(alas, tinggi);
			break;

		case 3:
			cout << "Masukkan Jari-jari : ";
			cin >> jejari;
			cout << "Luas Lingkaran = " << Luaslingkaran(jejari);
			break;

		case 4:

			break;
		default:
			cout << "Pilihan anda salah!";
			break;	
		}
	} while (pilihan != 4);
}
