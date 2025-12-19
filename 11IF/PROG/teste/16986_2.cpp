#include <iostream>
using namespace std;

int n;
int m;
int notas[100][100];
string alunos[100];
bool feito_1=false;
bool feito_2=false;
bool feito_4=false;
void ex_1(){
	feito_1=true;
	cout<<"Alunos=";
	cin>>n;
	cout<<"Disciplinas=";
	cin>>m;
	for (int i=0;i<n;i++){
		cin>>alunos[i];
		for (int j=0;j<m;j++){
			cin>>notas[i][j];
		}
	}
}
void ex_2(){
	if (feito_1){
		feito_2=true;
		for (int i=0;i<n;i++){
			int soma=0;
			for (int j=0;j<m;j++){
				soma+=notas[i][j];
			}
			notas[i][m]=int(soma/m);
		}
	}
	else{
		cout<<"Execute primeiro o 1."<<endl;
	}
}
void ex_3(){
	if (feito_2){
		for (int i=0;i<n;i++){
			cout<<alunos[i]<<":";
			for (int j=0;j<m;j++){
				cout<<notas[i][j]<<" ";
			}
			cout<<notas[i][m]<<endl;
		}
	}
	else{
		cout<<"Execute primeiro o 2."<<endl;
	}
}
void ex_4(){
	if (feito_2){
		feito_4=true;
		for (int i=0;i<n;i++){
			cout<<alunos[i]<<": ";
			if (notas[i][m]<10){
				cout<<"Sem nivel"<<endl;
			}
			else if (notas[i][m]<=13){
				cout<<"Satisfaz"<<endl;
			}
			else if (notas[i][m]<=16){
				cout<<"Bom"<<endl;
			}
			else if (notas[i][m]<=20){
				cout<<"Muito bom"<<endl;
			}
		}
	}
	else{
		cout<<"Execute primeiro o 2."<<endl;
	}
}
void ex_5(){
	if (feito_2){
		int maior=0;
		for (int i=0;i<n;i++){
			if (notas[i][m]>maior){
				maior=notas[i][m];
			}
		}
		cout<<"Maior nota: "<<maior<<endl;
		for (int i=0;i<n;i++){
			if (notas[i][m]==maior){
				cout<<alunos[i]<<endl;
			}
		}
	}
	else{
		cout<<"Execute primeiro o 2."<<endl;
	}
}
void ex_6(){
	if (feito_4){
		string nome;
		cin>>nome;
		int pos;
		bool existe=false;
		for (int i=0;i<n;i++){
			if (alunos[i]==nome){
				pos=i;
				existe=true;
			}
		}
		if (existe==true){
			cout<<alunos[pos]<<endl;
			cout<<"Notas: "<<endl;
			for (int i=0;i<m;i++){
				cout<<notas[pos][i]<<endl;
			}
			cout<<"Media: "<<notas[pos][m]<<endl;
			cout<<"Nivel: ";
			if (notas[pos][m]<10){
				cout<<"Sem nivel"<<endl;
			}
			else if (notas[pos][m]<=13){
				cout<<"Satisfaz"<<endl;
			}
			else if (notas[pos][m]<=16){
				cout<<"Bom"<<endl;
			}
			else if (notas[pos][m]<=20){
				cout<<"Muito bom"<<endl;
			}
		}
		else{
			cout<<"Aluno nao encontrado"<<endl;
		}
	}
	else{
		cout<<"Execute primeiro o 4."<<endl;
	}
}


int main(){
	int option=-1;
	while (option!=0){
		cout<<"MENU"<<endl<<"1."<<endl<<"2."<<endl<<"3."<<endl<<"4. "<<endl<<"5."<<endl<<"6."<<endl<<"0. FIM"<<endl;
		cin>>option;
		switch(option){
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
			case 6:
				ex_6();
				break;
			default:break;
		}
	}
	return 0;
}