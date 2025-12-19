#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	char abc[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(char c : s){
		for (int i=0;i<26;i++){
			if (c==abc[i]){
				cout<<abc[(i+4)%26];
			}
		}
	}
}