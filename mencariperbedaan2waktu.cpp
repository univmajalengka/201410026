#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	//deklarasi
    int j1, m1, d1, j2, td1, m2, d2, td2, j3, m3, d3, td3, sm;
    
	//deskripsi program
	//masukan waktu awal
    cout<<"Masukan waktu awal : "<<endl;
    cout<<"Jam   = ";
    cin>>j1;
    cout<<"menit = ";
    cin>>m1;
    cout<<"detik = ";
    cin>>d1;
    cout<<endl;
    //masukan waktu akhir
    cout<<"Masukan waktu akhir : "<<endl;
    cout<<"Jam   = ";
    cin>>j2;
    cout<<"menit = ";
    cin>>m2;
    cout<<"detik = ";
    cin>>d2;
    cout<<endl;
    
    //proses konversi waktu ke td
	td1=(j1*3600)+(m1*60)+d1;
	td2=(j2*3600)+(m2*60)+d2;
	
	//operasi pengurangan
	td3=td2-td1;
	//konversi td ke j3,m3,d3
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	cout<<"perbedaan waktu : "<<j3<<":"<<m3<<":"<<d3;
   
   
return 0;
}
