// "Copyright 2018 Grupo MP"
/**
* @file Unidades.hpp
* @brief Arquivo com as funcoes que sao usadas para implementar as funcoes que contaram o numero de linhas. 
*/
#ifndef LENHADORA_HPP_
#define LENHADORA_HPP_
// includes
#include "utils.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;

enum tipo_recurso2 {
    nada2 ,
    madeira2,
    ouro2
};

class Lenhadora {
 private:
    tipo_recurso2 recurso;
    bool eh_humano;
    unsigned int vida;
    unsigned int qt_materia;
    unsigned int construcao;
    unsigned int largura;
    unsigned int comprimento;
    // indica a posicao inicial ....
    // crescera de acordo com a largura e o comprimento
    unsigned int posX, posY;

 public:
        // construtor e destrutor
        Lenhadora();
        ~Lenhadora();
        // metodos getter and setters
        int setVida(unsigned int p_vida);
        int setQt_materia(unsigned int materia);
        int setLargura(unsigned int p_lar);
        int setComprimento(unsigned int p_com);
        int setConstrucao(unsigned int p_const);
        int setPosX(unsigned int p_posX);
        int setPosY(unsigned int p_posY);
        int setRecurso(tipo_recurso2 p_recurso);
        unsigned int getVida();
        unsigned int getLargura();
        unsigned int getComprimento();
        unsigned int getQt_materia();
        unsigned int getConstrucao();
        unsigned int getPosX();
        unsigned int getPosY();
        tipo_recurso2 getRecurso();
        void get_status_unidade();
};
#endif
