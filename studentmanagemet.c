#include <stdio.h>
#include <stdlib.h>

struct student
{
    char firname[30];
    char lasname[30];
    char usn[30];
    int age;
    char branch[10];
    char gender[10];
    float sgpa1;
    float sgpa2;
    float sgpa3;
    float sgpa4;
    float sgpa5;
    float sgpa6;
    float sgpa7;
    float sgpa8;
    float cgpa1;
    float cgpa2;
    float cgpa3;
    float cgpa4;
    float finalcgpa;
    int backs1;
    int backs2;
    int backs3;
    int backs4;
};
void main()
{
    int i,n;
    struct student s[i];
    printf("Enter the number of students information to be registered\n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("*******INFORMATION OF STUDENT %d********\n",i);
        printf("    Enter the first name of student :");
        scanf("%s",s[i].firname);
        printf("    Enter the last name of student :");
        scanf("%s",s[i].lasname);

        printf("    Enter the USN of the student :");
        scanf("%s",s[i].usn);
        printf("    Enter the age of the student :");
        scanf("%d",&s[i].age);
        printf("    Enter the branch :");
        scanf("%s",&s[i].branch);
        printf("    Enter the gender :");
        scanf("%s",s[i].gender);
        printf("\n");
        printf("    Enter the 1st sem sgpa :");
        scanf("%f",&s[i].sgpa1);
        printf("    Enter the 2nd sem sgpa :");
        scanf("%f",&s[i].sgpa2);
        printf("    Enter number of backlogs of 1st year :");
        scanf("%d",&s[i].backs1);
        printf("\n");

        s[i].cgpa1=(s[i].sgpa1+s[i].sgpa2)/2;

        printf("    Enter the 3rd sem sgpa :");
        scanf("%f",&s[i].sgpa3);
        printf("    Enter the 4th sem sgpa :");
        scanf("%f",&s[i].sgpa4);
        printf("    Enter number of backlogs of 2st year :");
        scanf("%d",&s[i].backs2);
        printf("\n");

        s[i].cgpa2=(s[i].sgpa3+s[i].sgpa4)/2;

        printf("    Enter the 5th sem sgpa :");
        scanf("%f",&s[i].sgpa5);
        printf("    Enter the 6th sem sgpa :");
        scanf("%f",&s[i].sgpa6);
        printf("    Enter number of backlogs of 3st year :");
        scanf("%d",&s[i].backs3);
        printf("\n");

        s[i].cgpa3=(s[i].sgpa5+s[i].sgpa6)/2;

        printf("    Enter the 7th sem sgpa :");
        scanf("%f",&s[i].sgpa7);
        printf("    Enter the 8th sem sgpa :");
        scanf("%f",&s[i].sgpa8);
        printf("    Enter number of backlogs of 4st year :");
        scanf("%d",&s[i].backs4);
        printf("\n\n");

        s[i].cgpa4=(s[i].sgpa7+s[i].sgpa8)/2;

        s[i].finalcgpa=(s[i].cgpa1+s[i].cgpa2+s[i].cgpa3+s[i].cgpa4)/4;
    }
        printf("==============================\n");
        printf("******STUDENT INFORMATION*****\n");
        printf("==============================\n\n");
        for(i=1;i<=n;i++)
        {
            printf("\t\tSTUDENT %d\t\t\n\n",i);

            printf("    NAME: %s %s\n",s[i].firname,s[i].lasname);
            printf("    USN: %s\n",s[i].usn);
            printf("    AGE: %d\n",s[i].age);
            printf("    BRANCH OPTED: %s\n",s[i].branch);
            printf("    GENDER: %s\n",s[i].gender);


            printf("    1st SEM SPGA: %f\n",s[i].sgpa1);
            printf("    2nd SEM SGPA: %f\n",s[i].sgpa2);
            printf("    1st YEAR BACKLOGS: %d\n",s[i].backs1);
            printf("    1st YEAR CGPA: %f\n\n",s[i].cgpa1);

            printf("    3rd SEM SPGA: %f\n",s[i].sgpa3);
            printf("    4th SEM SGPA: %f\n",s[i].sgpa4);
            printf("    2nd YEAR BACKLOGS: %d\n",s[i].backs2);
            printf("    2nd YEAR CGPA: %f\n\n",s[i].cgpa2);

            printf("    5th SEM SPGA: %f\n",s[i].sgpa5);
            printf("    6th SEM SGPA: %f\n",s[i].sgpa6);
            printf("    3rd YEAR BACKLOGS: %d\n",s[i].backs3);
            printf("    3rd YEAR CGPA: %f\n\n",s[i].cgpa3);

            printf("    7th SEM SPGA: %f\n",s[i].sgpa7);
            printf("    8th SEM SGPA: %f\n",s[i].sgpa8);
            printf("    4th YEAR BACKLOGS: %d\n",s[i].backs4);
            printf("    4th YEAR CGPA: %f\n\n",s[i].cgpa4);

            printf("    FINAL CGPA: %f\n\n",s[i].finalcgpa);


        }
}
