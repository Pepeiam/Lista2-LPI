#include "TesteValidaNumero.h"

TesteValidaNumero::TesteValidaNumero(){

}

TesteValidaNumero::~TesteValidaNumero(){

}

void TesteValidaNumero::validaNumero(int num){
    if(num <= 0){
        throw ValorAbaixoException();
    }else if(num >= 100 && num < 1000){
        throw ValorAcimaException();
    }else if(num >= 1000){
        throw ValorMuitoAcimaException();
    }
}
