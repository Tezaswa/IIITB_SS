#include<stdio.h>
#include<fcntl.h>

void main() {
	char* file_name = "temp.txt";
	int fd;
	if((fd=creat(file_name,S_IRUSR))<0)
		perror("Error creating a file!");
	else
		printf("File created successfully! %d" , fd);
}
