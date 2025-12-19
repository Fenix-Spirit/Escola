#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	char c;
	int count=0;
	getline(cin,s);
	cin>>c;
	for (char j : s){
		if (j==c){
			count++;
		}
	}
	cout<<count;
}