v#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

<<<<<<< HEAD
    printf("Hello,, %s %s!\n", first, last);
=======
    printf("Hello %s %s!\n", first, last);
>>>>>>> 7ee8eba17e8636d771aca2fce0100b53956797cf
    return 0;
}
