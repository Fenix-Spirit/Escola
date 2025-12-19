#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<string> nomes;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string nome;
		cin>>nome;
		nomes.push_back(nome);
	}
	return 0;
}