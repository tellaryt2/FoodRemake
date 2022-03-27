#include "Client.h"

int main()
{
	setlocale(LC_ALL, "ru");
	Client client;

	int result;
	result = WSAStartup(MAKEWORD(2, 2), &client.WSAData);
	if (result != 0)
	{
		cout << "Ошибка WSAStartup: " << result << endl;
		return 1;
	}

	client.server = INVALID_SOCKET;
	client.server = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (client.server == INVALID_SOCKET)
	{
		cout << "Ошибка socket(): " << WSAGetLastError() << endl;
		WSACleanup();
		return 1;
	}

	sockaddr_in clientService;
	clientService.sin_family = AF_INET;
	clientService.sin_addr.s_addr = inet_addr("89.108.127.148");
	clientService.sin_port = htons(80);

	int result1 = connect(
		client.server,
		reinterpret_cast<SOCKADDR*>(&clientService),
		sizeof(clientService)
	);
	if (result1 != 0)
	{
		cout << "Ошибка в connect(): " << WSAGetLastError() << endl;
		WSACleanup();
		return 1;
	}

	int result2;
	char data[] = "Test";
	result2 = send(client.server, data, static_cast<int>(strlen(data)), 0);
	if (result2 < 0)
	{
		std::cout << "Ошибка в send(): " << WSAGetLastError() << std::endl;
		return 1;
	}

	char buf[256];
	int r;
	do
	{
		r = recv(client.server, buf, client.server, 0);
		if (r > 0)
			std::cout << "Принятно " << r << " байт" << std::endl;
		else if (r == 0)
			std::cout << "Соединение разорвано" << std::endl;
		else
			std::cout << "Ошибка в recv(): " << WSAGetLastError() << std::endl;
	} while (r > 0);

	closesocket(client.server);
	// Если работа с сокетами больше не предполагается вызываем WSACleanup()
	WSACleanup();
}


