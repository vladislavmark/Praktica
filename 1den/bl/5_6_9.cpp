#include <iostream.h>
#include <fstream.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,("Russian"));
    char s[100],buff;
    int f_t,s_t;
    cout << "Введите строку: " << endl;
    ofstream fout("D://prakt_3//5_6_9.txt");
    //cin.getline(s,100);
    cin.get(s,100);
    fout << s;
    fout.close();
    ifstream fin("D://prakt_3//5_6_9.txt");
    fin >> s;
    f_t = strlen(s);
    cout << "Длина первого слова = " << f_t << endl;
    //fin.get(s,100);
    fin >> s;
    s_t = strlen(s);
    cout << "Длина второго слова = " << s_t << endl;
    fin.close();
    if(f_t>s_t)
    cout << "Первое слово больше чем второе слово" << endl;
    else if(f_t<s_t)
    cout << "Второе слово больше чем первое слово" << endl;
    else
    cout << "Первое слово равно второму" << endl;
    system("pause");
    return 0;
}
