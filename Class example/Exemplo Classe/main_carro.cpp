#include <iostream>
#include <string>
#include "carro.h"

using namespace std;

int main()
{
    Carro carro("DWT457", "OPALA SS6", "140 CV", "SIMPLES; CÂMBIO – MANUAL DE 4 VELOCIDADES COM ALAVANCA NO ASSOALHO", 110, 183, 1100, 1974, 502.999); //float 502.99
    setlocale(LC_ALL, "pt_BR.UTF-8");
    std::cout << "<------------------------------------------------------------------>\n\n";
    std::cout << "INFORMAÇÕES SOBRE O VEÍCULO: \n\n\n";
    std::cout << "PLACA: " << carro.getplaca() << "\n\n" << std::endl;
    std::cout << "NOME DO VEÍCULO: " << carro.getnome() << "\n\n" << std::endl;
    std::cout << "POTÊNCIA DO VEÍCULO: " << carro.getpotencia() << "\n\n" << std::endl;
    std::cout << "DIREÇÃO: " << carro.getdirecao() << "\n\n" << std::endl;
    std::cout << "QUILOMETRAGEM: " << carro.getquilometragem() << " KM " << "\n\n" << std::endl;
    std::cout << "VELOCIDADE MÁXIMA: " << carro.getvelomax() << " KM " << "\n\n" << std::endl;
    std::cout << "PESO: " << carro.getpeso() << " KGs " << "\n\n" << std::endl;
    std::cout << "ANO DO CARRO: " << carro.getano() << "\n\n" << std::endl;
    std::cout << "PREÇO APROXIMADO: " << " R$ " << carro.getprecocarro() << "\n" << std::endl;
    std::cout << "<------------------------------------------------------------------->";
}






