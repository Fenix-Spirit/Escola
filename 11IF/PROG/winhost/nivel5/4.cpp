#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	string n_use[]={"de","dos","da","das","do"};
	getline(cin,s);
	for(string i : n_use){
		if (s.find(i)!=string::npos){
			s.erase(s.find(i),i.size()+1);
		}
	}
	for (int i=s.size();i>0;i--){
		if (s[i-1]==' '){
			int count=0;
			for (int j=i;j<s.size();j++){
				cout<<s[j];
				count++;
			}
			cout<<", ";
			s.erase(i-1,count+1);
			break;
		}
	}
	for (int i=0;i<s.size();i++){
		if (s[i]!=' '){
			cout<<s[i];
		}
		else{
			cout<<" "<<s[i+1]<<".";
			while (s[i+1]!=' '){
				s.erase(i,1);
				if (i==s.size()){
					break;
				}
			}
		}
	}
	return 0;
}