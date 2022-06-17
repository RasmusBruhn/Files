#include <stdio.h>
#include "Files.h"

int main(int argc, char **argv)
{
    char *String = FIL_Load("TestFile.txt");

    if (String == NULL)
    {
        printf("Unable to load file: %s\n", FIL_GetError());
        return 0;
    }

    printf("%s\n", String);

    return 0;
}