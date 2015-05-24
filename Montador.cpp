#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "lexico.h"

using namespace std;

int main(int argc, char const *argv[])
{	
	ifstream arquivo;
	string fileName;
	string line;

	char *c_token;
	char del[] = " 	";
	char *str;
	Token token;
	vector<Token> tokens;
	string s_str;
	int lineCount = 0;

	list<Label> defTable;


	if (argc != 2)
	{
		cout << "Número inválido de argumentos!" << endl;
		return 0;
	}

	fileName = argv[1];
	fileName += ".asm";

	arquivo.open(fileName.c_str());
	if (arquivo.is_open())
	{
		// Pre processamentos 
		// Elimina espaços em branco desnecessário e comentário
		while (getline(arquivo,line))
		{
			// prepara estrutura de tokenificação
			str = (char*) malloc((line.length()+1)*sizeof(char));
			line.copy(str, line.length()+1, 0);
			str[line.length()] = '\0';
			c_token = strtok(str, del);
			tokens.clear();

			// itera sobre todos tokens de uma linha
			while (c_token != NULL) {
				s_str = c_token;

				// get token from list if exists
				token = getToken(s_str);

				tokens.push_back(token);
				c_token = strtok(NULL, del);
			}

			// if it is a fixed token
			if(tokens[0].id >= 0) {
				// if token is section
				if(tokens[0].id == 0) {

				} 
				// if token is an opperation
				else if(tokens[0].id == 3) {
					// switch
				}
				// if it is a token that shouldn't be there
				else {

				}
			} 
			// it it is a label
			else {
				// put it in the defTable if there isn't there already
				// if there is an entry on defTable
				// increment refCount
				// add this current reference (i.e. lineCount)
			}


			free(str);

			for (vector<Token>::iterator it=tokens.begin(); it != tokens.end(); ++it) {
				cout << it->text << endl;
			}

			// set next line on tokens' list
			lineCount++;

			// verif se nao ;

		}
		arquivo.close();
	}
	else 
		cout << "Não foi possível abrir o arquivo" << endl;

	return 0;
}