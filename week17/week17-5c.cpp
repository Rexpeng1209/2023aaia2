#include <stdio.h>
int main()
{
	char s[100];
	scanf("%s",s);
	for(int i=0; s[i]!=0;i++){
		if(s[i]!='2') printf("%c",s[i]);
	}
	printf("\n");
}