#include <iostream>
#include <stdio.h>
#include <string>
#include <sys/types.h>
#include <ifaddrs.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <fstream>

#include <sstream>

#include <netpacket/packet.h>

using namespace std;

void get_ip_address(int on_ip6);
void all_network();
string get_gateway(string input_value);
void get_mac_address(string input_interface_name);
int hex2dec (string hexadecimal);
