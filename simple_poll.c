#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc,char *argv[])
{
	struct pollfd fds[1];
	int fd = 0;
	int timeout = 3000;	//3 seconds.
	char buffer[32];
	int ret;
	
	
	fds[0].fd = fd;
	fds[0].events = 0;
  	fds[0].events |= POLLIN;
	
	memset(buffer,0,32);
	if( poll(fds,1,timeout) == 0) {
		printf("timeout\n");
	} else {
		read(fd,buffer,32);