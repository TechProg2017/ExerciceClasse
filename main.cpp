#include <iostream>
#include <map>

using std::cout;

std::map<char, int> alphabet;

void MathieuFournier1();
void MathieuFournier2();
void MathieuFournier3();
void MaillyLegareAlexandre1();
void LapierreKimberly1();
void IvannGouletDoyon1();
void MaillyLegareAlexandre1();
void MaillyLegareAlexandre2();
void MaillyLegareAlexandre3();
void MathieuFournier1();
void JimmyGagnonVezina1();
void JimmyGagnonVezina2();
void LapierreKimberly1();
void PatrickRenaud1();
void PatrickRenaud2();
void PatrickRenaud3();
void MathieuFournier1();
void LapierreKimberly1();



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

	PatrickRenaud1();
	PatrickRenaud2();
	PatrickRenaud3();
	MathieuFournier1();
	MathieuFournier2();
	MathieuFournier3();
	MaillyLegareAlexandre1();
	MaillyLegareAlexandre2();
	MaillyLegareAlexandre3();
	IvannGouletDoyon1();
	JimmyGagnonVezina1();
	JimmyGagnonVezina2();
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
void MathieuFournier2()
{
	cout << " MathieuFournier" << std::endl;
}
void MathieuFournier3()
{
	cout << "MathieuFournier = " << alphabet['m'] << alphabet['a'] << alphabet['t'] << alphabet['h'] << alphabet['i'] << alphabet['e'] << alphabet['u'] << alphabet['f'] << alphabet['o'] << alphabet['u'] << alphabet['r'] << alphabet['n'] << alphabet['i'] << alphabet['e'] << alphabet['r'] << std::endl;
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

	std::cout << "Mailly Legare ";
}
void JimmyGagnonVezina1()
{
	std::cout << "Jimmy";
}

void MaillyLegareAlexandre3()
{
	std::cout << "= " << alphabet['A'] << alphabet['l'] << alphabet['e'] << alphabet['x'] << alphabet['a'] << alphabet['n'] << alphabet['d'] << alphabet['r'] << alphabet['e'] << alphabet['M'] << alphabet['a'] << alphabet['i'] << alphabet['l'] << alphabet['l'] << alphabet['y'] << alphabet['L'] << alphabet['e'] << alphabet['g'] << alphabet['a'] << alphabet['r'] << alphabet['e'] << std::endl;
}
void JimmyGagnonVezina2()
{
	std::cout << "GagnonVezina" << std::endl;
}