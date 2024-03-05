#include<iostream>
int main()
{
    using namespace std;
    cout<<"Podaj slowo: ";
    string word;
    cin>>word;
    char temp;
    int i,j;
    for(j=0,i=word.size()-1;j<i;j++,i--)
    {
        temp=word[i];
        word[i]=word[j];
        word[j]=temp;
    }
    cout<<word<<"\nGotowe\n";
    cin.get();
    cin.get();
    return 0;
}
//wartoscia wyrazenia z przecinkiem jest druga wartosc po przecinku a=5, b=20 czyli wyrazenie to jest rowne 20
