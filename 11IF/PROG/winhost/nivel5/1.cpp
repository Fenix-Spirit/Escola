#include <iostream>
using namespace std;

int main(){
	string s;
	int a=0;
	int e=0;
	int i=0;
	int o=0;
	int u=0;
	getline(cin,s);
	for(char j : s){
		if(j=='a' or j=='A'){
			a++;
		}
		else if (j=='e' or j=='E'){
			e++;
		}
		else if (j=='i' or j=='I'){
			i++;
		}
		else if (j=='o' or j=='O'){
			o++;
		}
		else if (j=='u' or j=='U'){
			u++;
		}
	}
	cout<<a<<" "<<e<<" "<<i<<" "<<o<<" "<<u;
}