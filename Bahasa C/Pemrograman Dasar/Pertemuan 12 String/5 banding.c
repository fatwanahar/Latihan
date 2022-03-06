#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char string1[]="ABCD";
	char string2[]="ABCD";
	char string3[]="abcd";
	int banding;
	//strcmp
	banding = strcmp(string1,string2);
	printf("Hasil strcmp : \n");
	if(banding==0)
	printf("%s sama dengan %s\n",string1,string2);
	else if(banding>0)
	printf("%s lebih besar dibanding %s\n",string1,string2);
	else
	printf("%s lebih kecil dibanding %s\n",string1,string2);
	printf("\n");
	//strncmp
	banding = strncmp(string1,string3,2);
	printf("Hasil strncmp dua karakter : \n");
	if(banding==0)
	printf("%s sama dengan %s\n",string1,string3);
	else if(banding>0)
	printf("%s lebih besar dibanding %s\n",string1,string3);
	else
	printf("%s lebih kecil dibanding %s\n",string1,string3);
	printf("\n"); 
	//strcmpi
	banding = strcmpi(string1,string3);
	printf("Hasil strcmpi : \n");
	if(banding==0)
		printf("%s sama dengan %s\n",string1,string3);
	else if(banding>0)
		printf("%s lebih besar dibanding %s\n",string1,string3);
	else
		printf("%s lebih kecil dibanding %s\n",string1,string3);
		printf("\n"); 
	//strnicmp
	banding = strnicmp(string1,string3,2);
	printf("Hasil strnicmp dua karakter : \n");
	if(banding==0)
		printf("%s sama dengan %s\n",string1,string3);
	else if(banding>0)
		printf("%s lebih besar dibanding %s\n",string1,string3);
	else
		printf("%s lebih kecil dibanding %s\n",string1,string3);
		printf("\n");
}
	


