#include <iostream.h>
#include <fstream.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,("Russian"));
    char s[100],buff;
    int f_t,s_t;
    cout << "������� ������: " << endl;
    ofstream fout("D://prakt_3//5_6_9.txt");
    //cin.getline(s,100);
    cin.get(s,100);
    fout << s;
    fout.close();
    ifstream fin("D://prakt_3//5_6_9.txt");
    fin >> s;
    f_t = strlen(s);
    cout << "����� ������� ����� = " << f_t << endl;
    //fin.get(s,100);
    fin >> s;
    s_t = strlen(s);
    cout << "����� ������� ����� = " << s_t << endl;
    fin.close();
    if(f_t>s_t)
    cout << "������ ����� ������ ��� ������ �����" << endl;
    else if(f_t<s_t)
    cout << "������ ����� ������ ��� ������ �����" << endl;
    else
    cout << "������ ����� ����� �������" << endl;
    system("pause");
    return 0;
}
