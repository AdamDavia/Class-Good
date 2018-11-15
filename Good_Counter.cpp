
#include <iostream>
#include <string>
#include <vector>
#include "counter.h"

using namespace std;

void counter::Begin()
{
	cout << "Please enter Author Full Title: " << endl;

	getline(cin, Author);

	cout << "Please Enter Authors Sentence: " << endl;

	getline(cin, Sentence);

	while (Sentence.size() < 3 || Sentence.size() > 128)
	{
		cout << "Please enter a valid Sentence." << endl;
		Sentence.clear();
		cin.clear();
		cin.ignore(1000, '\n');
		getline(cin, Sentence);
	}
	A();
}
void counter::A()
{

	string vecIn = "";
	int numWords = 1;
	vector<string> Wordcount(1);
	Wordcount.resize(0);

	for (unsigned int i = 0; i < Sentence.size(); i++)
	{
		if (Sentence.at(i) != ' ')
		{
			vecIn = vecIn + Sentence.at(i);
		}
		else
		{
			Wordcount.push_back(vecIn);
			vecIn.clear();
		}
	}

	vecIn.clear();
	numWords = Wordcount.size() + 1;

	cout << "Total word count is " << numWords << " words." << endl;
	Wordcount.resize(0);
}
