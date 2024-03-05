#include<iostream>
#include<cctype>
int main()
{
    using namespace std;
    cout<<"Podawaj dane: ";
    char cz;
    cin.get(cz);
    while(cz!='@')
    {
        if(isalpha(cz))
        {
            if(islower(cz))
            {
                cout.put(toupper(cz));
            }
            else
            cout.put(tolower(cz));
        }
        cin.get(cz);
      
    }
    cin.get();
    cin.get();
    return 0;
}