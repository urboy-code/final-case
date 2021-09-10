#include <iostream>
#include<conio.h>

using namespace std;

int main(){
	int a,b;
	cout<<"Masukan Bilangan A : ";
	cin>>a;
	cout<<"Masukan Bilangan B : ";
	cin>>b;
	
	float jumlah,kurang,kali,bagi;
	jumlah = a+b;
	kurang = a-b;
	kali = a*b;
	bagi = float(a)/b;
	
	cout<<a<<" + "<<b<<" = "<<jumlah<<endl;
	cout<<a<<" - "<<b<<" = "<<kurang<<endl;
	cout<<a<<" * "<<b<<" = "<<kali<<endl;
	cout<<a<<" / "<<b<<" = "<<bagi<<endl;
}
