#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>

void main() {
  int fd=open("temp1.txt", O_RDWR | O_CREAT, 0777);

  if(fd == -1) {
    printf("Error %d\n", errno);
    perror("Program");
  }
  printf("fd=%d \n", fd);
  char* str="This is a test line.";
  int wr=write(fd, str, strlen(str)+1);
  printf("Status of writing in the file : %d\n", wr);
  close(fd);
  fd=open("temp1.txt", O_RDWR);
  char str2[80];
  read(fd, str2, 80);
  printf("Read = %s\n", str2);
  close(fd);
}

