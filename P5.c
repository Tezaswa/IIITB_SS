#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>    

void main()
{
    while (1)
    {
        creat("file_1", O_CREAT);
        creat("file_2", O_CREAT);
        creat("file_3", O_CREAT);
        creat("file_4", O_CREAT);
        creat("file_5", O_CREAT);
    }
}
