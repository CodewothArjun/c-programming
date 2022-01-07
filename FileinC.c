// #include<stdio.h>
// #include<conio.h>
// void main(){
//     FILE *fptr;
//     long length;
//     fptr=fopen("d:\\myfile.txt","w+");
//     fprintf(fptr,"Universal");
//     rewind(fptr);
//     fseekS(fptr,0,SEEK_END);
//     length=ftell(fptr);
//     printf("File size of myfile.txt is %Id bytes \n",length);
//     fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void main() {
// 	char name[39];
// 	int std_no,mark,i,n;
// 	FILE *fptr1,*fptr2;
// 	fptr2=fopen("arjun.txt","r");
// 	fptr1=fopen("arjun12.txt","w");
// 	while(fscanf(fptr2,"%d %s %d",&std_no,&name,&mark)!=EOF) {
// 		printf("%d\t%s\t%d\n",std_no,name,mark);
// 		fprintf(fptr1,"%d\t%s\t%d\n",std_no,name,mark);
// 	}
// 	fclose(fptr1);
// 	fclose(fptr1);

// }


// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     FILE *fptr;
//     fptr = fopen("arjun.txt", "r");

//     if (fptr == NULL)
//     {
//         printf("File Cannot opened.");
//         return -1;
//     }
//     printf("File is opened successfully.");

//     if (fptr != NULL)
//     {
//         fclose(fptr);
//     }

//     char string;
//     while (fscanf(fptr, "%s", string) != EOF)
//     {

//         printf("%s", string);
//     }
//     getch();
// }

// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     FILE *Rec;
//     Rec = fopen("ajrun.txt", "w");

//     char name, add, choice;
//     int roll, mark, i, n;
//     printf("Enter a number of students = ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("%s %s %d %d", name, add, mark, roll);
//         scanf("%s %s %d %d", &name, &add, &mark, &roll);
//         fprintf(Rec, "%s\t %s\t %d\t %d\n", name, add, mark, roll);
//     }
//     fclose(Rec);

//     getch();
// }