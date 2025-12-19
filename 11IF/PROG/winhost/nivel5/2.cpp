#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(char j : s){
		switch (j){
			case 'a':
				s.replace(s.find(j),1,"A");
				break;
			case 'e':
				s.replace(s.find(j),1,"E");
				break;
			case 'i':
				s.replace(s.find(j),1,"I");
				break;
			case 'o':
				s.replace(s.find(j),1,"O");
				break;
			case 'u':
				s.replace(s.find(j),1,"U");
				break;
			default:break;
		}
	}
	cout<<s;
}