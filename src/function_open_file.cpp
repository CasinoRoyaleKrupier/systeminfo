/*
 * function_open_file.cpp
 *
 *  Created on: Dec 17, 2018
 *      Author: krupier
 */
#include "function_open_file.h"

using namespace std;

string open_file(string path_file, int nr_line) {
	string line, read_file;

	ifstream file(path_file.c_str());

	if(file.good() == false) cout << "systeminfo: Not found file in /systeminfo-files" << endl;

	while (getline(file, line)) {
		switch (nr_line) {
			case 1: read_file=line; break;
			case 2: read_file=line; break;
			case 3: read_file=line; break;
			case 4: read_file=line; break;
			case 5: read_file=line; break;
		}
		nr_line++;
	}

	file.close();

	return read_file;
}
