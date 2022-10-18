#include <stdio.h>
int main()
{
    //printf("Hello there! we are writing in file today!");
   FILE *fp;
   fp = fopen("file1.txt", "w");//opening file
   if(fp==NULL)
   {
       printf("Error Creating File, System will terminate");
       return;
   }
   char letter='A';
   for (int i =0; i<26; i++)
   {
       fputc(letter,fp);//writing single character into file
       letter++;
   }

   fclose(fp);//closing file
}
