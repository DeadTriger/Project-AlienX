// Example program to demonstrate sprintf()
#include<stdio.h>
int main()
{
	char buffer[50];
	int a = 10, b = 20, c;
	c = a + b;
	//stores result,no Print
	sprintf(buffer, "Sum of %d and %d is %d", a, b, c);

	printf("%s", buffer);

	return 0;
}


//fprintf
#include<stdio.h>
int main()
{
    int i, n=2;
    char str[50];
 
    //open file sample.txt in write mode
    FILE *fptr = fopen("sample.txt", "w");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }
 
    for (i=0; i<n; i++)
    {
        puts("Enter a name");
        gets(str);
        fprintf(fptr,"%d.%s\n", i, str);
    }
    fclose(fptr);
 
    return 0;
}