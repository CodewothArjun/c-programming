#include <stdio.h>
#include <conio.h>
#include <string.h>
struct employee
{
  int emp_id;
  char emp_name[1000];
  float emp_salary;
};
void main()
{
  struct employee emp[3];
  struct employee highest;
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("Enter emp id,emp name and salary %d :", i + 1);
    scanf("%d %s %f", &emp[i].emp_id, &emp[i].emp_name, &emp[i].emp_salary);
  }
  highest.emp_salary = 0;
  for (i = 0; i < 3; i++)
  {
    if (highest.emp_salary < emp[i].emp_salary)
    {
      strcpy(highest.emp_name, emp[i].emp_name);
      highest.emp_id = emp[i].emp_id;
      highest.emp_salary = emp[i].emp_salary;
    }
  }
  printf("%d %s %f", highest.emp_id, highest.emp_name, highest.emp_salary);
  getch();
}




// #include <stdio.h>
// #include <string.h>

// // create struct with person1 variable
// struct Person
// {
//     char name[50];
//     int citNo;
//     float salary;
// } person1;

// int main()
// {

//     // assign value to name of person1
//     strcpy(person1.name, "George Orwell");

//     // assign values to other person1 variables
//     person1.citNo = 1984;
//     person1.salary = 2500;

//     // print struct variables
//     printf("Name: %s\n", person1.name);
//     printf("Citizenship No.: %d\n", person1.citNo);
//     printf("Salary: %.2f", person1.salary);

//     return 0;
// }

// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
// #include <stdio.h>

// int main() {
//   int values[5];

//   printf("Enter 5 integers: ");

//   // taking input and storing it in an array
//   for(int i = 0; i < 5; ++i) {
//      scanf("%d", &values[i]);
//   }

//   printf("Displaying integers: ");

//   // printing elements of an array
//   for(int i = 0; i < 5; ++i) {
//      printf("%d\n", values[i]);
//   }
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     char name[] = "Harry Potter";

//     printf("%c", *name);       // Output: H
//     printf("%c", *(name + 1)); // Output: a
//     printf("%c", *(name + 7)); // Output: o

//     char *namePtr;

//     namePtr = name;
//     printf("%c", *namePtr);       // Output: H
//     printf("%c", *(namePtr + 1)); // Output: a
//     printf("%c", *(namePtr + 7)); // Output: o
// }

// C program to store temperature of two cities of a week and display it.
// #include <stdio.h>
// const int CITY = 2;
// const int WEEK = 7;
// int main()
// {
//     int temperature[CITY][WEEK];

//     // Using nested loop to store values in a 2d array
//     for (int i = 0; i < CITY; ++i)
//     {
//         for (int j = 0; j < WEEK; ++j)
//         {
//             printf("City %d, Day %d: ", i + 1, j + 1);
//             scanf("%d", &temperature[i][j]);
//         }
//     }
//     printf("\nDisplaying values: \n\n");

//     // Using nested loop to display vlues of a 2d array
//     for (int i = 0; i < CITY; ++i)
//     {
//         for (int j = 0; j < WEEK; ++j)
//         {
//             printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char line[150];
//     int vowels, consonant, digit, space;

//     vowels = consonant = digit = space = 0;

//     printf("Enter a line of string: ");
//     fgets(line, sizeof(line), stdin);

//     for (int i = 0; line[i] != '\0'; ++i)
//     {
//         if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
//             line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
//             line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
//             line[i] == 'U')
//         {
//             ++vowels;
//         }
//         else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
//         {
//             ++consonant;
//         }
//         else if (line[i] >= '0' && line[i] <= '9')
//         {
//             ++digit;
//         }
//         else if (line[i] == ' ')
//         {
//             ++space;
//         }
//     }

//     printf("Vowels: %d", vowels);
//     printf("\nConsonants: %d", consonant);
//     printf("\nDigits: %d", digit);
//     printf("\nWhite spaces: %d", space);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[20];
//     char str2[20];

//     // copying the string "Apple" to the str1
//     strcpy(str1, "Apple");
//     printf("String str1: %s\n", str1);

//     // copying the string "Banana" to the str2
//     strcpy(str2, "Banana");
//     printf("String str2: %s\n", str2);

//     // copying the value of str2 to the string str1
//     strcpy(str1, str2);
//     printf("String str1: %s\n", str1);

//     return 0;
// }

// #include <stdio.h>
// /* Created a structure here. The name of the structure is
//  * StudentData.
//  */
// struct StudentData
// {
//     char *stu_name;
//     int stu_id;
//     int stu_age;
// };
// int main()
// {
//     /* student is the variable of structure StudentData*/
//     struct StudentData student;

//     /*Assigning the values of each struct member here*/
//     student.stu_name = "Steve";
//     student.stu_id = 1234;
//     student.stu_age = 30;

//     /* Displaying the values of struct members */
//     printf("Student Name is: %s", student.stu_name);
//     printf("\nStudent Id is: %d", student.stu_id);
//     printf("\nStudent Age is: %d", student.stu_age);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     // Variable declaration
//     int num = 10;

//     // Pointer declaration
//     int *p;

//     // Assigning address of num to the pointer p
//     p = #;

//     printf("Address of variable num is: %p", p);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
/* Pointer of integer type, this can hold the
//      * address of a integer type variable.
//      */
//     int *p;

//     int var = 10;

//     /* Assigning the address of variable var to the pointer
//      * p. The p can hold the address of var because var is
//      * an integer type variable.
//      */
//     p = &var;

//     printf("Value of variable var is: %d", var);
//     printf("\nValue of variable var is: %d", *p);
//     printf("\nAddress of variable var is: %p", &var);
//     printf("\nAddress of variable var is: %p", p);
//     printf("\nAddress of pointer p is: %p", &p);
//     return 0;
// }

// #include <stdio.h>
// struct student
// {
//     char name[20];
//     int id;
//     float marks;
// };
// void main()

// {
//     struct student s1, s2, s3;
//     int dummy;
//     printf("Enter the name, id, and marks of student 1 ");
//     scanf("%s %d %f", s1.name, &s1.id, &s1.marks);
//     scanf("%c", &dummy);
//     printf("Enter the name, id, and marks of student 2 ");
//     scanf("%s %d %f", s2.name, &s2.id, &s2.marks);
//     scanf("%c", &dummy);
//     printf("Enter the name, id, and marks of student 3 ");
//     scanf("%s %d %f", s3.name, &s3.id, &s3.marks);
//     scanf("%c", &dummy);
//     printf("Printing the details....\n");
//     printf("%s %d %f\n", s1.name, s1.id, s1.marks);
//     printf("%s %d %f\n", s2.name, s2.id, s2.marks);
//     printf("%s %d %f\n", s3.name, s3.id, s3.marks);
// }

// class 12 computer structure based c programming
// #include <stdio.h>
// #include <conio.h>
// struct employee
// {
//     char name[50];
//     char add[50];
// };
// void main()
// {
//     int a = 0;
//     struct employee e[5];
//     for (a = 0; a < 10; a++)
//     {
//         printf("\nEnter name of s.n. %d empoloyee:", a + 1);
//         scanf("%s", &e[a].name);
//         printf("\n Enter address of s.n. %d employee:", a + 1);
//         scanf("%s", &e[a].add);
//     }

//     printf("\n Name \t\t Address");
//     for (a = 0; a < 5; a++)
//     {
//         printf("\n %s \t\t %s", e[a].name, e[a].add);
//     }
//     getch();
// }
