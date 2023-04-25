#include <stdio.h>

main()
 
{
    int n, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
 
    int num= n;  

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (num == rev)
        printf("%d is a palindrome number=", num);
    else
        printf("%d is not a palindrome number=", num);
 
   
}
