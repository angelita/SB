#include "lexico.h"


/*
Response analiseLexica (string line, list<Token>) {
	Response r; 

	char *c_token;
	char del[] = " 	";
	char *str;
	Token token;
	string s_str;

	str = (char*) malloc((line.length()+1)*sizeof(char));
	line.copy(str, line.length()+1, 0);
	str[line.length()] = '\0';
	c_token = strtok(str, del);

	while (c_token != NULL) {
		s_str = c_token;

		r.tokens.push_back(s_str);
		c_token = strtok(NULL, del);
	}

	return r;
}*/

Token getToken(string str) {
	// return as Token with id < 0 and text = str if it's a label
}