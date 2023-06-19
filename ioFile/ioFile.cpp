#include <fstream>
#include <iostream>
using namespace std;

int main() {
	string baris;

	// membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam stu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//Membuka file dalam mode membaca
	ifstream infile;
	//menunjukkan ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">-Membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{ 
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan di sini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		infile.close();
	



















rauda;