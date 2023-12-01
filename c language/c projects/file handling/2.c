#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    FILE *fptr;
    char fname[20] = "test.txt";

    printf("\n\n Create a file (test.txt) and input text :\n");
    printf("----------------------------------------------\n");
    fptr = fopen(fname, "w");
    if (fptr == NULL)
    {
        printf("Error in opening file!");
        return -1;
    }
    printf("Input a sentence for the file : ");
    scanf(" %999[^\n]", str);  // Read up to 999 characters until a newline character is encountered
    fprintf(fptr, "%s", str);
    fclose(fptr);
    printf("\nThe file %s created successfully...!!\n\n", fname);
    return 0;
}