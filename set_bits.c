#include <stdio.h>
#include <stdbool.h>

int bit_count(int input)
{
        int count = 0;
        while(input)
        {
                if(input & 1)
                        count++;
                input >>= 1;
                printf("new input= %d\n",input);
        }
        return count;


}

bool is_Nth_bit_set(int input, int position)
{
        return(input & (1 <<(position-1)) ? true : false );
}

int main(int argc, char *argv[])
{
        int value;

        printf("enter value: ");
        scanf("%d", &value);
        /*
         * check for -ve and limit values
         */
        if(value < 0)
        {
                printf("invlaid input\n");
        }
        else {
                int result = bit_count(value);
                printf("num of set bits= %d\n",result);
        }

        printf("is_Nth_bit_set for bit 3= %d\n", is_Nth_bit_set(value, 3));
}
