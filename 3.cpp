#include <stdio.h>
// определение символических констант
#define YES  1
#define NO   0

int main( void )
{
 int c;  // текущий символ из потока

 int flag; // признак слова
 int cnt;  // счётчик
 int found; // индикатор того, что искомый признак
    // обнаружен

 // начальные присваивания (инициализация)
 cnt = 0;
 flag = NO;
 found = NO;


 // цикл чтения символов из потока, связанного с
 // клавиатурой
 while( (c = getchar()) != EOF )
 {
  if( c == ' ' || c == '.' || c == '\n' ||
   c == ',' )
  {
   // найден разделитель
   if( flag && found )
   {
    cnt = cnt + 1;
    }

   flag = NO;
   found=NO;
  }
  else
  {
   // найдена буква

   // проверка совпадения текущего и
   // предыдущего символов
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
