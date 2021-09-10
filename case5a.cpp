#include <iostream>

using namespace std;

int main(){
	float ipk;
	cout<<"Masukan IPK Mawar ";cin>>ipk;
	
	if (ipk >= 3.50){
		cout<<"IPK mawar adalah "<<ipk<<" Maka Predikat Mawar adalah Cumlaude"<<endl;
	}
	else if((ipk <= 3.49) and (ipk >=3.01)){
		cout<<"IPK mawar adalah "<<ipk<<" Maka Predikat Mawar adalah Sangat Memuaskan"<<endl;
	}
	else if((ipk <= 2.00) and (ipk >=2.00)){
		cout<<"IPK mawar adalah "<<ipk<<" Maka Predikat Mawar adalah Memuaskan"<<endl;
	}
	else{
		cout<<"IPK mawar adalah "<<ipk<<" Maka Predikat Mawar adalah Cukup"<<endl;
	}
	
	return 0;
}
