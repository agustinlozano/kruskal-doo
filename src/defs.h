#ifndef DEFS
#define DEFS

#include <iostream>
#include <queue>

using namespace std;

/**
 * \ struct combina_encuentra
 * @param names
 * es un map cuya key sera un char (vertice) y un pair
 * con el vertice y el vertice siguiente (adyacente)
 * @param headers
 * map cuya key es un char (vertice) y un pair que tiene
 * a un entero como indice de cantidad de adyacencias
 * y el primer elemento del conjunto de vertices.
 */
typedef struct combina_encuentra {
    // nombre vertice y vertice siguiente
    map<char, pair<char, char>> names;
    // cuenta y primer elemento
    map<char, pair<int, char>> headers;
} CE_set;

typedef
pair<pair<char, char>, int> edge;

/**
 * Vemos que se declara una clase con el sentido
 * de generar un nuevo criterio debido a la
 * complejidad de la estructura que se compara.
 */
class MenorValor {
    public :
        /**
         * brief sobrecarga al operador () para la comparacion de pesos
         * param e1 de tipo edge
         * param e2 de tipo edge
         * return true en caso que el peso de e1 sea mayor al de e2
         */
        bool operator()(edge e1, edge e2) {
            return e1.second > e2.second;
        }
};

typedef
priority_queue <edge, vector<edge>, MenorValor> tree;

#endif
