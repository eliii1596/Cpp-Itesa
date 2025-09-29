/* Crea una "Quiz app" contrareloj con ranking.
 * Requisitos:
 * - El diseño es de libre elección.
 * - La temática de las preguntas del cuestionario será de libre elección. Puede estar
 *   bien seguir un mismo tema (por ejemplo, preguntas sobre el universo "Harry Potter").
 * - En la pantalla inicial podrás comenzar a jugar o consultar el ranking de puntuaciones.
 * - El juego consistirá en 10 preguntas aleatorias con 3 respuestas y sólo una correcta.
 *   Recomendable crear más de 10 preguntas para que no siempre salgan las mismas. Cada vez
 *   que se responde a una pregunta, se pasará a la siguiente.
 * - Disponemos de 30 segundos para responder cada pregunta. El contador deberá aparecer
 *   en la pantalla, y si llega a 0 se tomará como respuesta incorrecta y se pasará
 *   a la siguiente pregunta.
 * - Al marcar una respuesta o finalizar el tiempo, se mostrará si se ha acertado o no la
 *   pregunta, dando feedback sobre cuál sería la respuesta correcta y navegando al cabo
 *   de un par de segundos a la siguiente pantalla.
 * - Sistema de puntuación:
 *   - Contador a 0 o respuesta incorrecta = 0 puntos.
 *   - Contador mayor 0 y respuesta correcta = [segundos restantes] puntos.
 *     Ej: Si quedaban 9 segundos para finalizar la cuenta atrás y se acierta la pregunta,
 *  se asignan 9 puntos.
 * - Una vez finalizada la pregunta número 10 se mostrará en una nueva pantalla
 *   la puntuación final y se deberá introducir un nombre para guardarla de forma
 *   persistente (aunque cerremos la app). Hecho estos se mostrará la pantalla de ranking.
 * - La pantalla de ranking muestra ordenados de mayor a menor los 10 mejores
 *   resultados y el nombre guardado. Desde esta pantalla siempre se podrá navegar
 *   a la pantalla inicial.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cctype>

int main ()
{
    std::vector<std::vector<std::string>> tablero(6, std::vector<std::string>(7, " "));
    std::string jugador1, jugador2;
    int columna, turno=0, ganador=0, partidasJ1=0, partidasJ2=0;
    char respuesta;
    bool salir=false;
    std::ifstream archivo("partidas.txt");
    if (archivo.is_open())
    {
        archivo>>partidasJ1>>partidasJ2;
        archivo.close();
    }
    std::cout<<"Ingresa el nombre del jugador 1\n";
    std::cin>>jugador1;
    std::cout<<"Ingresa el nombre del jugador 2\n";
    std::cin>>jugador2;

    std::cout<<"Bienvenido a la Quiz App\n";
    std::cout<<"1. Comenzar a jugar\n";
    std::cout<<"2. Consultar ranking\n";
    std::cout<<"3. Salir\n";
    std::cin>>respuesta;
    
    switch (respuesta)
    {
        case '1':
            std::cout<<"Comenzamos el juego\n";
            break;
        case '2':
            std::cout<<"Ranking\n";
            break;
        case '3':
            salir=true;
            break;
        default:
            std::cout<<"Opción no valida\n";
            break;
    }

    if (salir)
    {
        return 0;
    }

    do
    {
        for (int i=0; i<6; i++)
        {
            for (int j=0; j<7; j++)
            {
                std::cout<<"|"<<tablero[i][j];
            }
            std::cout<<"|\n";
        }
        std::cout<<"1 2 3 4 5 6 7\n";
        std::cout<<"Turno de "<<(turno%2==0?jugador1:jugador2)<<"\n";
        std::cout<<"Ingresa la columna donde deseas colocar la ficha\n";
        std::cin>>columna;
        columna--;
        if (columna<0 || columna>6)
        {
            std::cout<<"Columna no valida\n";
            continue;
        }
        for (int i=5; i>=0; i--)
        {
            if (tablero[i][columna]==" ")
            {
                tablero[i][columna]=(turno%2==0?"R":"A");
                break;
            }
        }
        for (int i=0; i<6; i++)
        {
            for (int j=0; j<7; j++)
            {
                std::cout<<"|"<<tablero[i][j];
            }
            std::cout<<"|\n";
        }
        std::cout<<"1 2 3 4 5 6 7\n";
        std::cout<<"¿Deseas salir del juego? (s/n)\n";
        std::cin>>respuesta;
        if (respuesta=='s')
        {
            salir=true;
        }
        turno++;
    } while (!salir);

    std::ofstream archivo2("partidas.txt");
    if (archivo2.is_open())
    {
        archivo2<<partidasJ1<<" "<<partidasJ2;
        archivo2.close();
    }


    return 0;
}