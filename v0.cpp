#include <stdio.h>
#include <string.h> 
int main()
{
	char str[]="3+4";
	int l = str[0]-'0';
	int r = str[2]-'0';
	int res = l+r;
	printf("res =%d\n",res);
	return 0;
}
