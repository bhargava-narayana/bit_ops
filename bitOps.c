#include <stdio.h>
#include <string.h>

void bitSet(int input, int position) {
  int result =((input >> position) & 1);
  if(result == 1) 
          printf("\nbit %d in %d is set", position, input);
  else 
          printf("\nbit %d in %d NOT set", position, input);
}

void bitPalindrome(int input) {
  int reverse = 0, temp = input;
  while(temp != 0) {
    reverse = (reverse << 1) | (temp & 1);
    temp >>= 1;
  }
  if(reverse == input)
          printf("%d is a bit palindrome", input);
  else
          printf("%d is NOT a bit palindrome", input);
}

void binaryValue (int input) {
  int reminder=0, i=1, binary=0;;
  while(input != 0) {
          reminder=input%2;
          printf("\nreminder:%d",reminder);
          input/=2;
          printf(" input=%d",input);
          binary+=reminder*i;
          printf(" binary=%d",binary);
          i*=10;
          printf(" i=%d",i);
  }
  printf("\nbinary value = %d",binary);
}

void isPalindrome(int input) {
  int reminder, temp, reverse;
  temp = input;
  reverse = 0;
  while(temp != 0) {
          reverse = reverse * 10 + temp % 10;
          temp = temp / 10;
  }
  printf("\n");
  if(reverse == input)
          printf("%d is a palindrome", input);
  else
          printf("%d is NOT a palindrome", input);
  printf("\n");
}

void baseChange(long int input) {
  char base_digits[] = {'0', '1', '2', '3', '4', '5',
                        '6', '7', '8', '9', 'A', 'B',
                         'C', 'D', 'E', 'F'};
  int newValue[64];
  int reminder=0, i = 0, base;
  printf("\nenter base: ");
  scanf("%d",&base);
  while(input != 0){
    newValue[i] = input % base;
    input /= base;
    ++i;
  }
  printf("\ndecimal %ld in base %d= ",input, base);
  --i;
  for(; i >= 0; i--)
          printf("%c", base_digits[newValue[i]]);
  printf("\n");
}

int main() {
  char input;
  int ip, pos;
  printf("enter an integer: ");
  scanf("%d",&ip);
  printf("enter position: ");
  scanf("%d",&pos);

  //check bit set/reset at position
  bitSet(ip, pos);
  
  //binary value of integer
  binaryValue(ip);
  
  printf("\n");

  //bit palindrome
  bitPalindrome(ip);

  //integer palindrome
  isPalindrome(ip);
 
 //change base
  baseChange((long int)ip); 
  return 0;
}
