#include<iostream>
int main()
{
    using namespace std;
    cout<<"Podaj cos"<<endl;
    char ch;
    while(cin>>ch)
    {
        if((ch<'a'||ch>'c')&&(ch<'A'||ch>'C'))
        {
            cout<<"sle";
            continue;
        }
        else
        {
          switch(ch)
        {
            case 'a': 
            case 'A':cout<<"Stafin"<<endl;
            break;
            case 'b':
            case 'B':cout<<"Mazur"<<endl;
            break;
            case 'c':
            case 'C': cout<<"Drzewo"<<endl;
            break;
            
        }
        break;
        }
        
    }
    cin.get();
    cin.get();
    return 0;
}