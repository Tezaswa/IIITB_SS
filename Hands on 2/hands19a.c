/*
============================================================================
Name : hands19a.c
Author : Tezaswa Awasthi
Description : Create a FIFO file by
a. mknod command
Date: 15th Oct, 2023.
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
        execlp("mknod","mknod","fifo2","p",NULL);

        return 0;
}

