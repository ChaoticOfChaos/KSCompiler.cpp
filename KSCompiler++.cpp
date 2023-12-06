#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <map>

#include "KSCompiler.h"

int main() {
	
	std::vector<std::string> languages = { "python", "nodejs", "html" };

	std::map<std::string, std::string> TranslatorMAP = { {"#python", "python"}, {"#nodejs", "nodejs"}, {"#html", "html"} };
	
	std::cout << "KSCompiler" << std::endl;

	std::string lenguage;
	std::cout << "Lenguage: ";
	std::cin >> lenguage;

	if (lenguage == "python" || lenguage == "nodejs" || lenguage == "html") {

		std::string path;
		std::cout << "Path: ";
		std::cin >> path;

		return SimpleCOMP(path, lenguage);

	}
	else if (lenguage == "#python" || lenguage == "#nodejs" || lenguage == "#html") {

		std::string name;
		std::cout << "Name: ";
		std::cin >> name;

		return HardCOMP(name, TranslatorMAP[lenguage]);

	}

}
