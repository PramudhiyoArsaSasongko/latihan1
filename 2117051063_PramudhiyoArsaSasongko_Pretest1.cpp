#include <iostream>
using namespace std;

int main(){
	/* Nama : Pramudhiyo Arsa Sasongko
	   Npm  : 2117051063
	   Kelas: B, ILKOM21*/
	
	//string//   
	string nama;
	string alamat;
	string email;
	string nomor;
	
	//input//
	getline(cin,nama);
	getline(cin,alamat);
	cin>>email;
	cin>>nomor;
	
	//output//
	cout<<endl;
	cout<<"Nama Pelanggan  :"<<nama<<endl;
	cout<<"Alamat Rumah    :"<<alamat<<endl;
	cout<<"Email Pelanggan :"<<email<<endl;
	cout<<"Nomor Telepon   :"<<nomor<<endl;
	
	return 0;
} 
