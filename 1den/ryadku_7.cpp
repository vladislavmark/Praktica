#include <iostream.h>
#include <conio.h>
#define n 100

void sort(int *mas, int size) // сортировка
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for (int k=0;k<size-1;k++)
            if(mas[k]>mas[k+1])
            {
                temp=mas[k];
                mas[k]=mas[k+1];
                mas[k+1]=temp;
            }
    }
}

int main()
{
    char a[n];
    int s[n],max=0,sum =0;
    cout<<"Vvedit ryadok:\n";
    cin.getline(a,n);
    for(int i=0;i<strlen(a);i++)
    {
            s[i]=(int)(a[i]);
            cout << s[i] << endl;
    }
    sort(s,strlen(a));
    cout<<"Vidsortovani simvoli: "<<endl;
    for(int i=0;i<strlen(a);i++)
    {
            sum+=s[i];
            cout<<(char)s[i]<<" ";
    }
    cout<<endl<<"Suma: "<<sum;
    getch();
}
