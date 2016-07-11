#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct data
{
	char lat[];
	char lon[];
	char time[];
};
int main()
{
	int i;
	char s[35];
	FILE*fp;
	struct data b1;
	rewind(fp);
	fp=fopen("d:\\test\\export.gpx","ab+");
 	system("cls");
	while(1)
	{
		FILE *fp1;
		fread(&b1,sizeof(b1),1,fp);
		if(feof(fp))
		break;
		else
		{
			fseek(fp1,sizeof(b1),SEEK_SET);
			rewind(fp);
			while(!((*(fp1+i)=='l')&&(*(fp1+i+1)=='a')&&(*(fp1+i+1)=='t')))
			{
				i++;
			}
			strncpy(s,fp1+i,34);
			s[35]='\0';
			printf("%s\n",s);			
		}
	}
fclose(fp);
return 0;
}

