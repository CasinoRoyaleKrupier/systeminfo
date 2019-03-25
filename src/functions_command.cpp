/*
 * functions_command.cpp
 *
 *  Created on: Nov 21, 2018
 *      Author: krupier
 */
#include "functions_command.h"
#include "functions_file.h"

using namespace std;

void command_check_folder_exist() {
	string user = getenv("USER");
	char check;
	string path_file = "/home/"+user+"/.systeminfo-files/";
	ifstream mem_file(path_file); //---------------/ systeminfo-files is a directory /---------------
	if(mem_file.good() == false) {
		cout << "Not found folder \"/home/" << user << "/.systeminfo-files\"" << endl;
		cout << "Create folder \"systeminfo-files\"? [y/n]... ";
		cin >> check;
		switch(check) {
		case 'y':
			cout << "------------------------------------------------------------------------" << endl;
			system("mkdir /home/$USER/.systeminfo-files"); 					cout << "Creating \"systeminfo-files\" folder,.. done." << endl;
			system("mkdir /home/$USER/.systeminfo-files/logs");				cout << "Creating \"logs\" folder,.............. done" << endl;
			cout << "------------------------------------------------------------------------" << endl;
			break;
		case 'n':
			exit(0);
		default:
			exit(0);
		}
	}
}

void command_activate() {
	ifstream mem_file("systeminfo_script.sh");
	if(mem_file.good() == true)	system("./systeminfo_script.sh");
	else						system("cd /usr/bin/ && ./systeminfo_script.sh");
}

void command_remove() {
	ifstream mem_file("systeminfo_remove_script.sh");
	if(mem_file.good() == true)	system("./systeminfo_remove_script.sh");
	else						system("cd /usr/bin/ && ./systeminfo_remove_script.sh");
}