
#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0,i;
    scanf("%[^\n]%*c", str);
    for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			count++;	
		} 
	}	
    printf("TOTAL WORDS IN STRING IS: %d",count+1);
    return 0;
}