#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    /* Open source file in read mode */
    source = fopen("source.txt", "r");

    /* Open destination file in write mode */
    destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    /* Copy contents */
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
