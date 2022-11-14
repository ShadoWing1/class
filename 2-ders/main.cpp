#include <iostream>

using string = std::string;

class Urun
{
    public:
    int agirlik;
    int fiyat;
    int id;
    string urunadi;
};

class Et: public Urun
{
    public:
    string tur;
    string bolge;
};

class Bitki: public Urun
{
    public:
    string tur;
    bool yenilebilirlik;
};

class Kanat : public Et
{
    public:
    Kanat()
    {
        tur = "tavuk";
        bolge = "kanat";
        fiyat = 500;
        id = 7874515;
        agirlik = 1000;
        urunadi = "Tavuk Kanat";
    }
};

class Domates: public Bitki
{
    public:
    Domates()
    {
        tur = "Domates";
        yenilebilirlik = false;
        fiyat = 25;
        id = 4756524;
        agirlik = 500;
        urunadi = "Cherry Domates";
    }
};

void SatinAl(Urun urun)
{
    std::cout << urun.agirlik << " gram " << urun.urunadi << " alindi\n";
    std::cout << "tutar: " << urun.fiyat * (urun.agirlik / 1000.0) << "\n";
}


int main(int argc, char const *argv[])
{
    Domates domates;
    Kanat kanat;

    SatinAl(domates);
    SatinAl(kanat);
    return 0;
}
