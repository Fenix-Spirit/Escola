#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		switch (s[i]){
			case ' ':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				s.erase(i,1);
			i--;
				break;
			default:break;
		}
	}
	cout<<s;
}