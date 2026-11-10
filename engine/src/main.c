#include <stdio.h>
#include <game.h>

int main(void)
{
    Partida miPartida;

iniciarPartida(&miPartida, 10);

printf("Vidas: %d\n", miPartida.vidas);
printf("Dificultad: %d\n", miPartida.dificultad);
printf("Estado: %d\n", miPartida.estado);

return 0;
}
