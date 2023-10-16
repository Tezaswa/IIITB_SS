/*
============================================================================
Name : hands19b.c
Author : Tezaswa Awasthi
Description : Create a FIFO file by
b. mkfifo command
Date: 15th oct, 2023.
============================================================================
*/



#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
	execlp("mkfifo","mkfifo","fifo1",NULL);

	return 0;
}
