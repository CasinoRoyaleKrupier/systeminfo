#include "functions_strings_operations.h"
#include "functions_file_operations.h"
#include "functions_file.h"

using namespace std;

string switch_words(string value)
{
    for (unsigned int i = 1; i < value.length(); i++)
    {
        value[i] = tolower(value[i]);
    }

    return value;
}

string bold()
{
    int nr_line = 1;
    string color = open_file(home_path() + "/.systeminfo-files/systeminfo-color.txt", nr_line);

    if (distribution_file() == "Raspbian GNU/Linux" || distribution_file() == "Raspbian")
        return get_color("red");

    else if (distribution_file() == "Debian GNU/Linux" || distribution_file() == "Debian")
        return get_color("red");

    else if (distribution_file() == "ManjaroLinux" || distribution_file() == "Manjaro Linux" || distribution_file() == "Manjaro")
        return get_color("green");

    else if (distribution_file() == "KaliLinux" || distribution_file() == "Kali Linux" || distribution_file() == "Kali")
        return get_color("red");

    else if (distribution_file() == "Ubuntu")
        return get_color("red");

    else if (distribution_file() == "Gentoo" || distribution_file() == "Gentoo/Linux")
        return get_color("purple");

    else if (distribution_file() == "ArchLinux" || distribution_file() == "Arch Linux" || distribution_file() == "Arch")
        return get_color("cyan");

    else if (distribution_file() == "Fedora")
        return get_color("blue");

    else if (distribution_file() == "Android")
        return get_color("green");

    else if (distribution_file() == "Elementary" || distribution_file() == "elementary")
        return get_color("dark_grey");

    else if (distribution_file() == "Linux" || distribution_file() == "linux")
        return get_color("dark_grey");

    else if (color == "N/A")
        return "\033[" + color + "m";

    else
        return "\033[1m";
}

string bold_end()
{
    int nr_line = 1;
    string color = open_file(home_path() + "/.systeminfo-files/systeminfo-color.txt", nr_line);

    if (color == "N/A")
    {
        return "\033[0m";
    }
    else
    {
        return "\033[0m";
    }
}

string get_color(string color_input)
{
    string color;

    if (color_input == "black")            color = "\033[0m\033[1;30m";
    else if (color_input == "red")         color = "\033[0m\033[1;31m";
    else if (color_input == "green")       color = "\033[0m\033[1;32m";
    else if (color_input == "brown")       color = "\033[0m\033[1;33m";
    else if (color_input == "blue")        color = "\033[0m\033[1;34m";
    else if (color_input == "cyan")        color = "\033[0m\033[1;36m";
    else if (color_input == "purple")      color = "\033[0m\033[1;35m";
    else if (color_input == "yellow")      color = "\033[0m\033[1;33m";
    else if (color_input == "white")       color = "\033[0m\033[1;37m";
    else if (color_input == "light_grey")  color = "\033[0m\033[37m";
    else if (color_input == "dark_grey")   color = "\033[0m\033[1;30m";
    else if (color_input == "rosa_blue")   color = "\033[01;38;05;25m";
    else if (color_input == "reset")       color = "\033[0m";
    else                                   color = "\033[0m\033[1;30m";

    return color;
}

string int_to_str(int n)
{
     string tmp, ret;
     if(n < 0) {
      ret = "-";
      n = -n;
     }
     do {
      tmp += n % 10 + 48;
      n -= n % 10;
     }
     while(n /= 10);
     for(int i = tmp.size()-1; i >= 0; i--)
      ret += tmp[i];
     return ret;
}

string float_to_str(float n)
{
    std::ostringstream ss;
    ss << n;
    string output(ss.str());

    return output;
}

string double_to_str(double n)
{
    std::ostringstream ss;
    ss << n;
    string output(ss.str());

    return output;
}