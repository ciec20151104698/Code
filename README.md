#代码
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int i;
    printf("Input:");
    if(fscanf(stdin, "%d",&i))
    printf("The integer read was:%d\n", i);
    else
    {
        fprintf(stderr, "Error reading an integer from stdin.\n");
        exit(1);
    }
    return 0;
}
