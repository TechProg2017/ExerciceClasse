#include <iostream>
#include <map>

using std::cout;

std::map<char, int> alphabet;

void MaillyLegareAlexandre1();

void IvannGouletDoyon1()
{
	cout << "Ivann Goulet Doyon 1" << endl;
}

int main() {
    // fill up the map with an association letter -> number 
    // a = 1, b = 2, c = 3, etc.
    alphabet = std::map<char, int>();
    for (int i = 1; i < 25; i++) {
        alphabet[char(i + 96)] = i;
    }

    // add your functions under here.

	PatrickRenaud1();
	PatrickRenaud2();
	PatrickRenaud3();
	MaillyLegareAlexandre1();
	IvannGouletDoyon1();

    // do not add anything after this line.
    system("pause");
    return 0;
}


void PatrickRenaud1()
{
	std::cout << "Patrick Renaud" << std::endl;
}
void PatrickRenaud2()
{
	std::cout << " Patrick Renaud" << std::endl;
}
void PatrickRenaud3()
{
	std::cout << "=" << alphabet['p'] << alphabet['a'] << alphabet['t'] << alphabet['r'] << alphabet['i'] << alphabet['c'] << alphabet['k'] << alphabet['r'] << alphabet['e'] << alphabet['n'] << alphabet['a'] << alphabet['u'] << alphabet['d'] << std::endl;
}

void MaillyLegareAlexandre1()
{
	std::cout << "Alexandre" << std::endl;

}