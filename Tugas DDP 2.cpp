#include <iostream>
using namespace std;

int main(){
	long detik,totaldetik;
	int jam,menit,hari;
	
	cout<<"Masukkan Angka >1 (dalam satuan detik) : ";
	cin>>detik;
	
	hari=detik/86400;
	jam=(detik%86400)/3400;
	menit=(detik%3600)/60;
	totaldetik=(detik%60);
	
	cout<<endl;
	cout<<"hasil konversi :";
	cout<<detik<<" "<<"Detik"<<" "<<"="<<" "<<hari<<" "<<"Hari"<<" "<<jam<<" "<<"Jam"<<" "<<menit<<" "<<"Menit"<<" "<<totaldetik<<" "<<"Detik"<<endl;
	
	return 0;
}
