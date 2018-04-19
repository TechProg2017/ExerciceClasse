#include <iostream>
#include <map>

using std::cout;

std::map<char, int> alphabet;

void MaillyLegareAlexandre1();
void MaillyLegareAlexandre2();
void MaillyLegareAlexandre3();
void MathieuFournier1();
void LapierreKimberly1();



void IvannGouletDoyon1()
{
	cout << "Ivann Goulet Doyon 1" << std::endl;
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
	MathieuFournier1();
	MaillyLegareAlexandre1();
	MaillyLegareAlexandre2();
	MaillyLegareAlexandre3();
	IvannGouletDoyon1();

	
	
	
	
	
	
	
	
	
	
	
	LapierreKimberly1();

    // do not add anything after this line.
    system("pause");
    return 0;
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
	std::cout << "Mailly Legare ";
}

void MaillyLegareAlexandre3()
{
	std::cout << "= " << alphabet['A'] << alphabet['l'] << alphabet['e'] << alphabet['x'] << alphabet['a'] << alphabet['n'] << alphabet['d'] << alphabet['r'] << alphabet['e'] << alphabet['M'] << alphabet['a'] << alphabet['i'] << alphabet['l'] << alphabet['l'] << alphabet['y'] << alphabet['L'] << alphabet['e'] << alphabet['g'] << alphabet['a'] << alphabet['r'] << alphabet['e'] << std::endl;
}