#include <stdio.h>
#include <string.h>
void main()
{
	int i,j=0,k=0,len=0,x;
	
	char s[100], r[10][20],temp;
	
	gets(s);	//scanf("%[^\n]s",&s);
	len = strlen(s);
	
	for(i=0;i<len;i++)
	{
		if(s[i]==' ')
		{
			r[k][j] = '\0';
			k++;
			j=0;
		}
		else
		{
			r[k][j] = s[i];
			j++;
		}
	}
	r[k][j]='\0';
	
	for(i=0;i<=k;i++)
	{
		len = strlen(r[i]);
		
		for(j=0, x=len-1; j<x; j++,x--)
		{
			temp = r[i][j];
			r[i][j] = r[i][x];
			r[i][x] = temp;
		}
	}
	
	for(i=0;i<=k;i++)
		printf("%s ", r[i]);
}

/*void reverse(char [], int, int);
int main()
{
    char str1[20];
    int size;
 
    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}
 
void reverse(char str1[], int index, int size)
{
    char temp;
    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;
    if (index == size / 2)
    {
        return;
    }
    reverse(str1, index + 1, size);
}
/*
#include<stdio.h>
void main()
{
	int n,i,j,k,sum=0,digit;
	scanf("%d",&n);
	/*while(n>0)
	{
		digit = n%10;
		sum += digit;
		n = n/10;
	}
	printf("Sum of digits are: %d",sum);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			k = 2;
		else
			k = 1;
		
		for(j=1;j<=i;j++,k+=2)
			printf("%d",k);
		printf("\n");
	}	
	for(i=1;i<=n;i++)
	{
		/*if(i%2==0)
			k = 2;
		else
			k = 1;
		
		for(j=1;j<=i;j++)
			printf("%d",j%2);
		printf("\n");
	}
}*/
