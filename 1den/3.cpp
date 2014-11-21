#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;
int main()
{
    string str = "mark fotkav parter" ;
    int p=0,k=0,t=0;
     
    for(int i=0; i<(int)str.size();i++)
    {
        if(str[i]=='p')
            p++;
        
        else 
             if(str[i]=='k')
               k++;
        
        else 
             if(str[i]=='t')
             t++;
    }
    cout<< "p: " <<p<<" k: "<<k<<" t: "<<t<<"\n"<<endl;
    system("pause");
return 0;
}
