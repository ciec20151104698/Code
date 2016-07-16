#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct data
{
	char lat[20];
	char lon[20];
	char time[30];
 } ;
int main()
{
	struct data b1;
	int i=0;
	int len=NULL;
	char *ch;
	FILE *fp;
	FILE *fp1;
	int l;
	if((fp=fopen("d:\\test\\export.gpx","r"))==NULL)
	{
		printf("未找到文件");
		return(-1);
	}
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	ch=(char*)malloc(len);
	fseek(fp,0,SEEK_SET);
	fread(ch, 1, len, fp);
	fp=(fopen("d:\\test\\export.gpx","ab+"));
	fp1=(fopen("d:\\test\\export.csv","ab+"));
	fprintf(fp1,"经度,纬度,时间");
	do
	{
		if(ch[i]==' '&&ch[i+1]=='l'&&ch[i+2]=='a'&&ch[i+3]=='t')
		{
			strncpy(b1.lat,ch+i+6,9);
			b1.lat[9]='\0';
			strncpy(b1.lon,ch+i+22,10);
			b1.lon[10]='\0';
			strncpy(b1.time,ch+i+44,21);
			b1.time[21]='\0';
			fprintf(fp1,"%s,%s,%s\n",b1.lat,b1.lon,b1.time);
			printf("经度%s纬度%s时间%s\n",b1.lat,b1.lon,b1.time);
		}
		i++;
	}while(!((ch[i])=='<')&&((ch[i+1])=='/')&&((ch[i+2])=='t')&&((ch[i+3])=='r')&&((ch[i+4])=='k')&&((ch[i+5])=='>')));		
	free(ch);
	fclose(fp);
	fclose(fp1);
	return 0;
 } 
