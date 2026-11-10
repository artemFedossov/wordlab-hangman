#include <stdbool.h>

typedef enum {
    FACIL = 1,
    NORMAL = 2,
    DIFICIL = 3
} Dificultad;

typedef enum {
    EN_CURSO = 0,
    GANADA = 1,
    PERDIDA = 2
} EstadoPartida;

typedef struct {
    int vidas;
    int longitud;
    Dificultad dificultad;
    EstadoPartida estado;
} Partida;

bool iniciarPartida(Partida *partida, Dificultad dificultad);
int obtenerVidasIniciales(Dificultad dificultad);
bool validarDificultad(Dificultad dificultad);
bool reiniciarPartida(Partida *partida);