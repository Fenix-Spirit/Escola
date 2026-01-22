#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int chave[10];
vector<int> n_res;
struct{
	int numero;
	int respostas[10];
}aluno;
void ex_1(){
	cout<<"Chave das respostas:";
	for (int i=0;i<10;i++){
		cin>>chave[i];
	}
}
void ex_2(){
	string linha;
	cout<<"Numero do aluno: ";
	cin>>aluno.numero;
	bool found=true;
	while (found==true){
		found=false;
		ifstream file_r("respostas.txt");
		while (getline(file_r,linha)){
			if (linha.substr(0,linha.find(" "))==to_string(aluno.numero)){
				found=true;
			}
		}
		if (found==true){
			cout<<"Numero ja existe. escolha outro."<<endl;
			cout<<"Numero do aluno:";
			cin>>aluno.numero;
		}
	}
	cout<<"Respostas: ";
	for (int i=0;i<10;i++){
		cin>>aluno.respostas[i];
	}
	fstream file("respostas.txt",fstream::app);
	file<<aluno.numero<<" ";
	for (int i=0;i<10;i++){
		file<<aluno.respostas[i];
	}
	file<<endl;
	file.close();
}
void ex_3(){
	int max=-9999;
	string linha;
	vector<string> max_id;
	ifstream file_r("respostas.txt");
	int cont=0;
	while (getline(file_r,linha)){
		n_res.push_back(0);
		for (int i=0;i<10;i++){
			if (linha.substr(linha.find(" ")+i+1,1)==to_string(chave[i])){
				n_res[cont]++;
			}
		}
		if (n_res[cont]>max){
			max=n_res[cont];
			max_id.clear();
			max_id.push_back(linha.substr(0, linha.find(" ")));
		}
		else if (n_res[cont]==max){
			max_id.push_back(linha.substr(0, linha.find(" ")));
		}
		cout<<"O aluno "<<linha.substr(0,linha.find(" "))<<"acertou "<<n_res[cont]<<" respostas."<<endl;
		cont++;
	}
	cout<<"O(s) aluno(s) que acertou mais respostas foi:";
	for (int i=0;i<max_id.size();i++){
		cout<<" "<<max_id[i];
	}
	cout<<endl;
	file_r.close();
}
void ex_4(){
	ifstream file_r("respostas.txt");
	string linha;
	int cont=0;
	cout<<"Os alunos que acertaram mais de 5 respostas foram:"<<endl;
	while (getline(file_r,linha)){
		if (n_res[cont]>=5){
			cout<<linha.substr(0,linha.find(" "))<<endl;
		}
		cont++;
	}
	file_r.close();
}
void ex_5(){
	ifstream file_r("respostas.txt");
	string linha;
	while (getline(file_r,linha)){
		cout<<linha<<endl;
	}
	file_r.close();
}

int main(){
	int op=-1;
	while(op!=0){
		cout<<"MENU"<<endl<<"1."<<endl<<"2."<<endl<<"3."<<endl<<"4."<<endl<<"5."<<endl<<"0. FIM"<<endl;
		cin>>op;
		switch (op){
		case 1:
			ex_1();
			break;
		case 2:
			ex_2();
			break;
		case 3:
			ex_3();
			break;
		case 4:
			ex_4();
			break;
		case 5:
			ex_5();
			break;
		default:break;
		}
	}
	return 0;
}