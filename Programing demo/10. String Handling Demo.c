# include <stdio.h>
# include <string.h>
void main(void)
{
    char s1 [80], s2 [80];
    gets (s1);
    gets (s2);
    printf ("lengths: %d %d\n",
            strlen (s1), strlen (s2));
    if (! strcmp (s1, s2))
/* strcmp () returns false if the strings are equal, */
    {
        /* use ! to reverse the condition*/
        printf("two strings are equal \n");
    }
    strcat (s1, s2);
    printf ("%s\n", s1);

    strcpy (s1,"this is a test\n");
    printf (s1);

    if (strchr ("hello", 'h'))
        printf("h is in hello\n");

    if (strstr ("here I am, this is me", "him"))
        printf ("found him");
}
