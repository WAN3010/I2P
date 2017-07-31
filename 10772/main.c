#include <stdio.h>
#include <stdlib.h>

int main()
{
    char target[5];
    int test_case = 0, target_length = 0, counter = 0;

    scanf("%s", target);
    scanf("%d", &test_case);
    target_length = strlen(target);

    while(test_case--)
    {
        char tmp[11];
        int tmp_counter = 0, tmp_length = 0;

        scanf("%s", tmp);

        tmp_length = strlen(tmp);
        int i = 0;
        for(; i < tmp_length - target_length + 1; i++)
        {
            int j = i, tmp_idx = 0, count_flag = 1;
            for(; tmp_idx < target_length; j++, tmp_idx++)
            {
                if(tmp[j] != target[tmp_idx])
                {
                    count_flag = 0;
                    break;
                }
            }
            if(count_flag)
            {
                tmp_counter++;
            }
        }
        if(tmp_counter > counter)
        {
            counter = tmp_counter;
        }
    }
    printf("%d", counter);

    return 0;
}
