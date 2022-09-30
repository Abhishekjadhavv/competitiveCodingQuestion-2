#include <stdio.h>

int main()
{

    int nums[4] = {1,2,3,4}, answer[4] = {1, 1, 1, 1};
    int i = 0, size = 4, index = 0, k = 0, flag = 0;

    while (1)
    {
        k = (k % size) + 1;

        k = k == size ? 0 : k;

        if (k == i)
        {
            i++;
            k = i == size - 1 ? 0 : i + 1;
            index++;
        }

        if(k>size-1){
          break;
        }

        answer[index] *= nums[k];
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}