#ifndef KRUSKAL
#define KRUSKAL

#include <vector>
#include <map>
#include "defs.h"

class Graph {
    // Conjunto de vertices
    vector<char> V;
    // Conjunto de aristas con sus pesos
    vector<edge> E;
    // Estructura para el analisis de adyacencias
    CE_set CE;
    // Cola de prioridad con los pesos de las aristas
    tree sorted_graph;
    // Arbol de minimal
    vector<edge> msf;

public:
    // constructor
    Graph() {}
    // destructor
    ~Graph() {}

    // Guarda los vertices en el conjunto V
    void insertar_vertice(const char &);

    // Guarda las aristas en el conjunto E
    // pidiendolas ingresar por Teclado
    void insertar_arista(const char &, const char &, const int &);

    // Guarda las aristas en el Conjunto E
    void insertar_arista();

    // inicializa a las estructuras del
    // conjunto COMBINA - ENCUENTRA
    void _init(const char &, const char &);

    // Combinalas aristas que se
    // encuentran formando el arbol
    void _union(const char &, const char &);

    // Encuentra losvertices dentro del
    // conjunto COMBINA - ENCUENTRA
    char _find(const char &);

    // Algoritmo generador del arbol
    // recubridor minimal
    void kruskal();

    // Guarda al conjunto E dentro de
    // la cola de prioridad teniendo
    // en cuenta los costos.
    void _insert();

    edge sacar_min();

    void imprimirQueue();

    vector<edge> getMSF();

    // Sobrercarga de la salida
    // estandar para mostrar al grafo
    // ostream& operator<<(ostream &, vector<edge>);
};

#endif
