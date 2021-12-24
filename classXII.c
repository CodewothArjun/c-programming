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

// #include <conio.h>
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     char name[20];
//     int id;
//     int class;
//     int age;
// };
// void main()
// {
//     // calling the structure
//     struct student std1;
//     // taking an input from user
//     printf("Enter your name: ");
//     scanf("%s", &std1.name);
//     printf("Enter your id: ");
//     scanf("%s", &std1.id);
//     printf("Enter your class: ");
//     scanf("%s", &std1.class);
//     printf("Enter your age ");
//     scanf("%s", &std1.age);
//     // printing the data
//     printf("%s", std1.name);
//     printf("%s", std1.id);
//     printf("%s", std1.class);
//     printf("%s", std1.age);
//     getch();
// }

// A c program to assign values to the member of structure and to display them on the screen
// #include <stdio.h>
// #include <conio.h>
// #include <string.h>
// struct student
// {
//     char name[10];
//     unsigned int roll_no;
//     float mark;
// };
// int main()
// {
//     struct student stu1;
//     clrscr();
//     strcpy(stu1.name, "Arjun");
//     stu1.roll_no = 1;
//     stu1.mark = 98;
//     printf("\n The name of student is %s ", stu1.name);
//     printf("\n The roll_no %u", stu1.roll_no);
//     printf("\n The mark obtained id %f", stu1.mark);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// // clscr();
// void main(){
//     printf("Arjun Rokkha");
// }

// Machine generated alternative text:
// #include <stdio.h>

// #include <string.h>
// struct student
// {
//     char name[10];
//     unsigned int roll_no;
//     float mark;
// };
// int main()
// {
//     struct student stu1;
//     strcpy(stu1.name, "Arjun");
//     stu1.roll_no = 1;
//     stu1.mark = 98;
//     printf("\n The name is the student is %s", stu1.name);
//     printf("\n The roll_no %u", stu1.roll_no);
//     printf("\n The mark obtained id %f", stu1.mark);
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int reverse(int);
// int main()
// {
//     int number, reverse_number = 0;
//     printf("Enter a number to reverse value:"); // allow user to enter a number
//     scanf("%d", &number);                       // takes value from user
//     reverse_number = reverse(number);
//     printf("Reverse of entered number is: %d", reverse_number); // print reverse value
//     return 0;
// }
// reverse(int number)
// {
//     static reverse_number = 0;
//     if (number == 0)
//         return 0;
//     reverse_number = reverse_number * 10;
//     reverse_number = reverse_number + number % 10;
//     reverse(number / 10);
//     return reverse_number;
// }

// Function of c
// reverse of a number
// #include <stdio.h>
// #include <conio.h>
// int reverse(int);
// void main()
// {
//     int rem, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int s = reverse(n);

//     printf("Reverse of %d is %d", n, s);
//     getch();
// }

// int reverse(int n)
// {
//     int rem, rev = 0;
//     while (n != 0)
//     {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n /= 10;
//     }
//     return rev;
// }

// // write a c program to find the factorial of a positive number.

// #include <stdio.h>
// int main()
// {
//     int i, factorial = 1, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = n; i > 0; i--)
//     {
//         factorial = factorial * i;
//     }
//     printf("The factorial of %d = %d", n, factorial);
//     return 0;
// }

// // through function
// #include <stdio.h>
// int factorial(int);
// int main()
// {
//     int n, fact;
//     printf("Enter a number= ");
//     scanf("%d", &n);
//     fact = factorial(n);
//     printf("The factorial of %d is %d", n, fact);
//     return 0;
// }
// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (n * factorial(n - 1));
//     }
// }

// #include <conio.h>
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//   char name[20];
//   int id;
//   int class;
//   int age;
// };
// void main()
// {
//   // calling the structure
//   struct student std1;
//   // taking an input from user
//   printf("Enter your name: ");
//   scanf("%s", &std1.name);
//   printf("Enter your id: ");
//   scanf("%s", &std1.id);
//   printf("Enter your class: ");
//   scanf("%s", &std1.class);
//   printf("Enter your age ");
//   scanf("%s", &std1.age);
//   // printing the data
//   printf("%s", std1.name);
//   printf("%s", std1.id);
//   printf("%s", std1.class);
//   printf("%s", std1.age);
//   getch();
// }

// // To calculate the maximum temperature and minimum temperature of this 7 days..
// #include <stdio.h>
// int calculateMax(int maxTemp[]);
// int calculateMin(int minTemp[]);
// float calculateAverage(int maxTemp[], int minTemp[]);
// void main()
// {
//   int maxTemp[7], minTemp[7];
//   int i, highestTemp, lowestTemp;
//   float average;
//   // taking input of 7 days maximum and minimum temperature
//   for (i = 0; i < 7; i++)
//   {
//     printf("Enter max and min temp of day %d=", i + 1);
//     scanf("%d %d", &maxTemp[i], &minTemp[i]);
//   }
//   // calculating highest temperature using function
//   highestTemp = calculateMax(maxTemp);
//   // calculating lowest temperature using function
//   lowestTemp = calculateMin(minTemp);
//   // calculating average temperature using function
//   average = calculateAverage(maxTemp, minTemp);

//   printf("Highest Temperature=%d \n", highestTemp);
//   printf("Lowest Temperature=%d \n", lowestTemp);
//   printf("Average Temperature=%.2f \n", average);
// }
// int calculateMax(int temp[])
// {
//   int h = temp[0];
//   int i; // for loop
//   for (i = 0; i < 7; i++)
//   {
//     if (h < temp[i])
//     {
//       h = temp[i];
//     }
//   }
//   return h;
// }
// int calculateMin(int temp[])
// {
//   int l = temp[0];
//   int i; // for loop
//   for (i = 0; i < 7; i++)
//   {
//     if (l > temp[i])
//     {
//       l = temp[i];
//     }
//   }
//   return l;
// }
// float calculateAverage(int maxTemp[], int minTemp[])
// {
//   int i;
//   float average, eachDayAverage, eachDayAvgSum = 0;
//   for (i = 0; i < 7; i++)
//   {
//     // max and min temp sum then
//     // dividing by 2.0 to convert int to float
//     eachDayAverage = (maxTemp[i] + minTemp[i]) / 2.0;
//     // calculating
//     eachDayAvgSum = eachDayAvgSum + eachDayAverage;
//   }
//   average = eachDayAvgSum / 7; // enclusive type casting to float
//   return average;
// }

// struct in c
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     // Now we are going to write pointer array
//     int c = 234, *p;
//     p = &c;
//     printf("p=%u\n", p);
//     p++;
//     printf("p=%u", p);
//     getch();
// }

// #include <stdio.h>
// #include <conio.h>
// #include <string.h>
// struct
// {
//     char f_name[50];
//     char l_name[50];
//     int roll_no;
// } std[100];
// void main()
// {
//     std[100];
//     int i, t;
//     printf("enter total number of student: ");
//     scanf("%d", &t);
//     for (i = 0; i < t; i++)
//     {
//         printf("\n enter %d student first name: ", i + 1);
//         scanf("%s", &std[i].f_name);
//         printf("\n enter %d student last name: ", i + 1);
//         scanf("%s", &std[i].l_name);
//         printf("\n enter %d student roll number: ", i + 1);
//         scanf("%d", &std[i].roll_no);
//     }
//     printf("\n  Detail of students");
//     printf("\n  First Name Last Name \t \t Roll Number \n");
//     for (i = 0; i < t; i++)
//     {
//         printf("%s  %s \t \t  %d", std[i].f_name, std[i].l_name, std[i].roll_no);
//         printf("\n ");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5, *p;
//     p = &a;

//     // a=p;
//     // taking or storing
//     // printf("The memory address of p is %d \n", &p);
//     printf("The memory address of a is %u \n", p);
//     printf("The content if the address held in p is %d \n", *p);
//     *p = 59;
//     printf("The new value of a is %d", a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int b, *t;
//   t = &b;
//   printf("The memory location of b is %x", t);
//   printf("\n The memory location of b is %u", t);
// }

// // factorial
// // write a c program to find the factorial of a positive number.

// #include <stdio.h>
// int main()
// {
//   int i, factorial = 1, n;
//   printf("Enter a number: ");
//   scanf("%d", &n);
//   for (i = n; i > 0; i--)
//   {
//     factorial = factorial * i;
//   }
//   printf("The factorial of %d = %d", n, factorial);
//   return 0;
// }

// // through function
// #include <stdio.h>
// int factorial(int);
// int main()
// {
//   int n, fact;
//   printf("Enter a number= ");
//   scanf("%d", &n);
//   fact = factorial(n);
//   printf("The factorial of %d is %d", n, fact);
//   return 0;
// }
// int factorial(int n)
// {
//   if (n == 0 || n == 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return (n * factorial(n - 1));
//   }
// }

// // reverse of a positive number.
// #include <stdio.h>
// #include <conio.h>
// int Reverse(int n);

// int Reverse(int n)
// {
//   int sum = 0;
//   while (n != 0)
//   {
//     sum = (sum * 10) + (n % 10);
//     n /= 10;
//   }
//   return sum;
// }

// int main()
// {
//   int rev, num;
//   clrscr();
//   printf("Enter a Positive Number: ");
//   scanf("%d", &num);
//   rev = Reverse(num);
//   printf("The Reverse of given number %d is: %d", num, rev);
//   return 0;
// }

// Enter a emp name,emp id and salary and print the higest salary of a employee.
// #include <stdio.h>
// #include <conio.h>
// #include <string.h>
// struct employee
// {
//   char name[50];
//   int id;
//   float salary;
// };
// void main()
// {
//   struct employee emp[100];
//   float highest = 0;
//   int i, index;
//   for (i = 0; i < 3; i++)
//   {
//     printf("Enter emp id,emp name and salary %d :", i + 1);
//     scanf("%d %s %f", &emp[i].id, &emp[i].name, &emp[i].salary);
//   }
//   for (i = 0; i < 3; i++)
//   {
//     if (highest < emp[i].salary)
//     {
//       index = i;
//       highest = emp[i].salary;
//     }
//   }
//   printf("\n Id \t name \t salary");
//   printf("\n %d \t %s \t %.2f", emp[index].id, emp[index].name, emp[index].salary);
//   getch();
// }

// #include <stdio.h>
// #include <conio.h>
// #include <string.h>
// struct employee
// {
//   int emp_id;
//   char emp_name[1000];
//   float emp_salary;
// };
// void main()
// {
//   struct employee emp[3];
//   struct employee highest;
//   int i;
//   for (i = 0; i < 3; i++)
//   {
//     printf("Enter emp id,emp name and salary %d :", i + 1);
//     scanf("%d %s %f", &emp[i].emp_id, &emp[i].emp_name, &emp[i].emp_salary);
//   }
//   highest.emp_salary = 0;
//   for (i = 0; i < 3; i++)
//   {
//     if (highest.emp_salary < emp[i].emp_salary)
//     {
//       strcpy(highest.emp_name, emp[i].emp_name);
//       highest.emp_id = emp[i].emp_id;
//       highest.emp_salary = emp[i].emp_salary;
//     }
//   }
//   printf("%d %s %f", highest.emp_id, highest.emp_name, highest.emp_salary);
//   getch();
// }

// unions in c
#include <stdio.h>
union sample
{
  int a;
  char b[2];

} s;

int main()
{
  s.a = 10;
  printf("\n a=%d", s.a);
  printf("\n b[0]=%d", s.b[0]);
  printf("\n b[1]=%d", s.b[1]);
  s.b[0] = 'a';
  s.b[1] = 'b';
  printf("\n a=%d and b[0]=%c", s.a, s.b[0], s.b[1]);
  return 0;
}





// write a program to calculate the prime number and display it.
#include<stdio.h>
#include<conio.h>
int prime(int);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}

int prime(int n) {
    int i, j;
    int count=0;
    printf("\nprime numbers = ");
    for(i=1; i<=n; i++){
      count=0;   
      for(j=2; j<i; j++) {
        if(i%j==0) {
           count++;
        }
    }
     if(count==0) {
           printf("%d ,", i);
    }
    }
    
    return count;
}
