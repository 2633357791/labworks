#include <stdio.h>
// ����֧է֧ݧ֧ߧڧ� ��ڧާӧ�ݧڧ�֧�ܧڧ� �ܧ�ߧ��ѧߧ�
#define YES  1
#define NO   0

int main( void )
{
 int c;  // ��֧ܧ��ڧ� ��ڧާӧ�� �ڧ� �����ܧ�

 int flag; // ���ڧ٧ߧѧ� ��ݧ�ӧ�
 int cnt;  // ���ק��ڧ�
 int found; // �ڧߧէڧܧѧ��� ���ԧ�, ���� �ڧ�ܧ�ާ�� ���ڧ٧ߧѧ�
    // ��ҧߧѧ��ا֧�

 // �ߧѧ�ѧݧ�ߧ�� ���ڧ�ӧѧڧӧѧߧڧ� (�ڧߧڧ�ڧѧݧڧ٧ѧ�ڧ�)
 cnt = 0;
 flag = NO;
 found = NO;


 // ��ڧܧ� ���֧ߧڧ� ��ڧާӧ�ݧ�� �ڧ� �����ܧ�, ��ӧ�٧ѧߧߧ�ԧ� ��
 // �ܧݧѧӧڧѧ�����
 while( (c = getchar()) != EOF )
 {
  if( c == ' ' || c == '.' || c == '\n' ||
   c == ',' )
  {
   // �ߧѧۧէ֧� ��ѧ٧է֧ݧڧ�֧ݧ�
   if( flag && found )
   {
    cnt = cnt + 1;
    }

   flag = NO;
   found=NO;
  }
  else
  {
   // �ߧѧۧէ֧ߧ� �ҧ�ܧӧ�

   // ����ӧ֧�ܧ� ���ӧ�ѧէ֧ߧڧ� ��֧ܧ��֧ԧ� ��
   // ���֧է�է��֧ԧ� ��ڧާӧ�ݧ��
    flag = YES;
   if( c == 'a' )
   {
       found = YES;
   }

    }
  }
 if (flag && found)
    {
        cnt++;
    }

 printf("number of words = %d\n", cnt );
    return 0;
}
