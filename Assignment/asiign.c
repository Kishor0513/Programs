#include <stdio.h>
int FinalMark();

int main()
{
    FinalMark();
    printf("\n");

}
int FinalMark()
{
    int Id[10];
    int sum[10];
    int s[5];
    int i;
    for(int i=0;i<10;i++)
    {
        printf("Enter the student Id %d: ",i+1);
        scanf("%d",&Id[i]);
        printf("Enter the marks of Student %d:\n",Id[i]);
        for(int j=0;j<5;j++)
        {
            scanf("%d",&s[j]);
            sum[i]=s[0]+s[2]+s[3]+s[4]+s[5];
        }
    }  
    
    int a,b,add=0,first=0,second=0,third=0;

while(1)
    {
    printf("What operation do you need to do of the data enter the number accordingly as mentioned below:\n");
    printf("To find top three scorers of the batch enter 1.\n");
    printf("To sort the data on descending order of total marks enter 2.\n");
    printf("To find the average marks of the batch enter 3.\n");
    printf("To find all students scoring above 70 percent enter 4.\n");
    printf("Enter 5 to quit\n");

    scanf("%d",&a);

    if (a==1)
    {
         for(int i=0;i<10;i++)
         {
             if(sum[i]>first)
                {
                    third=second;
                    second=first;
                    first=sum[i];

                }
        else if(sum[i]>second)
        {
            second=sum[i];
        }
        else if(sum[i]>third)
        {
            third=sum[i];
        }
    }
    printf("first highest marks of student of id %d is %d \n",Id[i],first);
    printf("second highest marks of student of id %d is %d \n",Id[i],second);
    printf("third highest marks of student of id %d is %d \n",Id[i],third);
    }

    else if (a==2)
    {
    for(i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(sum[i]<sum[j])
            {
                b=sum[i];
                sum[i]=sum[j];
                sum[j]=b;
            }

        }
    }
        printf("The sorted the data on descending order of total marks are:\n" );
        for (i=0;i<10;i++)
         {
             printf("%d ",sum[i]);
         }
    }

    else if (a==3)
    {
        add=sum[0]+sum[1]+sum[2]+sum[3]+sum[4]+sum[5]+sum[6]+sum[7]+sum[8]+sum[9];
        float Average=(float)add/10;
        printf("The average marks of the batch is %f\n",Average);
    }

    else if (a==4)
    {
        printf("Students scoring above 70 percent are:\n");
        for(i=0;i<9;i++)
        {
            if (sum[i]>350)
                printf("Id %d with total marks %d\n",Id[i],sum[i]);
        }
    }
    else if (a==5)
    {
        break;
    }
    else
    {
      printf("Invalid Input\n");
    }
    printf("\n");
    i++;
    }
    printf("\n");
    return 0 ;
}
