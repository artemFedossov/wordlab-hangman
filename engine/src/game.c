#include <stdio.h>
#include "game.h"

bool iniciarPartida(Partida *partida, Dificultad dificultad)
{
    if(partida == NULL || !validarDificultad(dificultad))
        return false;

    partida->dificultad = dificultad;

    int vidas = obtenerVidasIniciales(partida->dificultad);

    if(vidas <= 0)
    {
        return false;
    }

    partida->vidas = vidas;
    partida->estado = EN_CURSO;

    return true;
    
}

int obtenerVidasIniciales(Dificultad dificultad) 
{
    if(!validarDificultad(dificultad))
    {
        return -1;
    }
        
    switch (dificultad)
    {
        case FACIL:
            return 8;
        case NORMAL:
            return 6;
        case DIFICIL:
            return 5;            
    }
}

bool validarDificultad(Dificultad dificultad)
{
    switch (dificultad)
    {
    case FACIL:
        return true;
    case NORMAL:
        return true;
    case DIFICIL:
        return true;
    default:
        return false;
    }
}

bool reiniciarPartida(Partida *partida)
{
    if(partida == NULL)
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