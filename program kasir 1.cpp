#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	//Deklarasi variabel
int jum_beli,bayar,jumlah[20],harga[20],sub_total[20];
string nama_barang[20];
float total;

	cout<<"--------------------"<<endl;
	cout<<"Program Kasir"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Masukan jumlah beli : ";
	cin>>jum_beli;//user memasukan jumlah
	
		for(int i=0;i<jum_beli;i++){
			cout<<endl;
			cout<<"Masukan barang ke-"<<i+1<<endl;
			cout<<endl;
			
			cout<<"Nama barang : ";
			cin>>nama_barang[i];
			
			cout<<"Jumlah : ";
			cin>>jumlah[i];
			
			cout<<"Harga : ";
			cin>>harga[i];
			
			sub_total[i]=jumlah[i]*harga[i];
			total+=sub_total[i];
			
		}
		
		cout<<endl;
		cout<<"------------------------------------------------------"<<endl;
		cout<<"STRUK BELANJA"<<endl;
		cout<<"------------------------------------------------------"<<endl;
		cout<<"No   Barang   Jumlah    Harga    Sub Total"<<endl;
		for (int i=0;i<jum_beli;i++){
			cout<<i+1<<setw(9)<<nama_barang[i]<<setw(8)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_total[i]<<endl;
		}
		cout<<"------------------------------------------------------"<<endl;
		
		cout<<"Jumlah bayar : Rp."<<total<<endl;
		cout<<"Total bayar  : Rp."<<total<<endl;
		cout<<"Bayar        : Rp.";
		cin>>bayar;
		cout<<"Kembalian    : Rp."<<bayar-total<<endl;
		
		return 0;
}
