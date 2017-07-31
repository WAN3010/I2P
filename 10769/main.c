#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int size = 0;

    scanf("%d", &size);

    int input[size][size];
    int i = 0, j = 0;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d", &input[i][j]);
        }
    }

    for(i = 0; i < size; i++)
    {
        int tmp_i = i;
        for(j = 0; j < size && tmp_i > 0; j++, tmp_i--)
        {
            printf("%d", input[tmp_i][j]);
            if(j < size-1){
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }
    for()
    {

    }

    return 0;
}
