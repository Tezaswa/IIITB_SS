#include<stdio.h>
#include<fcntl.h>

void main() {
  char* file_name="temp.txt";
  mode_t mode=S_IRUSR;
  int fd;
  if((fd=creat(file_name, mode))<0)
    perror("Error while creation of file!");
  else
    printf("Created File Successfully! %d", fd);
}
