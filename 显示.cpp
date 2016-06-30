/*
fseek  移动指针 读取字节数
赋值给数组 
动态
数组长度 
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char *s;											/*所需要的字节数 */
	FILE *fp;											/*文件指针*/
	int len;											/*长度，字节数 */
	char ch;
	if((fp=fopen("d:\\test\\export.txt","r"))==0)
	{
		printf("找不到文件\n");
		return (-1);
	}
	else
	{
//		fseek(fp,0,SEEK_END);								/*移动指针到文件内容最后 */
//		len=ftell(fp); 										/*把文件字节数赋值给len长度 */
//		s=(char *)malloc(len);								/* s为所用字节长度  动态 */	
//		printf("%d %d\n",len,s);
//		printf("\n");
//		printf("\n");
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			printf("%c",ch);
			ch=fgetc(fp);
		}
		fclose(fp);											/*关闭文件*/ 
	}

	return 0;
}
