# include <stdio.h>
# include <conio.h>
# include <ctype.h>

int main()
{
    char ch;
    printf ("enter chars, enter a period to stop\n");
    putchar('A');
    do
    {
        ch = getch ();
        //printf("\n");
        if ( islower (ch) )
        putchar (toupper (ch));
        else
        putchar (tolower (ch));
    } while (ch != '.'); /* use a period to stop */
    return 0;
}
