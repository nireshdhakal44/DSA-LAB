#include<stdio.h>
#include<conio.h>
struct student
{
  int roll;
  char name[10];
  char sec;
};
typedef struct student st;
int main()
{
    st s1;

        printf("\nEnter the roll of Student1 \t" );
        scanf("%d", &s1.roll);

        printf("Enter the name of Student1\t");
        scanf("%s", s1.name);

        printf("Enter the section of Student1 \t");
        scanf("%S",&s1.sec);

        
        printf("\nThe name, roll number and the section of student 1 is \n %s,\n %d, \n %c", s1.name,s1.roll,s1.sec);

  return 0;
}

