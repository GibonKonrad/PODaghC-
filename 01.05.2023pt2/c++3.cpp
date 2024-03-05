#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char word[5]="?ate";

    for(char ch='a';strcmp(word,"mate");++ch)
    {
        word[0]=ch;
        cout<<word<<endl;
    }
    cin.get();
    cin.get();
    return 0;
}