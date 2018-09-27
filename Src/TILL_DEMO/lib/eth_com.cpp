// Client side C/C++ program to demonstrate Socket programming

#include "eth_com.h"

#include <stdio.h>

int tcp_com(char *xmldata )
{ 
    struct sockaddr_in address; 
    int sock = 0, valread; 
    struct sockaddr_in serv_addr; 
//    char xmldata[200]="DATA FROM XMLFILE"; 

    char buffer[1024] = {0};
    printf("\ntcp_com ----");
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
    { 
        printf("\n Socket creation error \n"); 
        return -1; 
    } 
   
    memset(&serv_addr, '0', sizeof(serv_addr)); 
   
    serv_addr.sin_family = AF_INET; 
    serv_addr.sin_port = htons(PORT); 
       
    // Convert IPv4 and IPv6 addresses from text to binary form 
    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)  
    { 
        printf("\nInvalid address/ Address not supported \n"); 
        return -1; 
    } 
   
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
    { 
        printf("\nConnection Failed \n"); 
        return -1; 
    }
    
//  scanf("%s", &hello); // data will come from xml file
    send(sock , xmldata , strlen(xmldata) , 0 );
    
//    valread = read( sock , buffer, 1024);
//    printf("%s\n",buffer ); 
//    memset(buffer,0,strlen(buffer));

    // closing the connection
    close(sock);
    return 0; 
}
