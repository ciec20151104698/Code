/*
fseek  �ƶ�ָ�� ��ȡ�ֽ���
��ֵ������ 
��̬
���鳤�� 
*/
#include <stdlib.h>
#include <stdio.h>
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
//		fseek(fp,0,SEEK_END);								/*�ƶ�ָ�뵽�ļ�������� */
//		len=ftell(fp); 										/*���ļ��ֽ�����ֵ��len���� */
//		s=(char *)malloc(len);								/* sΪ�����ֽڳ���  ��̬ */	
//		printf("%d %d\n",len,s);
//		printf("\n");
//		printf("\n");
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
