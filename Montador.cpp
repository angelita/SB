#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{	
	ifstream arquivo;
	string fileName;
	string line;

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
			//cout << line << endl;
			// verif se nao ;

		}
		arquivo.close();
	}
	else 
		cout << "Não foi possível abrir o arquivo" << endl;

	return 0;
}