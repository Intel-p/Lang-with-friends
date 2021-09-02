//OPLang founded by William Shepelak and Liam Donavin 8/31/2021

//import statments
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//function prototyping
vector<string> tokenizer(string, string);
string file_to_string(string);


int main()
{
	string code = file_to_string("code.txt");
	vector<string> tokens = tokenizer(code, " ");
	for(auto i=tokens.begin();i!=tokens.end();i++)
	{
		cout << *i << endl;
	}
	cin.get();
	return 0;
}

vector<string> tokenizer(string str, string delimitor)
{
	vector<string> rtrn_vector;
	size_t pos;
	while((pos=str.find(delimitor)) != string::npos)
	{
		rtrn_vector.push_back(str.substr(0,pos));
		str.erase(0,pos+delimitor.size());
	}
	rtrn_vector.push_back(str);
	return rtrn_vector;
}

string file_to_string(string fname)
{
	fstream _file;
	string rtrn_str;
	_file.open(fname.c_str());
	if(!_file.fail())
	{
		string str;
		while(getline(_file, str))
		{
			rtrn_str+=str+"\n";
		}
	}
	else{
		rtrn_str = "";
		cout << "The program file does not exist!" << endl;
	}
	_file.close();
	return rtrn_str;
}


