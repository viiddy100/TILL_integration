#include <stdio.h>
#include <fcntl.h>  /* File Control Definitions          */
#include <termios.h>/* POSIX Terminal Control Definitions*/
#include <unistd.h> /* UNIX Standard Definitions         */
#include <errno.h>  /* ERROR Number Definitions          */
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

int open_serial_port()
{
    int fd;
    printf("This is serial port communication\n");
    fd = open("/dev/ttyS0",O_RDWR | O_NOCTTY );
    if(fd == -1)
        printf("\%d Error! in Opening ttyS0\n",fd );
    else
        printf("\%d  ttyS0 Opened Successfully\n", fd);


    char data[] = "this is serial port";
    int scomW_return = write(fd, data, strlen(data) );
    if(scomW_return==-1){
        printf("failure\n");
        return -1;
    }else{
        printf("sucess\n");
    }
/*
    char rdata;
    int r=1;
    do
    {
        r= read(fd, &rdata, 1);
        printf("r= %d", r);
        printf("%c\n", rdata);

    } while (r > 0);
*/
    close(fd);
}
