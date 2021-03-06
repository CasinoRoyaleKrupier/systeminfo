/*
 * function_open_file.cpp
 *
 *  Created on: Dec 17, 2018
 *      Author: krupier
 */
#include "functions_file_operations.h"

using namespace std;

extern int string_confirmed; /*--------------------/ Global Variable /--------------------*/

string open_file(string path_file, int nr_line)
{
	string line;
	ifstream file;

	file.open(path_file.c_str(), ios::in);

		if(file.good() == false)
			return "N/A";

		for(int i = 0; i < nr_line; i++)
		{
			getline(file, line);
			if(line == "")
			{
				return "N/A";
			}
		}

	file.close();

	return line;
}

bool check_file_folder_exist(string path_file)
{
	ifstream file;

	file.open( path_file.c_str() );
	if (file.good() == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void check_file_text(string input, string search_text)
{
	int number=0;
	string read_line[100];
	ifstream file;

	file.open(input.c_str(), ios::in);

		if(file.good() == false)
			string_confirmed = 0;

		while(!file.eof())
		{
			getline(file, read_line[number++]);
		}

	file.close();

	for(int i = 1; i <= number; i++)
	{
		check_file_text_find_text(read_line[i], search_text);

		if(string_confirmed == 1)
		{
			break;
		}
	}
}

void check_file_text_find_text( string & text, string find_string )
{
    size_t position = text.find(find_string);
    if(position == string::npos)
	{
        string_confirmed = 0;
        return;
    }

    do
	{
        string_confirmed = 1;
        position = text.find(find_string, position + find_string.size());
    } while(position != string::npos);
}

bool find_text( string & text, string find_string )
{
    size_t position = text.find(find_string);
    if(position == string::npos)
	{
        return false;
    }

    do
	{
        return true;
        position = text.find(find_string, position + find_string.size());
    } while(position != string::npos);
}