#include <stdio.h>
#include "game.h"

int obtenerVidasIniciales(Dificultad dificultad) 
{
    int valor;

    switch (dificultad)
    {
    case FACIL:
        valor = 8;
        break;
    case NORMAL:
        valor = 6;
        break;
    case DIFICIL:
        valor = 5;
        break;
    default:
        valor = -1;
    }

    return valor;
}

bool reiniciarPartida(Partida *partida)
{
    if (partida == NULL)
    {
        return false;
    }

    int vidas = obtenerVidasIniciales(partida->dificultad);

    if(vidas <= 0)
    {
        return false;
    }

    partida->vidas = vidas;
    partida->estado = EN_CURSO;

    return true;
}