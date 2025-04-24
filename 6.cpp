#include <stdio.h>
#define K 3
#define N 4
int main( void )
{
int x[K][N];
int i, j,c;
// ввод массива
// массив из K на N элементов
// среднее арифметическое
for( i = 0; i < K; i++ )
    {
        for( j = 0; j < N; j++ )
            scanf("%d", &x[i][j]);
    }
// вычисление среднего арифметического значения
for (i = 0; i < K; i++)
    {
        int c = 1;  // 假设当前行是等差数列
       if(N>2)
        {int diff = x[i][1] - x[i][0];
            for (j = 2; j < N; j++)
                {
                if (x[i][j] - x[i][j - 1] != diff)
                {
                    c = 0;  // 不是等差数列
                    break;
                }
            }

        }

       if (c) {
            printf("第 %d 行是等差数列。\n", i + 1);
        }
       else {
            printf("第 %d 行不是等差数列。\n", i + 1);
        }

    }
    return 0;
}
