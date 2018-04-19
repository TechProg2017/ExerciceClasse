#include <iostream>
#include <map>

using std::cout;

std::map<char, int> alphabet;

void MaillyLegareAlexandre1();
void MaillyLegareAlexandre2();
void MathieuFournier1();
void JimmyGagnonVezina1();
void LapierreKimberly1();
void PatrickRenaud1();
void PatrickRenaud2();
void PatrickRenaud3();

void IvannGouletDoyon1()
{
	std::cout << "Ivann Goulet Doyon 1" << std::endl;
}

int main() {
    // fill up the map with an association letter -> number 
    // a = 1, b = 2, c = 3, etc.
    alphabet = std::map<char, int>();
    for (int i = 1; i < 25; i++) 
	{
        alphabet[char(i + 96)] = i;
    }

    // add your functions under here.


	PatrickRenaud1();
	PatrickRenaud2();
	PatrickRenaud3();
	MathieuFournier1();
	MaillyLegareAlexandre1();
	MaillyLegareAlexandre2();
	IvannGouletDoyon1();
	JimmyGagnonVezina1();
	LapierreKimberly1();

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

void MathieuFournier1()
{
	cout << "MathieuFournier" << std::endl;
}
void LapierreKimberly1()
{
	std::cout << "Kimberly " << std::endl;
}

void MaillyLegareAlexandre1()
{ 
	std::cout << "Alexandre ";
}

void MaillyLegareAlexandre2()
{
	std::cout << "Mailly Legare " << std::endl;
}
void JimmyGagnonVezina1()
{
	std::cout << "JimmyGagnonVezina" << std::endl;
}