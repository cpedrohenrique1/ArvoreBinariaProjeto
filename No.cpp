#include "No.h"

namespace ED1{
No::No(int dado):
    dado(dado),
    direita(0),
    esquerda(0)
{
}

No::~No()
{
    std::cout<<"Metodo Destrutor do No Elemento = "<<this->dado<<std::endl;
    if(this->esquerda != 0) delete this->esquerda;
    if(this->direita != 0)  delete this->direita;
}

}
