#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void ex1(){
	string s;
	cin>>s;
	cout<<s.size()<<endl;
}
void ex2(){
	string s;
	cin>>s;
	if (s.empty()){
		cout<<"Vazio"<<endl;
	}
	else{
		cout<<"tem conteudo"<<endl;
	}
}
void ex3(){
	string s;
	cin>>s;
	cout<<s.front()<<endl;
	cout<<s.back()<<endl;
}
void ex4(){
	string s;
	cin>>s;
	cout<<s.substr(0,3)<<endl;
}
void ex5(){
	string s;
	cin>>s;
	if (s.find("c++")){
		cout<<s.find("c++")<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
}
void ex6(){
	string s;
	cin>>s;
	s.append("!!!");
	cout<<s<<endl;
}
void ex7(){
	string s;
	cin>>s;
	s.insert(2,"MARIA");
	cout<<s<<endl;
}
void ex8(){
	string s;
	cin>>s;
	s.erase(1,3);
	cout<<s<<endl;
}
void ex9(){
	string s;
	cin>>s;
	s.replace(0,2,"OI");
	cout<<s<<endl;
}
void ex10(){
	string s;
	cin>>s;
	printf("%s\n",s.c_str());
}
int main(){
	int option=-1;
	while (option!=0){
		cout<<"MENU"<<endl<<"1."<<endl<<"2."<<endl<<"3."<<endl<<"4. "<<endl<<"5."<<endl<<"6."<<endl<<"7."<<endl<<"8."<<endl<<"9."<<endl<<"10."<<endl<<"0. FIM"<<endl;
		cin>>option;
		switch(option){
			case 1:
				ex1();
				break;
			case 2:
				ex2();
				break;
			case 3:
				ex3();
				break;
			case 4:
				ex4();
				break;
			case 5:
				ex5();
				break;
			case 6:
				ex6();
				break;
			case 7:
				ex7();
				break;
			case 8:
				ex8();
				break;
			case 9:
			ex9();
				break;
			case 10:
				ex10();
				break;
			default:break;
		}
	}
	return 0;
}