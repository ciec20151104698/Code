#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char lat[20];
	char lon[20];
	char time[30];
	int i=0;
	int len=NULL;
	char *ch;
	FILE *fp;
	FILE *fp1;
	int l;
	if((fp=fopen("d:\\test\\export.gpx","r"))==NULL)
	{
		printf("没有找到");
		return(-1);
	}
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	ch=(char*)malloc(len);
	fseek(fp,0,SEEK_SET);
	fread(ch, 1, len, fp);
	fp=(fopen("d:\\test\\export.gpx","ab+"));
	fp1=(fopen("d:\\test\\export.csv","ab+"));
	do
	{
		if(ch[i]==' '&&ch[i+1]=='l'&&ch[i+2]=='a'&&ch[i+3]=='t')
		{
			strncpy(lat,ch+i+6,9);
			lat[9]='\0';
			strncpy(lon,ch+i+22,10);
			lon[10]='\0';
			strncpy(time,ch+i+44,21);
			time[21]='\0';
			fprintf(fp1,"%s %s %s\n",lat,lon,time);
			printf("经度%s纬度%s时间%s\n",lat,lon,time);
		}
		i++;
	}while(!((*(ch+i)=='<')&&(*(ch+i+1)=='/')&&(*(ch+i+2)=='t')&&(*(ch+i+3)=='r')&&(*(ch+i+4)=='k')&&(*(ch+i+5)=='>')));		
	free(ch);
	fclose(fp);
	fclose(fp1);
	return 0;
 } 
