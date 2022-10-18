# include <stdio.h>
# include <string.h>
# include <ctype.h>
main(void)
{
    char str[80];
    //takes input here
    gets (str);
    //displays the length of the string
    printf ("length is %d", strlen(str));
    //displays the string itself
    puts("\n");
    puts(str);
    return 0;
}
