#include <stdio.h>
int FinalMark();

int main()
{
    FinalMark();
    printf("\n");

}
int FinalMark()
{
    int Id[10],i,s0[5],s1[5],s2[5],s3[5],s4[5],s5[5],s6[5],s7[5],s8[5],s9[5];

    for(i=0;i<10;i++)
    {
        printf("Enter the student ID %d: ",i+1);
        scanf("%d",&Id[i]);
    }
    printf("\n");
    printf("Enter the marks of every subject of student with ID %d:\n",Id[0]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s0[i]);
    }
    printf("Enter the marks of every subject of student with ID %d:\n",Id[1]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s1[i]);
    }
    printf("Enter the marks of every subject of student with ID %d:\n",Id[2]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s2[i]);
    }
    printf("Enter the marks of every subject of student with ID %d:\n",Id[3]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s3[i]);
    }
    printf("Enter the marks of every subject of student with ID %d:\n",Id[4]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s4[i]);
    }
    printf("Enter the marks of every subject of student with ID %d:\n",Id[5]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s5[i]);
    }
    printf("Enter the marks of every subject of student with ID %d:\n",Id[6]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s6[i]);
    }
    printf("Enter the marks of every subject of student with ID %d:\n",Id[7]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s7[i]);
    }
    printf("Enter the marks of every subject of student with ID %d:\n",Id[8]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s8[i]);
    }
    printf("Enter the marks of every subject of student with ID %d:\n",Id[9]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s9[i]);
    }
    int num,sum[10],num1,total=0,first=0,second=0,third=0;


    sum[0]=s0[0]+s0[1]+s0[2]+s0[3]+s0[4];
    sum[1]=s1[0]+s1[1]+s1[2]+s1[3]+s1[4];
    sum[2]=s2[0]+s2[1]+s2[2]+s2[3]+s2[4];
    sum[3]=s3[0]+s3[1]+s3[2]+s3[3]+s3[4];
    sum[4]=s4[0]+s4[1]+s4[2]+s4[3]+s4[4];
    sum[5]=s5[0]+s5[1]+s5[2]+s5[3]+s5[4];
    sum[6]=s6[0]+s6[1]+s6[2]+s6[3]+s6[4];
    sum[7]=s7[0]+s7[1]+s7[2]+s7[3]+s7[4];
    sum[8]=s8[0]+s8[1]+s8[2]+s8[3]+s8[4];
    sum[9]=s9[0]+s9[1]+s9[2]+s9[3]+s9[4];


    while(1)
    {
    printf("What operation do you need to do of the data enter the number accordingly as mentioned below:\n");
    printf("To find top three scorers of the batch enter 1.\n");
    printf("To sort the data on descending order of total marks enter 2.\n");
    printf("To find the average marks of the batch enter 3.\n");
    printf("To find all students scoring above 70 percent enter 4.\n");
    printf("Enter 5 to quit\n");

    scanf("%d",&num);

    if (num==1)
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

    else if (num==2)
    {
    for(i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(sum[i]<sum[j])
            {
                num1=sum[i];
                sum[i]=sum[j];
                sum[j]=num1;
            }

        }
    }
        printf("The sorted the data on descending order of total marks are:\n" );
        for (i=0;i<10;i++)
         {
             printf("%d ",sum[i]);
         }
    }

    else if (num==3)
    {
        total=sum[0]+sum[1]+sum[2]+sum[3]+sum[4]+sum[5]+sum[6]+sum[7]+sum[8]+sum[9];
        float Average=(float)total/10;
        printf("The average marks of the batch is %f\n",Average);
    }

    else if (num==4)
    {
        printf("Students scoring above 70 percent are:\n");
        for(i=0;i<9;i++)
        {
            if (sum[i]>350)
                printf("Id %d with total marks %d\n",Id[i],sum[i]);
        }
    }
    else if (num==5)
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
