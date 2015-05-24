#include <list>

#include <string>
#include <string.h>
#include <stdlib.h>

 using namespace std;

struct Token {
	int id;
	int opType;
	string text;
};

struct Label
{
	string label;
	int refCount;
	list<int> ref;
	Label() : refCount(0){}
};

static const Token tokenList[] = {
	{0, 0, "section"},
	{1, 0, "text"},
	{2, 0, "data"},
	{3, 0, "add"},
	{3, 1, "sub"}
};


//Response analiseLexica (string line);


Token getToken(string str);