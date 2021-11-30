// Program to input 10 numbers and display the largest and smallest among them.

// #include<stdio.h>
// int main()
// {
//     int i, n, lar,sm, elem;
//     printf ("Enter total number of elements : "); //displaying to ask the total no. of elements to enter
//     scanf ("%d", &elem);
//     printf ("Enter first number : ");
//     scanf ("%d", &n);
//     lar = n;
//     sm=n;
//     for (i=1; i<= elem -1 ; i++)
//     {
//         printf ("\n Enter another number : ");
//         scanf ("%d",&n);
//         if (n>lar)
//         lar=n;
//         if (n<sm)
//         sm=n;
//     }
//     printf ("\n The largest number is %d", lar);
//     printf ("\n The smallest number is %d", sm);
//     return 0;
// }

// Program to read the age of 40 students and count the number of students age between 15 to 22.
// #include <stdio.h>
// int main()
// {
//     int age[40];
//     int i, count = 0;
//     for (i = 0; i < 40; i++)
//     {
//         printf("Enter person %d age=", i + 1);
//         scanf("%d", &age[i]);
//     }
//     for (i = 0; i < 40; i++)
//     {
//         if (age[i] > 15 && age[i] < 22)
//         {
//             count++;
//         }
//     }
//     printf("count=%d", count);
//     return 0;
// }

// Program to input several numbers and arrange them in ascending order
// #include <stdio.h>
// int main()
// {
//     int num[50];
//     int temp, i, n, j;
//     printf("How many numbers ? ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (num[j] > num[j + 1])
//             {
//                 temp = num[j];
//                 num[j] = num[j + 1];
//                 num[j + i] = temp;
//             }
//         }
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("%d", num[i]);
//     }
//     return 0;
// }



#include <conio.h>
#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int id;
    int class;
    int age;
};
void main()
{
    // calling the structure
    struct student std1;
    // taking an input from user
    printf("Enter your name: ");
    scanf("%s", &std1.name);
    printf("Enter your id: ");
    scanf("%s", &std1.id);
    printf("Enter your class: ");
    scanf("%s", &std1.class);
    printf("Enter your age ");
    scanf("%s", &std1.age);
    // printing the data
    printf("%s", std1.name);
    printf("%s", std1.id);
    printf("%s", std1.class);
    printf("%s", std1.age);
    getch();
}
