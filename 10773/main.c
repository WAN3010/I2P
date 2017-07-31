#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A_fish = 0, B_fish = 0, year = 0;

    scanf("%d %d", &A_fish, &B_fish);
    scanf("%d", &year);

    while(year--)
    {
        A_fish = (int)(A_fish*1.08);
        B_fish = (int)(B_fish*1.08);

        char instrction, new_line;
        int number = 0;

        // 如果沒有把換行字元讀掉的話程式會crush
        scanf("%c", &new_line);

        scanf("%c", &instrction);
        scanf("%d", &number);

        if(instrction == 'A'){
            A_fish -= number;
            B_fish += number;
        } else {
            A_fish += number;
            B_fish -= number;
        }
    }

    printf("%d %d\n", A_fish, B_fish);

    return 0;
}
