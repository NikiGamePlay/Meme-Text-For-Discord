#include <iostream>
#include "Translators.h"

int main()
{
	std::string input;
    std::cout << "Welcome to the Discord Meme Text Translator! Please enter your text!" << std::endl;
	std::cout << ">";
	std::getline(std::cin, input);
	std::cout << StudlyTranslator(input) << std::endl;
	std::cout << LotOfEmojiTranslator(input) << std::endl;
	std::cin.get();
}
