#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
int  main()
{
     setlocale(LC_ALL,("Russian"));
     char s[256];
     char s1[256];
     int cpos = 0,i;
     printf("Введите символ:\n");
     scanf("%s", s);
     //while()
     for ( i = 0; i < strlen(s); i++)
     {
         if(s[i] == '!')
         {
                 s1[cpos] = '.';
                 puts(s1);
                 break;
                 //cout << s << endl;
         }
         if (s[i] == '.')
         {
                  if ((s[i+1] == '.') && (s[i+2] == '.')) // для трьох точок подряд,заменяем на одну и сдвигаем позицию чтения i на 2 вперед
                  {
                              s1[cpos] = '.';
                              i+=2;
                  }
                  else // замeняем одну точку на три 
                  {
                       s1[cpos] = '.';
                       s1[cpos + 1] = '.';
                       s1[cpos + 2] = '.';
                       cpos+=2;
                  }
         }
         else // иначе это обычный символ и просто записываем его во вторую строку
         { 
              s1[cpos] = s[i]; 
         }
         cpos++;
     }
         s1[cpos]='\0';
         puts(s1);
         getch();
}
