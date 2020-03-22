/** @file
 *
 * @brief server module.
 *
 * service handling requests from APK, used as a binder for APK
 * communication method is based on socket communication
 */
#include <stdio.h>
#include <string.h>    //strlen
#include <stdlib.h>    //strlen
#include <sys/socket.h>
#include <arpa/inet.h> //inet_addr
#include <unistd.h>    //write
#include <signal.h>
#include <pthread.h> //for threading , link with lpthread
#include <ctype.h>
#include <fcntl.h>
#include <err.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <cutils/klog.h>
#include <cutils/properties.h>
#include "parson/parson.h"
#define server_daemon_kmsg_print(x...) KLOG_ERROR("server_daemon", x)


int main(void)
{
	int socket_desc = 0, new_socket = 0, c = 0 , *new_sock = NULL;
	struct sockaddr_in server , client;

	server_daemon_kmsg_print("--- server daemon STARTED ---");
	return 0;
}
