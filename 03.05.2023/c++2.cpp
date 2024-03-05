#include<iostream>
int main()
{
    using namespace std;
    char ch;

        std::cout<<"Pisz a ja bede powtarzac: ";
        std::cin.get(ch);
        while(ch!='.')
        {
            if(ch=='\n')
                std::cout<<ch;
            else
                cout<<char(ch+1);
            std::cin.get(ch);
        }
    std::cin.get();
    std::cin.get();
    return 0;
}