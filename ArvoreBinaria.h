#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include<No.h>
#include<string>
#include<iostream>
#include<iarvorebinaria.h>
namespace ED1{
class ArvoreBinaria : public IArvoreBinaria
{
    //atributos
private:
    No* raiz;

    //Metodos
private:
    void inserirRecursivo(No **raiz, int elemento);
    void removerRecursivo(No **raiz, int elemento);
    void centralEsquerda(No* raiz)const;
    void preEsquerda(No* raiz) const;
    void posEsquerda(No* raiz) const;
    void preDireita (No* raiz) const;
    void posDireita (No* raiz) const;
    void centralDireita (No* raiz) const;
    int retornar_Maior(No **raiz);
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    void inserir(int elemento){this->inserirRecursivo(&raiz,elemento);}
    void remover(int elemento){this->removerRecursivo(&raiz, elemento);}
    void imprimir(){std::cout<<"Encaminhamento Central a Esquerda";centralEsquerda(raiz); std::cout<< std::endl;
                    std::cout<<"Encaminhamento Pre-Fixado a Esquerda";preEsquerda(raiz); std::cout<< std::endl;
                    std::cout<<"Encaminhamento Pos-Fixado a Esquerda";posEsquerda(raiz); std::cout<< std::endl;
                    std::cout<<"Encaminhamento Central a Direita";centralDireita(raiz); std::cout<< std::endl;
                    std::cout<<"Encaminhamento Pre-Fixado a Direita";preDireita(raiz); std::cout<< std::endl;
                    std::cout<<"Encaminhamento Pos-Fixado a Direita";posDireita(raiz); std::cout<< std::endl;
                   }

};
}
#endif // ARVOREBINARIA_H
