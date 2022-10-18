#include<stdio.h>
struct stu
{
    char name[30];
    int roll;
    float marks;
};

int main()
{
    struct stu s[10],temp;
    int sum=0;
    float avg;
    float percentage;
    int num:
   
    
    for(int i=0;i< 10;i++)
    {
        printf("Enter name, roll and marks of student:\n");
        scanf("%s%d%f",s[i].name, &s[i].roll, &s[i].marks);
    }
    
    
    printf("Enter a number:\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        // Average
   
            for(int i=0;i<10;i++)
            {
                sum=sum+s[i].marks;
            }
            avg=sum/10;
            printf("\nAverage is %f",avg);
    
        break;
    case 2:
         // Sorting
        for(int i=0; i<10; i++)
        {
            for(int j=i+1; j< 10; j++)
            {
                if(s[i].marks<s[j].marks)
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        printf("\nSorted records are:\n");
        for(int i=0; i<10; i++)
        {
            printf("Name: %s\n", s[i].name);
            printf("Roll: %d\n", s[i].roll);
            printf("Marks: %0.2f\n\n", s[i].marks);
        }
    default:
        // above 70 marks
        for(int i=0; i<10; i++)
        {
            percentage=s[i].marks/500*100;
            if(percentage>=70)
            {
                printf("Name: %s\n", s[i].name);
                printf("Roll: %d\n", s[i].roll);
                printf("Marks: %0.2f\n\n", s[i].marks);
            
            }
        }  
        break;
    } 
    
    
    


          
           
   
    return 0;
}
