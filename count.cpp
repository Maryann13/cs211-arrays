#include <string>
#include <iostream>
#include <cstdio>
#include <map>

#define EOLN 0

using namespace std;

typedef map<char, int>::iterator mapIterator;

/* count digits, white space, others */

/* TODO: (1) fix all errors; 
 *       (2) add code for painting histogram in console,
 *           cf. picture in https://en.wikipedia.org/wiki/Histogram
 * 
 */

 // painting histogram in console
void paintHistogram(string src)
{
	map<char, int> freqDict;

	char c;
	int maxFreq = 0;
	for (int i = 0; (c = src[i]) != EOLN; ++i)
	{
		mapIterator it = freqDict.find(c);
		freqDict[c] = it == freqDict.end() ? 1 : freqDict[c] + 1;
		if (freqDict[c] > maxFreq)
			++maxFreq;

	}

	for (int i = maxFreq; i > 0; --i)
	{
		cout << i << ' ';
		for (mapIterator beg = freqDict.begin();
			beg != freqDict.end(); ++beg)
		{
				cout << ((beg->second >= i) ? "_   " : "    ");
		}
		cout << endl;
	}

	cout << endl;
	for (mapIterator beg = freqDict.begin();
		beg != freqDict.end(); ++beg)
	{
		if (beg->first == '\n')
			cout << "'\\n' ";
		else if (beg->first == '\t')
			cout << "'\\t' ";
		else
			cout << "'" << beg->first << "' ";
	}

	cout << endl;
}

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i, nwhite, nother;
	const int size = 10;
	int ndigit[size]{ 0 };
	i = nwhite = nother = 0;
	
	char c;
	while ((c = src[i++]) != EOLN)
		if ('0' <= c && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	
	cout << "source string: " << src << endl << "digits =";
	for (int i = 0; i < size; ++i)
		cout << " " << ndigit[i];
	
	cout << ", white space = " << nwhite 
		 << ", other = " << nother << endl;

	cout << endl;
	paintHistogram(src);
}
