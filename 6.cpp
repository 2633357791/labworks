#include <stdio.h>
#define K 3
#define N 4
int main( void )
{
int x[K][N];
int i, j,c;
// �ӧӧ�� �ާѧ��ڧӧ�
// �ާѧ��ڧ� �ڧ� K �ߧ� N ��ݧ֧ާ֧ߧ���
// ���֧էߧ֧� �ѧ�ڧ�ާ֧�ڧ�֧�ܧ��
for( i = 0; i < K; i++ )
    {
        for( j = 0; j < N; j++ )
            scanf("%d", &x[i][j]);
    }
// �ӧ��ڧ�ݧ֧ߧڧ� ���֧էߧ֧ԧ� �ѧ�ڧ�ާ֧�ڧ�֧�ܧ�ԧ� �٧ߧѧ�֧ߧڧ�
for (i = 0; i < K; i++)
    {
        int c = 1;  // ���赱ǰ���ǵȲ�����
       if(N>2)
        {int diff = x[i][1] - x[i][0];
            for (j = 2; j < N; j++)
                {
                if (x[i][j] - x[i][j - 1] != diff)
                {
                    c = 0;  // ���ǵȲ�����
                    break;
                }
            }

        }

       if (c) {
            printf("�� %d ���ǵȲ����С�\n", i + 1);
        }
       else {
            printf("�� %d �в��ǵȲ����С�\n", i + 1);
        }

    }
    return 0;
}
