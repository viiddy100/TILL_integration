#include <stdio.h>
#include <iostream>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#define PORT 8080 
#include <signal.h>


int tcp_com(char *xmldata);
