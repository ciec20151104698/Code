#include <stdlib.h>
#include <stdio.h>
struct data
{
	char lat[100];
	char lon[100];
	char time[100];
};
int main()
{
	
	char *s;											/*����Ҫ���ֽ��� */
	FILE *fp;											/*�ļ�ָ��*/
	int len;											/*���ȣ��ֽ��� */
	char ch;
	if((fp=fopen("d:\\test\\export.txt","r"))==0)
	{
		printf("�Ҳ����ļ�\n");
		return (-1);
	}
	else
	{
		fseek(fp,0,SEEK_END);								/*�ƶ�ָ�뵽�ļ�������� */
		len=ftell(fp); 										/*���ļ��ֽ�����ֵ��len���� */
		s=(char *)malloc(len);								/* sΪ�����ֽڳ���  ��̬ */	
		printf("%d %d\n",len,s);
		printf("\n");
		printf("\n");
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			printf("%c",ch);
			ch=fgetc(fp);
		}
		fclose(fp);											/*�ر��ļ�*/ 
	}

	return 0;
}
/*
 FILE*fp;
 struct data b1;
 fp=fopen("d:\\test\\export.txt","ab+");
 do
 {
 	system("cls");
 	while(1)
 	{
 		fread(&b1,sizeof(b1),fp);
 		printf("%s %s %s",b1.lat,b1.lon,b1.time);
*/ 		
 	
 	
 	
 	
