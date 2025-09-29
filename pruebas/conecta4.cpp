/*
 * Crea el juego conecta cuatro.
 *
 * Requisitos:
 * - Tablero de 7x6 (7 en el eje "x" y 6 en el "y").
 * - Fichas Rojas y Amarillas. La primera partida la comienza siempre la Roja
 *   (la segunda la Amarilla, la tercera la Roja...).
 * - No hay que implementar una funcionalidad que te permita jugar contra la App.
 *   Se asume que jugarán dos personas reales alternándose.
 * - Al seleccionar la columna se coloca la ficha en la parte inferior.
 * - Guardar el número partidas ganadas de cada equipo mientras la App no se finaliza.
 * - Dos botones para reiniciar la partida en marcha y para resetear el
 *   contador de victorias y derrotas.
 * - Puedes añadirle todas las funcionalidades extra que consideres.
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
        for (int i=0; i<6; i++)
        {
            for (int j=0; j<7; j++)
            {
                if (tablero[i][j]!=" ")
                {
                    if (j<4)
                    {
                        if (tablero[i][j]==tablero[i][j+1] && tablero[i][j]==tablero[i][j+2] && tablero[i][j]==tablero[i][j+3])
                        {
                            ganador=turno%2+1;
                        }
                    }
                    if (i<3)
                    {
                        if (tablero[i][j]==tablero[i+1][j] && tablero[i][j]==tablero[i+2][j] && tablero[i][j]==tablero[i+3][j])
                        {
                            ganador=turno%2+1;
                        }
                    }
                    if (i<3 && j<4)
                    {
                        if (tablero[i][j]==tablero[i+1][j+1] && tablero[i][j]==tablero[i+2][j+2] && tablero[i][j]==tablero[i+3][j+3])
                        {
                            ganador=turno%2+1;
                        }
                    }
                    if (i<3 && j>2)
                    {
                        if (tablero[i][j]==tablero[i+1][j-1] && tablero[i][j]==tablero[i+2][j-2] && tablero[i][j]==tablero[i+3][j-3])
                        {
                            ganador=turno%2+1;
                        }
                    }
                }
            }
        }
        if (ganador!=0)
        {
            std::cout<<"El ganador es "<<(ganador==1?jugador1:jugador2)<<"\n";
            if (ganador==1)
            {
                partidasJ1++;
            }
            else
            {
                partidasJ2++;
            }
            std::cout<<"Deseas jugar otra partida? (s/n)\n";
            std::cin>>respuesta;
            if (respuesta=='n')
            {
                salir=true;
            }
            else
            {
                for (int i=0; i<6; i++)
                {
                    for (int j=0; j<7; j++)
                    {
                        tablero[i][j]=" ";
                    }
                }
                ganador=0;
            }
        }
        turno++;
    } while (!salir);
    std::ofstream archivo2("partidas.txt");

    return 0;
}