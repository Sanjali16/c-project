# include<stdio.h>
#include<stdlib.h>
int main()
{ 
FILE *file1,*file2;
char  filename[100],c;
printf("enter the filename to open for reading\n") ;
scanf("%s",filename); 
//open one file for reading
file1=fopen(filename,"r");
if(file1==NULL)
{ 
printf("cannot one file%s\n",filename);
exit (0);
}
printf("enter the file to open for writing\n");
scanf("%s",filename);
//open another file for writing
file2=fopen(filename, "w");
if(file2 ==NULL) 
{ 
printf("cannot open file%s\n",filename);
exit(0);
}
//read contest from file
c=getc(file1);
while(c!=EOF);
{ 
putc(c , file2);
c=fgetc(file1);
}
printf("\n contents coiped to %s", filename);
fclose(file1);
fclose(file2);
return 0;
}
