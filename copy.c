#include<stdio.h>
#include<conio.h>
void main()
{
  int id;
char name[50], add[50];
FILE *fp, *fpt;
fp=fopen("original.txt","r");
fpt=fopen("dublicate.txt","w");
while (fscanf(fp,"%d %s %s"&id,name,add)!=EOF)
{
printf(fpt,"%d \t %s \t %s \t \n," id,name,add);
}
printf("\n Data copied);
  fclose(fp);
fclose(fpt);
getch();
}
