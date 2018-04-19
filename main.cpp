#include <iostream>
#include <map>

using std::cout;

std::map<char, int> alphabet;

void MaillyLegareAlexandre1();

int main() 
{
    // fill up the map with an association letter -> number 
    // a = 1, b = 2, c = 3, etc.
    alphabet = std::map<char, int>();
    for (int i = 1; i < 25; i++) {
        alphabet[char(i + 96)] = i;
    }

    // add your functions under here.
	MaillyLegareAlexandre1();

	
	
	
	
	
	
	
	
	
	
	
	LapierreKimberly1();

    // do not add anything after this line.
    system("pause");
    return 0;
}

<<<<<<< HEAD
void LapierreKimberly1()
{
	std::cout << "Kimberly " << std::endl;
=======
void MaillyLegareAlexandre1()
{
	std::cout << "Alexandre" << std::endl;
>>>>>>> 170b606400742814ecc615816b7a7e439415e761
}