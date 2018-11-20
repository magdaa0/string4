#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string c;
    cout<<"Introduceti un sir de caractere: ";
    cin>>c;
    for(int i=0;i<c.size();i++)
    {
        if(isupper(c[i]))
            {
                c[i]=tolower(c[i]);
            }
    }
    cout<<"sirul transformat este: "<<c<<endl;
}
