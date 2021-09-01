//OPLang founded by William Shepelak and Liam Donavin 8/31/2021

//import statments
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//function prototyping
/*
vector<string> tokenizer(string);
*/
string file_to_string(string);


int main()
{
	string code = file_to_string("code.txt");
	cout << code << endl;
	cin.get();
	return 0;
}

/*
vector<string> tokenizer(string str)
{

}
*/

string file_to_string(string fname)
{
	fstream _file;
	_file.open(fname.c_str());
	string str, rtrn_str;
	while(getline(_file, str))
	{
		rtrn_str+=str + "\n";
	}
	_file.close();
	return rtrn_str;
}

