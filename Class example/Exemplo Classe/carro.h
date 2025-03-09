#include <iostream>
#include <string>

#pragma once
class Carro
{
    public:
        Carro(std::string p, std::string n, std::string po, std::string d, int q, int v, int pe, int a, float pcarr);
   
        void setplaca(std::string p);

        std::string getplaca();

        void setnome(std::string n);

        std::string getnome();

        void setpotencia(std::string po);

        std::string getpotencia();

        void setdirecao(std::string d);

        std::string getdirecao();

        void setquilometragem(int q);

        int getquilometragem();

        void setvelomax(int v);

        int getvelomax();

        void setpeso(int pe);

        int getpeso();

        void setano(int a);

        int getano();

        void setprecocarro(float pcarr);

        float getprecocarro();

    private:
            std::string placa;
            std::string nome; 
            std::string potencia;
            std::string direcao;
            int quilometragem;
            int veloMax;
            int ano;
            int peso;
            float precoCarr;
};

