#include <iostream>
#include <string>

int main()
{
	system("cls");

	std::string command = "systeminfo /FO LIST >> systeminfo.txt";

	system("chcp 437 > nul");
	system(command.c_str());
	std::cout << "[OK] Information was successfully received" << std::endl;
	system("pause");
}