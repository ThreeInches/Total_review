#include "cloud_backup_client.hpp"

int main()
{
	CloudClient client(LISTEN_DIR, STORAGE_FILE, SERVER_IP, SERVER_PORT);
	client.Start();
	return 0;
}