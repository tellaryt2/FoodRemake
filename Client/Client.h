#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <iostream> 
#include <cstdio> 
#include <cstring> 
#include <winsock2.h> 

#pragma comment(lib, "WS2_32.lib")
using namespace std;

class Client
{
public:

	DWORD tid;
	WSADATA WSAData;
	SOCKET server;
	SOCKADDR_IN addr;
	int *Array;
	int CountArray;
};