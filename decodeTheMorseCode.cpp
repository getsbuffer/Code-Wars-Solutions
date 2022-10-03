// Decode the Morse Code -- Not solved
// According to the discussion board, this is the best solution.
/* As a beginner with a limited knowledge of regex, functions like find_first_not_of and find_last_not_of, begin(), and end(), I do not think I would've
 *  solved this on my own. In order to make this my own, I have added 
 *  comments to the code which come to my conclusions about what each line
 *  means after doing research. */
#include <iostream>
#include <regex>
using namespace std;

// This regex captures any character that is a white space
// character OR a white space character 3 times
const regex morse("([^\\s]+|\\s{3})");
string decodeMorse(string morseCode) {
	string decoded;
	// begin is defined as an index of the first instance of a character
	// being not white space.
	auto begin = morseCode.begin() + morseCode.find_first_not_of(' ');
	// end is defined as an index of the last instance of a character
	// being not white space + 1
	auto end = morseCode.begin() + morseCode.find_last_not_of(' ') + 1;
	// auto it is defined as the regex iterator taking its standard
	// arguments (begining of string, ending of string, and the 
	// regex sequence), it will stop once the regex iterator has
	// finished going through the string, and it will iterator
	// by one for each loop.
	for (auto it = sregex_iterator(begin, end, morse); it != sregex_iterator(); ++it) {
		// This typecasts it as a string so its value can be 
		// recorded into this str variable. 
		string str = it -> str();
		// decoded = itself + str which if "   " then str = " " else 
		// str = MORSE_CODE[str]
		decoded += str == "   " ? " " : MORSE_CODE[str];
	}
	return decoded;
}

		
// Driver code
int main() {
	decodeMorse(".... . -.--   .--- ..- -.. .");
}
