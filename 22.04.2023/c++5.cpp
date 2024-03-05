#include<iostream>
struct widget
{
    char brand[20];
    int type;
    union 
    {
        long id_num;
        char id_char[20];
    };
};
int main()
{
    using namespace std;
        widget price;
        if(price.type==1)
           cin>>price.id_num;
        else
            cin>>price.id_char;
    cin.get();
    cin.get();
    return 0;
}