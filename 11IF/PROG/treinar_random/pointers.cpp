#include <iostream>
using namespace std;

void sla(int &a){
	a++;
}

int main(){
	int n=-1;
	int soma=0;
	while (n!=0){
		cout<<"N=";
		cin>>n;
		switch (n){
			case 1:
				sla(soma);
				cout<<soma<<endl;
				break;
			case 2:
				cout<<"2"<<endl;
				break;
			default:break;
		}
	}
	return 0;
}