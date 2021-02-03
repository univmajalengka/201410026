#include <iostream>
using namespace std;
int main()
{
	//deklarasi
	int jumlah_belanja, jumlah_bayar, diskon;
	cout<<"Program Menghitung Diskon"<<endl;
	cout<<"jumlah_belanja : ";
	cin>>jumlah_belanja;
	
	//jumlah_belanja 0 - 25000 = 0% diskon
	if ((jumlah_belanja>=0) && (jumlah_belanja<25000)){
		diskon=jumlah_belanja*0.0;
		jumlah_bayar=jumlah_belanja-diskon;
		cout<<endl<<"Diskon 0%"<<endl;
	}
	
	//jumlah_belanja 25000 - 50000 = 10% diskon
	else if ((jumlah_belanja>=25000) && (jumlah_belanja<50000)){
		diskon=jumlah_belanja*0.10;
		jumlah_bayar=jumlah_belanja-diskon;
		cout<<endl<<"Diskon 10%"<<endl;
	}
	
	//jumlah_belanja 50000 - 100000 = 12.5% diskon
	else if ((jumlah_belanja>=50000) && (jumlah_belanja<100000)){
		diskon=jumlah_belanja*0.125;
		jumlah_bayar=jumlah_belanja-diskon;
		cout<<endl<<"Diskon 12,5%"<<endl;
	}
	
	//jumlah_belanja lebih dari 100000 = 15% diskon
	else if (jumlah_belanja>=100000){
		diskon=jumlah_belanja*0.15;
		jumlah_bayar=jumlah_belanja-diskon;
		cout<<endl<<"Diskon 15%"<<endl;
	}
	cout<<endl<<"Jumlah yang harus dibayar = Rp. "<<jumlah_bayar<<endl;
	return 0;
}
