#include <iostream>
#include <map>

using std::cout;

std::map<char, int> alphabet;

int main() {
    // fill up the map with an association letter -> number 
    // a = 1, b = 2, c = 3, etc.
    alphabet = std::map<char, int>();
    for (int i = 1; i < 25; i++) {
        alphabet[char(i + 96)] = i;
    }

    // add your functions under here.



	CharlesCooke1();
    // do not add anything after this line.
    system("pause");
    return 0;
}

void CharlesCooke1()
{
	std::cout << "Charles Cooke"; 
}

