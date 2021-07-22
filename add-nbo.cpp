#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char *argv[]){

    FILE *fd; 
    
    uint32_t a, b; 
    
    fd = fopen(argv[1], "r");
    fread(&a, sizeof(a), 1, fd);
    fd = fopen(argv[2], "r");
    fread(&b, sizeof(b), 1, fd);

    a = ntohl(a);
    b = ntohl(b);
    
    printf("%d(0x%x)+%d(0x%x)=%d(0x%x)\n", a, a, b, b, a+b, a+b);
    
    return 0;
}
