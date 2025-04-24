#include <stdio.h>
// ����֧է֧ݧ֧ߧڧ� ��ڧާӧ�ݧڧ�֧�ܧڧ� �ܧ�ߧ��ѧߧ�
#define YES  1
#define NO   0
#define MAXLINE 1000
void process_line( char buffer[] );
int main( void )
{
    char line[MAXLINE];
    // ʹ�� fgets ��� gets ���⻺�������
    fgets(line, MAXLINE, stdin);
    process_line( line );
    puts( line );
    return 0;
}
void process_line( char buffer[] )
{
    char c;  // ��֧ܧ��ڧ� ��ڧާӧ��
    int flag; // ���ڧ٧ߧѧ� ��ݧ�ӧ�
    int start; // ���٧ڧ�ڧ� �ߧѧ�ѧݧ� ��ݧ�ӧ�
    int i;  // ���٧ڧ�ڧ� ��֧ܧ��֧ԧ� ��ڧާӧ�ݧ� �ڧ���էߧ�� �����ܧ�
    int pos;  // ���٧ڧ�ڧ� ��֧ܧ��֧ԧ� ��ڧާӧ�ݧ� ��֧٧�ݧ��ڧ����֧� �����ܧ�
    int j;

    // �ߧѧ�ѧݧ�ߧ�� ���ڧ�ӧѧڧӧѧߧڧ� (�ڧߧڧ�ڧѧݧڧ٧ѧ�ڧ�)
    flag = NO;
    start = 0;
    i = 0;
    pos = 0;

    // ��ڧܧ� ���֧ߧڧ� ��ڧާӧ�ݧ�� �ڧ� �����ܧ�
    do
    {
        c = buffer[i]; // �ӧ٧��� ��֧ܧ��ڧ� ��ڧާӧ�� �ڧ� �ҧ��֧��

        if( c == ' ' || c == '.' || c == ',' ||
             c == '\n' || c == '\0')
        {
            // �ߧѧۧէ֧� ��ѧ٧է֧ݧڧ�֧ݧ�
            if( flag == YES )
            {
                // ���� ��֧�ӧ�� ��ѧ٧է֧ݧڧ�� ����ݧ� ��ݧ�ӧ�
                // ����ӧ֧�ڧ��, �ߧѧ�ڧߧѧ֧��� �� �٧ѧܧѧߧ�ڧӧѧ֧��� �ݧ� ��ݧ�ӧ� �ߧ� ��էߧ� �� ��� �ا� �ҧ�ܧӧ�
                if (buffer[start] != buffer[i - 1])
                {
                    // ��ݧ�ӧ� �ߧ� �ߧѧ�ڧߧѧ֧��� �� �ߧ� �٧ѧܧѧߧ�ڧӧѧ֧��� �ߧ� ��էߧ� �� ��� �ا� �ҧ�ܧӧ�
                    // ��ߧ� �ܧ��ڧ��֧��� �� ��֧٧�ݧ��ڧ������ �����ܧ�
                    for( j = start; j < i; j++ )
                        buffer[pos++] = buffer[j];
                }
            }
            flag = NO;
            buffer[pos++] = c;
        }
        else
        {
            // �ߧѧۧէ֧ߧ� �ҧ�ܧӧ�
            if( flag == NO )
                start = i; // �٧ѧ��ާߧڧ�� ���٧ڧ�ڧ� �ߧѧ�ѧݧ� ��ݧ�ӧ�
            flag = YES;
        }

        i++;
    }
    while( c != '\0' );
}
