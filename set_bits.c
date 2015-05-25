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

//***Brian Kernighan's algorithm**
//
//Subtraction of 1 from a number toggles all 
//the bits (from right to left) till 
//the rightmost set bit(including the 
//righmost set bit). So if we subtract 
//a number by 1 and do bitwise & 
//with itself (n & (n-1)), we unset 
//the righmost set bit. If we do n & (n-1) 
//in a loop and count the no of times 
//loop executes we get the set bit count.
//
//
//1.  Initialize count: = 0
//2.  If integer n is not zero
//          (a) Do bitwise & with (n-1) and assign the 
//              value back to n
//              n: = n&(n-1)
//          (b) Increment count by 1
//          (c) go to step 2
//3.  Else return count
//
unsigned int bk_algorithm(int n)
{
       unsigned int count;

       count = 0;
       while(n)
       {
               n &= (n-1);
               count++;
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
                printf("%d is -ve input\n Using Brian-Kernighan's algorithm", value);
                printf("num of set bits= %d\n", bk_algorithm(value));
        }
        else {
                int result = bit_count(value);
                printf("num of set bits= %d\n",result);
        }

        printf("is_Nth_bit_set for bit 3= %d\n", is_Nth_bit_set(value, 3));
}
