#include "Translators.h"

/*
Takes an input and converts some chars in it to Discord emojis such as :b: and :a:.
*/

std::string LotOfEmojiTranslator(std::string input) {
	std::string output = "";
	for (char& c : input) {
		switch (c)
		{
		case 'a':
		case 'A':
			output += ":a:";
			break;
		case 'b':
		case 'B':
			output += ":b:";
			break;
		case 'o':
		case 'O':
			output += ":o2:";
			break;
		default:
			output += c;
			break;
		}
	}
	return output;
}