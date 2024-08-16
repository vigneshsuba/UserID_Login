
// User-ID-Login-
//This Repository about Accessing User ID Login with Password verification using C Programming.
//This is my first project
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    int i;
    long user1,user2;
    char pass1[20],pass2[20],count=0,y,Y;
    printf("Kindly register your UserID:\n UserID:");
    scanf("%ld",&user1);
    printf("\nPassword filled with special character");
    cycle1:
    printf("\nPassword:");
    scanf("%s",&pass1);
    for(i=0;i<pass1[i];i++)
    {
        if(isalnum(pass1[i]))
            printf("\0");
        else
            count++;
    }
    if(count==0)
    {
        printf("Atleast one special character must be included");
        goto cycle1;
    }
    printf("\nLogin your UserID:");
    cycle3:
    printf("\nUserID:");
    scanf("%ld",&user2);
    cycle4:
    {printf("\nPassword:");
    scanf("%s",&pass2);}
    printf("%ld",user1);
    printf("%ld",user2);
    if(user1==user2)
    {
        printf("\nYour UserID is correct😉");
        if(strcmp(pass1,pass2)==0)
        {
            printf("\nYour Password is correct👌");
            printf("\nYou successfully login yourID");
        }
        else
        {
            printf("\nYour password is incorrect🧐");
            printf("\nKindly check your password");
            printf("\nIf you want to reEnter your password press 'y':");
            scanf("%s",&y);
            if(y=='y')
                goto cycle4;
            printf("Your register Existed");
        }
    }
    else
    {
        printf("\nUser ID is Incorrect🙄");
        printf("\nKindly check your UserID press 'Y':");
        scanf("%s",&y);
        if(Y=='Y')
            goto cycle3;
        printf("Your register Existed");
    }
}
