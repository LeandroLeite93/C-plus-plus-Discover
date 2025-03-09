#include <iostream>
#include "carro.h"
#include <string>

using namespace std;

Carro::Carro(std::string p, std::string n, std::string po, std::string d, int q, int v, int pe, int a, float pcarr) {
    placa = p;
    potencia = po;
    nome = n;
    direcao = d;
    quilometragem = q;
    veloMax = v;
    peso = pe;
    ano = a;
    precoCarr = pcarr;
}

void Carro::setplaca(std::string p) {
    placa = p;
}

string Carro::getplaca() {  
   return placa;
}

void Carro::setnome(std::string n) {
    nome = n;
}

string Carro::getnome() {
    return nome;
}

void Carro::setpotencia(std::string po) {
    potencia = po;
}

string Carro::getpotencia() {
    return potencia;
}

void Carro::setdirecao(std::string d) {
    direcao = d;
}

string Carro::getdirecao() {
    return direcao;
}

void Carro::setquilometragem(int q) {
    quilometragem = q;
}

int Carro::getquilometragem() {
    return quilometragem;
}

void Carro::setvelomax(int v) {
    veloMax = v;
}

int Carro::getvelomax() {
    return veloMax;
}

void Carro::setpeso(int pe) {
    peso = pe;
}

int Carro::getpeso() {
    return peso;
}

void Carro::setano(int a) {
    ano = a;
}

int Carro::getano() {
    return ano;
}

void Carro::setprecocarro(float pcarr) {
    precoCarr = pcarr;
}

float Carro::getprecocarro() {
    return precoCarr;
}
