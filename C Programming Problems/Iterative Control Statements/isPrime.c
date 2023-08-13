// C Program to Check Whether A Given Number is Prime or Not

// Header files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Check Whether is Prime or Not => ");
    scanf("%d", &num);

    int isPrime = num < 2 ? 0 : 1;

    // 1st Approach
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }


    // 2nd Approach
    // for (int i = 2; i <= num / 2; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         isPrime = 0;
    //         break;
    //     }
    // }


    if (isPrime)
        printf("\n%d is A Prime Number", num);
    else
        printf("\n%d is Not A Prime Number", num);


    getch();
    return 0;
}
// Main Function End
