#include<iostream>
int main()
{
    using std::cout;
    using std::cin;
    char ch;
    int spaces=0;
    int total=0;
    // cin.get(ch);
        while(ch!='.')
        {
            if(ch==' ')
                spaces++;
            total++;
            cin.get(ch);
        }
    cout<<"W zdaniu jest "<<spaces<<" spacji, a lacznie jest: "<<total<<" znakow\n";
    cin.get();
    cin.get();
    return 0;
}