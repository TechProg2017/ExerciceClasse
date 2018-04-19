#include <iostream>
#include <map>

using std::cout;

std::map<char, int> alphabet;

void MathieuFournier1();
void MathieuFournier2();
void MathieuFournier3();
void MaillyLegareAlexandre1();
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
	MathieuFournier2();
	MathieuFournier3();
	MaillyLegareAlexandre1();
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
	std::cout << "Alexandre" << std::endl;
}