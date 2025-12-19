#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string n_s="";
	for (char j : s){
		if (count(n_s.begin(),n_s.end(),j)==0){
			n_s+=j;
		}
	}
	cout<<n_s;
}