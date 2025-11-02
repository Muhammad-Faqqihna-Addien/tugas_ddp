#include <iostream>
using namespace std;

int main(){
	long detik,totdetik;
	int jam,menit;
	
	cout<<"Masukkan Angka >1 (dalam satuan detik) : ";
	cin>>detik;
	
	jam=(detik%86400)/3400;
	menit=(detik%3600)/60;
	totdetik=(detik%60);
	
	cout<<endl;
	cout<<"hasil konversi :";
	cout<<detik<<" "<<"detik"<<" "<<"="<<" "<<jam<<" "<<"jam"<<" "<<menit<<" "<<"menit"<<" "<<totdetik<<" "<<"detik"<<endl;
	
	return 0;
}
