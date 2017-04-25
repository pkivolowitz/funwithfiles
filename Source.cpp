#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>

using namespace std;

int main(int argc, char * argv[])
{
	if (argc < 2)
	{
		cout << "First argument must be a file name." << endl;
	}
	else
	{
		ifstream f(argv[1]);
		if (f.is_open())
		{
			cout << "file is open." << endl;
			cout << "I am at position: " << f.tellg() << endl;
			string w;
			for (int i = 0; i < 10; i++)
			{
				//f >> w;
				cout << "I am at position: " << f.tellg();
				cout << " I read: " << w << endl;
				f.seekg(0, f.end);
			}
			f.close();
		}
		else
		{
			cout << "Unable to open file: " << argv[1] << endl;
		}
	}
	/*
	unordered_map<string, int> word_counter;
	cout << "Empty map size: " << word_counter.size() << endl;
	
	string w = "jean";
	word_counter[w]++;

	cout << "Map size: " << word_counter.size() << endl;
	cout << "Value of \"jean\": " << word_counter[w] << endl;
	*/

#if defined(WIN32)
	system("pause");
#endif
	return 0;
}