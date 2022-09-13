#include<stdio.h>


int main()
{
    char s[30];
    char chk;/*to check if string value equal exit */
    do {

	printf("Enter what U want >");
	gets(s);
	chk=(strcmp(s,"exit"));
	if (chk!=0) {
	    printf("You said: %s \n", s);
	}

    } while (chk!=0);
    printf("Good Bye :)\n");

    return 0;
}
