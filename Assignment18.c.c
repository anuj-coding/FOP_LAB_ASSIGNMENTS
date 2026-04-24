#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter another string for equality check: ");
    scanf("%s", str2);

    // Length of string
    len = strlen(str1);
    printf("Length of string = %d\n", len);

    // Reverse string
    for(i = 0; i < len; i++)
    {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reversed string = %s\n", rev);

    // Palindrome check
    if(strcmp(str1, rev) == 0)
        printf("The string is a Palindrome\n");
    else
        printf("The string is not a Palindrome\n");

    // Equality check
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // Substring check
    if(strstr(str1, str2) != NULL)
        printf("Substring found in main string\n");
    else
        printf("Substring not found in main string\n");

    return 0;
}
