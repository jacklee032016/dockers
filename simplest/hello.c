/*
*/

#define _GNU_SOURCE  
#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>

#define	MESSAGE "Hello World from docker image\r\nPlease input:"
#define	MSG2	"exit from docker image\r\n"

void _start()
{
	char buffer[1024];
	           
	//write(1, message, sizeof(message) - 1);
	syscall(SYS_write, 1, MESSAGE, sizeof(MESSAGE) - 1);

	syscall(SYS_read, 0, buffer, sizeof(buffer) - 1);

	syscall(SYS_write, 1, buffer, strlen(buffer));

	syscall(SYS_write, 1, MSG2, sizeof(MSG2));

	//_exit(0);
	syscall(SYS_exit, 0);
}
