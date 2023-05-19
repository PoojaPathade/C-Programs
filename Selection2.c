#include<stdio.h>

int main()
{
    int Std = 0;

    printf("Enter the number :\n");
    scanf("%d",&Std);

    switch(Std)
    {
        case 1:
            printf("Your Eaxm is at 1 PM\n");
            break;
        
        case 2:
            printf("Your Eaxm is at 2 PM\n");
            break;

        case 3:
            printf("Your Eaxm is at 3 PM\n");
            break;
        
        case 4:
            printf("Your Eaxm is at 4 PM\n");
            break;

        default:
            printf("Invalid standard\n");

    }

    return 0;
}
