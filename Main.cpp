#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	//ifstream myFile;
	ifstream myFile("netflix_titles.csv");
	
	//while(myFile.good()){
		//string line;
		//getline(myFile,line, ',');
		//cout << line << endl;
	//}
    
    for(int i = 0; i < 10; i++){
	    string line;
		getline(myFile,line, ',');
		cout << line << endl;		
	}

    /*
    	Por enquanto so o b�sico,
    	o main � so para abrir o
    	arquivo e exibir as infroma��es.
    	
		O unico  problema �  que parece  
		que so �  possivel ler uma c�lula 
		por vez.Ent�o se executarmos o 
		c�digo  acima  ele vai ex�bir 
		o nome de cada coluna. 
		
		Para exibir os dados da tabela 
		ele tem que ser executado mais 
		vezes at� ele descer para a
		pr�xima linha.  
    */  
}

