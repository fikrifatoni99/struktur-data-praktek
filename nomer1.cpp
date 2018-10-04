#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int x,y;
	float rata,ta;

	cout<<"Masukan jumlah angka yang akan dirata-rata kan = ";cin>>y;
	int a[y];

	for(x=0;x<y;x++){
		cout<<"Masukkan angka indeks ke-"<<1+x<<" = ";cin>>a[y];
		ta=ta+a[y];
	}
	cout<<endl;
	rata=ta/y;
	cout<<"Rata-rata dari angka-angka diatas = "<<rata;

	getch();
	return 0;
}



