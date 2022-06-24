#ifndef PQ
#define PQ

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<char, char> vPair;
typedef pair<pair<char, char>, int> edge;

/**
 * Vemos que se declara una clase con el sentido 
 * de generar un nuevo criterio debido a la 
 * complejidad de la estructura que se compara.
 */
class MenorValor {
    public :
        /**
         * brief sobrecarga al operador () para la comparacion de pesos
         * param e1 de tipo arista
         * param e2 de tipo arista
         * return true en caso que el peso de e1 sea mayor al de e2
         */
        bool operator()(arista e1, arista e2) {
            return e1.second > e2.second;
        }
};
#endif