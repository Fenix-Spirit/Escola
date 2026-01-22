#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct{
	int num;
	string nome_banda;
	int dia;
	int mes;
	int ano;
	float preco;
}concerto;

void ex_1(){
	cout<<"Nome da banda: ";
	cin>>concerto.nome_banda;
	cout<<"Dia: ";
	cin>>concerto.dia;
	cout<<"Mes: ";
	cin>>concerto.mes;
	cout<<"Ano: ";
	cin>>concerto.ano;
	cout<<"Preco: ";
	cin>>concerto.preco;
	ifstream file_r("concertos.txt");
	string linha;
	int cont=0;
	while (getline(file_r,linha)){
		cont++;
	}
	concerto.num=cont+1;
	file_r.close();
	fstream file("concertos.txt",fstream::app);
	file<<concerto.num<<concerto.nome_banda<<" "<<concerto.dia<<" "<<concerto.mes<<" "<<concerto.ano<<" "<<concerto.preco<<endl;
	file.close();

}
void ex_2(){
	string linha;
	int cont=0;
	ifstream file_r("concertos.txt");
	if (file_r.is_open()){
		while (getline(file_r,linha)){
			cont++;
		}
		file_r.close();
		if (cont==0){
			cout<<"Ficheiro vazio."<<endl;
			return;
		}ifstream file_r("concertos.txt");
		while (getline(file_r,linha)){
			cout<<linha<<endl;
		}
		file_r.close();
	}
	else{
		cout<<"Ficheiro nao existe."<<endl;
	}
}
void ex_3(){
	cout<<"Dia: ";
	cin>>concerto.dia;
	cout<<"Mes: ";
	cin>>concerto.mes;
	cout<<"Ano: ";
	cin>>concerto.ano;
	ifstream file_r("concertos.txt");
	string linha;
	int cont=0;
	vector<int> pos_space;
	while (getline(file_r,linha)){
		bool found=false;
		pos_space.clear();
		for (int i=0;i<linha.size();i++){
			if (linha[i]==' '){
				cont++;
				pos_space.push_back(i);
			}
			if (cont==1){
				if (concerto.dia!=stoi(linha.substr(pos_space[0]+1,pos_space[1]-pos_space[0]-1))){
					break;
				}
				found=true;
			}
			else if (cont==2){
				if (concerto.dia!=stoi(linha.substr(pos_space[1]+1,pos_space[2]-pos_space[1]-1))){
					break;
				}
				found=true;
			}
			else if (cont==3){
				if (concerto.dia!=stoi(linha.substr(pos_space[2]+1,pos_space[3]-pos_space[1]-1))){
					break;
				}
				found=true;
			}
		}
		if (found){
			cout<<linha<<endl;
		}
	}
}
void ex_4(){
	vector<float> precos;
	ifstream file_r("concertos.txt");
	string linha;
	while (getline(file_r,linha)){
		precos.push_back(stof(linha.substr(linha.rfind(" ")+1,linha.size())));
	}
	float soma=0;
	for (float i : precos){
		soma+=i;
	}
	cout<<soma/precos.size();
}
void ex_5(){
	
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