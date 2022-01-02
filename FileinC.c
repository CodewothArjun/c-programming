#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fptr;
    long length;
    fptr=fopen("d:\\myfile.txt","w+");
    fprintf(fptr,"Universal");
    rewind(fptr);
    fseekS(fptr,0,SEEK_END);
    length=ftell(fptr);
    printf("File size of myfile.txt is %Id bytes \n",length);
    fclose(fptr);
    getch();
}