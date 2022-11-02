#include <iostream>
    
int main(int argc, char const *argv[])
{
    int a = 0;
    std::cout << "hosgeldiniz <3 \n" << "\n" << "Oyuna Gir: 1 \n" << "Oyundan Cık: 0 \n";
    std::cout << ": ";std::cin >> a;
    bool b;
    if(a == 0)
    {
        bool b = false;
        std::cout << "Oyundan Cikiliyor...\n";
    }

    else if(a == 1)
    {
        bool b = false;
    }
    else
    {
        bool b = true;
    }

    while(b = true)
    {
        std::cout << "Anlasilamadi \n";
        
        std::cout << ": ";std::cin >> a;

        if(a==1 || a==0)
        {
            break;
        }
    
        if((a == 0) == 0)
        {
            if((a == 1) == 0)
            {
                b = false;
            }
        }
    
    }


}
