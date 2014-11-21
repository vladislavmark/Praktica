#include <iostream.h>
#include <fstream.h>
#include <math.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int count = 0; 
    char lit,buff;
    ofstream fout("D://prakt_3//3_6_9.txt");
    for(char i = 0;i<=26;i++){
    lit = rand()%26+'A';
    fout << lit <<" ";
    cout << lit <<" ";}
    fout.close();//создатель файла
    //=========================
    cout << endl;
    cout << "Write lit = "; cin >> lit;
    lit -=32;
    ifstream fin("D://prakt_3//3_6_9.txt");
    while(fin >> buff)
    {
    if(buff == lit)
    count ++;
    }
    fin.close();// считатель с файла
    //=============================
    cout << lit << "------------" <<  count << endl;
    system("pause");
    return 0;
}
