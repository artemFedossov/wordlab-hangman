#include <stdio.h>
#include <game.h>

int main(void)
{
    Partida miPartida;

    miPartida.dificultad = NORMAL;
    miPartida.estado = PERDIDA;
    miPartida.vidas = 0;

    if(reiniciarPartida(&miPartida))
    {
        printf("Partida reiniciada correctamente");
        printf("vidas: %d\n", miPartida.vidas);
        printf("Estado: %d\n", miPartida.estado);
    }
    else
    {
        printf("Error al reiniciar la partida.\n");
    }

    return 0;
}
