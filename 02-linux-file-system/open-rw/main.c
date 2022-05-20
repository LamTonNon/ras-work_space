// C program to illustrate 
// I/O system Calls 
#include<stdio.h> 
#include<string.h> 
#include<unistd.h> 
#include<fcntl.h> 
  
int main (void) 
{ 
    int fd; 
    int numb_read, numb_write;
    char buf1[13] = "hello world\n"; 
  
    // assume foobar.txt is already created 
    //fd: stand for file  descriptor
    //fd = open("hello.txt", O_RDWR | O_CREAT , 0667);         
    
    fd = open("hello.txt", O_RDWR | O_CREAT );         
    if (-1 == fd) { 
	printf("open() hello.txt failed\n");
    }      

    numb_write = write(fd, buf1, strlen(buf1));
    printf("Write %d bytes to hello.txt\n", numb_write);
  
    //lseek(fd, 2, SEEK_SET);
    //write(fd, "AAAAAAAAAAAA", strlen("AAAAAAAAAAAA"));
    
    close(fd); 
  
    return 0; 
} 
