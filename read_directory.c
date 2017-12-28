#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>

int main(void)
{
	DIR *dir;
	struct dirent *sd;
	
	dir = opendir(".");
	
	if(dir == NULL) {
		perror("Error opening directory\n");
		exit(-1);
	}
	while( (sd = readdir(dir)) != NULL) {
		printf("%s\n",sd->d_name);
	}
	closedir(dir);
	
	return (0);
}
