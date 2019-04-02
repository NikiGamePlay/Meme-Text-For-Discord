#include "Translators.h"

/*
Takes a string input and converts it to a Studly Case. Example: TeSt oF StUdLy cAsE.
*/
std::string StudlyTranslator(std::string input) {
	std::string output = "";
	bool upper = true;
	for (char& c : input) {
		if (upper) {
			char upperchar = toupper(c);
			output += upperchar;
			upper = false;
		}
		else {
			char lowerchar = tolower(c);
			output += lowerchar;
			upper = true;
		}
	}
	return output;
}