#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    int count = 0; 
  
        // Count the number of iterations to 
        // reach num = 0. 
        while (num!=0) 
        { 
            // This operation reduces length 
            // of every sequence of 1s by one. 
            num = (num & (num << 1)); 
  
            count++; 
        }

    printf("Length of longest consecutive ones is: ",  count);

    return 0;
}
