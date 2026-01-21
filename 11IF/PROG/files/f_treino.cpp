#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct {
	string nome;
	int idade{};
	int numero{};
}alu;
/*void inserir(){
	fstream file("alunos.txt",fstream::app);
	cout<<"nome: ";
	cin.ignore();
	getline(cin,alu.nome);
	cout<<"idade: ";
	cin>>alu.idade;
	cout<<"numero: ";
	cin>>alu.numero;
	file<<alu.nome<<" "<<alu.idade<<" "<<alu.numero<<endl;
	file.close();
}*/
/*void inserir_v2(){
	ifstream file_r("alunos.txt");
	int cont=0;
	string linha;
	while (getline(file_r,linha)){
		cont++;
	}
	alu.numero=cont;
	file_r.close();
	fstream file("alunos.txt",fstream::app);
	cout<<"nome: ";
	cin.ignore();
	getline(cin,alu.nome);
	cout<<"idade: ";
	cin>>alu.idade;
	file<<alu.nome<<" "<<alu.idade<<" "<<alu.numero<<endl;
	file.close();
	alu.numero++;
}*/
void inserir_v3(){
	string linha;
	cout<<"nome: ";
	cin.ignore();
	getline(cin,alu.nome);
	cout<<"idade: ";
	cin>>alu.idade;
	cout<<"numero: ";
	cin>>alu.numero;
	bool found=true;
	while (found==true){
		found=false;
		ifstream file_r("alunos.txt");
		while (getline(file_r,linha)){
			if (alu.numero==stoi(linha.substr(linha.rfind(" ")+1,to_string(alu.numero).size()))){
				found=true;
				cout<<"numero ja existe. escolha outro."<<endl;
				break;
			}
		}
		file_r.close();
		if (found){
			cout<<"numero: ";
			cin>>alu.numero;
		}
	}
	fstream file("alunos.txt",fstream::app);
	file<<alu.nome<<" "<<alu.idade<<" "<<alu.numero<<endl;
	file.close();
}
void listar(){
	string linha;
	ifstream file("alunos.txt");
	while (getline(file,linha)){
		cout<<linha<<endl;
	}
	file.close();
	cout<<endl;
}
void alterar(){
	vector<string> texto;
	cout<<"numero:";
	cin>>alu.numero;
	string linha;
	int cont=0;
	int pos;
	bool found=false;
	ifstream file_r("alunos.txt");
	while (getline(file_r,linha)){
		if (alu.numero==stoi(linha.substr(linha.rfind(" ")+1,to_string(alu.numero).size()))){
			found=true;
			pos=cont;
		}
		else{
			texto.push_back(linha);
		}
		cont++;
	}
	file_r.close();
	if (found==true){
		cout<<"nome: ";
		cin.ignore();
		getline(cin,alu.nome);
		cout<<"idade: ";
		cin>>alu.idade;
		fstream file("alunos.txt",fstream::out);
		if (pos!=0){
			file<<texto[0]<<endl;
		}
		else{
			file<<alu.nome<<" "<<alu.idade<<" "<<alu.numero<<endl;
		}
		file.close();
		file.open("alunos.txt",fstream::app);
		for (int i=1;i<cont+1;i++){
			if (i==pos){
				file<<alu.nome<<" "<<alu.idade<<" "<<alu.numero<<endl;
			}
			else{
				file<<texto[i]<<endl;
			}
		}
		file.close();
	}
	else{
		cout<<"numero nao encontrado"<<endl;
	}
}
void eliminar(){
	vector<string> texto;
	cout<<"numero:";
	cin>>alu.numero;
	string linha;
	int cont=0;
	bool found=false;
	ifstream file_r("alunos.txt");
	while (getline(file_r,linha)){
		cont++;
		if (alu.numero==stoi(linha.substr(linha.rfind(" ")+1,to_string(alu.numero).size()))){
			found=true;
		}
		else{
			texto.push_back(linha);
		}
	}
	file_r.close();
	if (found==true){
		fstream file("alunos.txt",fstream::out);
		file<<texto[0]<<endl;
		file.close();
		file.open("alunos.txt",fstream::app);
		for (int i=1;i<texto.size();i++){
			if (i==cont){
				file<<alu.nome<<" "<<alu.idade<<" "<<alu.numero<<endl;
			}
			else{
				file<<texto[i]<<endl;
			}
		}
		file.close();
	}
	else{
		cout<<"numero nao encontrado"<<endl;
	}
}
int main(){
	int op=-1;
	while(op!=0){
		cout<<"MENU"<<endl<<"1.INSERIR"<<endl<<"2.LISTAR"<<endl<<"3.ALTERAR"<<endl<<"4.ELIMINAR"<<endl<<"0. FIM"<<endl;
		cin>>op;
		switch (op){
			case 1:
				inserir_v3();
				break;
			case 2:
				listar();
				break;
			case 3:
				alterar();
				break;
			case 4:
				eliminar();
				break;
			default:break;
		}
	}
	return 0;
}