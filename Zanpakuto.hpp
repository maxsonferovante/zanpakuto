#include<string>
using std::string;

class Zanpakuto
{
    
    public:
        Zanpakuto();
        Zanpakuto(const string &, bool);
        ~Zanpakuto();
        
        void empunharZanpakuto();
        void transformarShinkai();
        void transformarBankai();
        
        bool konsodaZanpakuto(const string &);
        int atacaDiretoZanpakuto(int);
        int rajadadeReiatsuZanpakuto(int);
        
    private:
        string nomedaZanpakuto;
        bool modoBankai;
        bool modoShinkai;
        bool empunhada;
        int damoDireto;
        int damoRajada;
        int resistenciadaZanpakuto;

        void niveldeResistenciaZanpakuto();
};

