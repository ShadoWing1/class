#include <iostream>

class ucgenAlan
{
    public:
        float genislik = 0;
        float yukseklik = 0;
        float alan = 0 ;

        void bilgi()
        {
            std::cout << "genisliği girin: ";
            std::cin >> genislik;
            
            std::cout << "yüksekliği  girin: ";
            std::cin >> yukseklik;
        }

        void sonuc ()
        {
            alan = (genislik * yukseklik) / 2;
            std::cout << alan << "\n";
        }

};

int main()
{
    ucgenAlan ucgen1;
    ucgen1.bilgi();




    std::cout << "1.ucgen: ";
    ucgen1.sonuc();
    
    return 0;
}
