#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int maiusculas=0;
	int minusculas=0;
	for (char j : s){
		if (j<=90 and j>=65){
			maiusculas++;
		}
		else if (j<=122 and j>=97){
			minusculas++;
		}
	}
	cout<<"MAIUSCULAS: "<<maiusculas<<endl;
	cout<<"MINUSCULAS: "<<minusculas;
}