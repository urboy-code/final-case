#include <iostream>

using namespace std;

int main(){
	int a = 3;
	int b = 2;
	bool c;
	cout<<"Masukan Bilangan A : "<<a<<endl;
	cout<<"Masukan Bilangan B : "<<b<<endl;
	
	c = a < b;
	cout<<"Apakah "<<a<<" < "<<b<<" ? "<<c<<endl;
	
	c = a > b;
	cout<<"Apakah "<<a<<" > "<<b<<" ? "<<c<<endl;
	
	c = a == b;
	cout<<"Apakah "<<a<<" = "<<b<<" ? "<<c<<endl;
	
	c = a != b;
	cout<<"Apakah "<<a<<" != "<<b<<" ? "<<c<<endl;
}
