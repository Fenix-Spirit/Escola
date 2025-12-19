#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main(){
	string input[100];
	string morse;
	int count=0;
	string ABC[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	string morse_lista[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	while (morse!="#"){
		cin>>morse;
		input[count]=morse;
		count++;
	}
	string resultado[count];
	for (int i=0;i<count;i++){
		for (int j=0;j<26;j++){
			if (input[i]==morse_lista[j]){
				resultado[i]=ABC[j];
			}
		}
	}
	for (int i=0;i<count-1;i++){
		if (i==count-2){
			cout<<input[i]<<"=";
		}
		else{
			cout<<input[i]<<"+";
		}
	}
	for (int i=0;i<count;i++){
		cout<<resultado[i];
	}
}