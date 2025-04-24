#include <stdio.h>
// определение символических констант
#define YES  1
#define NO   0
#define MAXLINE 1000
void process_line( char buffer[] );
int main( void )
{
    char line[MAXLINE];
    // 使用 fgets 替代 gets 避免缓冲区溢出
    fgets(line, MAXLINE, stdin);
    process_line( line );
    puts( line );
    return 0;
}
void process_line( char buffer[] )
{
    char c;  // текущий символ
    int flag; // признак слова
    int start; // позиция начала слова
    int i;  // позиция текущего символа исходной строки
    int pos;  // позиция текущего символа результирующей строки
    int j;

    // начальные присваивания (инициализация)
    flag = NO;
    start = 0;
    i = 0;
    pos = 0;

    // цикл чтения символов из строки
    do
    {
        c = buffer[i]; // взять текущий символ из буфера

        if( c == ' ' || c == '.' || c == ',' ||
             c == '\n' || c == '\0')
        {
            // найден разделитель
            if( flag == YES )
            {
                // это первый разделить после слова
                // проверить, начинается и заканчивается ли слово на одну и ту же букву
                if (buffer[start] != buffer[i - 1])
                {
                    // слово не начинается и не заканчивается на одну и ту же букву
                    // оно копируется в результирующую строку
                    for( j = start; j < i; j++ )
                        buffer[pos++] = buffer[j];
                }
            }
            flag = NO;
            buffer[pos++] = c;
        }
        else
        {
            // найдена буква
            if( flag == NO )
                start = i; // запомнить позицию начала слова
            flag = YES;
        }

        i++;
    }
    while( c != '\0' );
}
