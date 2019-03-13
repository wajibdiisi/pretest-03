/*
Nama : Ahmad Irfan Fadholi
NPM : 140810180034
Tgl : 13 Maret 2019
Deskripsi : Sorting Struct berdasarkan nama */
#include <string.h>
#include <iostream>

using namespace std;

struct r_mhs {
	char npm[14];
	char nama[40];
	float ipk;
	
};

typedef r_mhs larikMhs[30];

void banyakData (int & n){
	cout<<"Banyak data : ";
	cin>>n;
}
void inputMhs(larikMhs& mhs, int n){

	cout<<"Masukkan data mahasiswa \n";
	for (int i=0;i<n;i++){
		cout<<"Masukkan Nama Mahasiswa : ";cin>>mhs[i].nama;
		cout<<"Masukkan NPM Mahasiswa : ";cin>>mhs[i].npm;
		cout<<"Masukkan IPK Mahasiswa : ";cin>>mhs[i].ipk;
	}
}
void sortingNama(larikMhs& mhs,int n){
	int i,j;
	larikMhs temp;
	int selisih[100];
	for (i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			selisih[i]=strcmp(mhs[j].nama,mhs[j+1].nama);
			if(selisih[i]>0){
		 		swap(mhs[j],mhs[j+1]);
				}
			}
		}
	}

void cetakMhs(larikMhs mhs,int n){
	cout<<"\t\t\t\t Daftar Mahasiswa\n";
	cout<<"===================================================================\n";
	cout<<"No\tNPM\t\t\tNama\t\t\t\tIPK\n";
	cout<<"-------------------------------------------------------------------\n";
	for (int i=0;i<n;i++){
	cout<<i+1<<"\t"<<mhs[i].npm<<"\t\t\t"<<mhs[i].nama<<"\t\t\t\t"<<mhs[i].ipk<<endl;
	}
	cout<<"====================================================================\n";
}



int main (){
	larikMhs mhs;
	int n;
	banyakData(n);
	inputMhs(mhs,n);
	sortingNama(mhs,n);
	cetakMhs(mhs,n);


}
