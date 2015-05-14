#include <stdio.h>

unsigned int flip_bit(unsigned int input)
{
        return (~input);
}

int main(int argc, char *argv[])
{
        int N;
        unsigned int value;

        for(scanf("%d", &N); N; --N)
        {
                scanf("%u", &value);
                printf("%u's complement= %u\n", value, flip_bit(value));
        }
        return 0;
}
