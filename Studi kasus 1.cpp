#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nama, jenis;
	float jumlah, harga, total;
	int bensin;
	
	cout<<"======SELAMAT DATANG DI POM SINAR JAYA====\n"<<endl;
	cout<<"Masukan nama anda : ";cin>>nama;
	cout<<"----------------------------------------------\n";
	cout<<"Kami menyediakan 2 jenis bensin :"<<endl;
	cout<<"1. Pertalite = 7000/liter "<<endl;
	cout<<"2. Pertamax  = 9000/liter "<<endl;
	cout<<"Silahkan masukan jenis pilihan bensin anda : ";cin>>bensin;
	cout<<"----------------------------------------------\n";
	if (bensin==1){
		jenis = "Pertalite";
		harga = 7000;
		cout<<"--PERTALITE--"<<endl;
		cout<<"Masukan jumlah liter yang dibutuhkan(satuan): ";cin>>jumlah;
		total=jumlah*harga;
		cout<<endl;
	}
	else if (bensin==2){
		jenis = "Pertamax";
		harga = 9000;
		cout<<"--PERTAMAX--"<<endl;
		cout<<"Masukan jumlah liter yang dibutuhkan(satuan): ";cin>>jumlah;
		total=jumlah*harga;
		cout<<endl;
	}
	else{
		cout<< "Pilihan anda tidak tersedia "<<endl;
	}
	cout<<"Nama pelanggan	: "<<nama<<endl;
	cout<<"Jenis bensin	: "<<jenis<<endl;
	cout<<"Harga/liter	: "<<harga<<endl;
	cout<<"Total liter	: "<<jumlah<<endl;
	cout<<"Total harga	: "<<total<<endl;
	
	ofstream struk;
	struk.open("Struk_Bensin.txt");
	cout<<"\nMencetak struk....."<<endl;
	struk<<"		    STRUK"<<endl;
	struk<<"		-------------"<<endl;
	struk<<"Nama pelanggan	: "<<nama<<endl;
	struk<<"Jenis bensin	: "<<jenis<<endl;
	struk<<"Harga/liter	: "<<harga<<endl;
	struk<<"Total liter	: "<<jumlah<<endl;
	struk<<"---------------------------------------------"<<endl;
	struk<<"Total harga	: "<<total<<endl;
	struk<<"\n\t ------Terima kasih-------";	
	struk.close();
	
	return 0;
}
