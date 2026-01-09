#include <iostream>
#include <fstream>
using namespace std;
struct {
	string nome;
	int idade{};
	int numero{};
}alu;
int count=0;
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
void inserir_v2(){
	ifstream file_r("alunos.txt");
	count=file_r.
	count++;
	file_r.close();
	fstream file("alunos.txt",fstream::app);
	cout<<"nome: ";
	cin.ignore();
	getline(cin,alu.nome);
	cout<<"idade: ";
	cin>>alu.idade;
	cout<<"numero: ";
	cin>>alu.numero;
	file<<alu.nome<<" "<<alu.idade<<" "<<alu.numero<<" "<<count<<endl;
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
using namespace std;
int main(){
	int op=-1;
	while(op!=0){
		cout<<"MENU"<<endl<<"1.INSERIR"<<endl<<"2.LISTAR"<<endl<<"0. FIM"<<endl;
		cin>>op;
		switch (op){
			case 1:
				inserir_v2();
				break;
			case 2:
				listar();
				break;
			default:break;
		}
	}
	return 0;
}