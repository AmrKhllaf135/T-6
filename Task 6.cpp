#include<stdio.h>
char* reverse_String(char *ch)
{
	static int i = 0;
	static char RevCh[20];
	
	
	if(*ch)
	{
		reverse_String(ch + 1);
		RevCh[i++] = *ch;
	}
	return RevCh;
}
int main(void)
{
	

FILE *fp;
fp  = fopen ("D:/SIC Tasks/C Language/Task 6/Task 6.txt", "r+");
if(fp != NULL)
   {
      printf("File opened successfully\n");   
                   
   }
char ch [200] = {0};
fgets(ch , 200 , fp );
printf("String input from file : ");
puts(ch);
printf("The Reversed string is : %s \n\n" , reverse_String(ch));
printf("the reversed string is added to the file successfully \n", fp);
fclose (fp);
fp  = fopen ("D:/SIC Tasks/C Language/Task 6/Task 6.txt", "a");
fprintf(fp , reverse_String(ch));
fclose(fp);







}

