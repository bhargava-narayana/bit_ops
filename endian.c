#include <stdio.h>

int main(int argc, char *argv[])
{
        unsigned int i = 1;
        char *c;
        c = (char *)&i;
        if(*c)
                printf("little endian\n");
        else
                printf("big endian\n");

}
