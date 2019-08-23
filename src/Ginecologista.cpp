#include "Ginecologista.h"

#include <iostream>

Ginecologista::Ginecologista(){
    this->altura = 0;
    this->peso = 0;
    this->nome = "";
    this->formacao = "";
}

Ginecologista::Ginecologista(std::string nome, std::string formacao, double peso, double altura){
    this->nome = nome;
    this->formacao = formacao;
    this->peso = peso;
    this->altura = altura;
}

Ginecologista::~Ginecologista(){

}

void Ginecologista::exameGinecologico(){
    std::cout << "Um exame ginecologico foi realizado com sucesso!" << std::endl;
}
