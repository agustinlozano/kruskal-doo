#include "kruskal.h"

void Graph :: insertar_vertice(const char &v) {
    V.push_back(v);
}

void Graph :: insertar_arista(const char &u, const char &v, const int &weight) {
    E.push_back({{u,v}, weight});
}

void Graph :: _insert() {
    for (auto i = E.begin(); i != E.end(); i++) {
        char u = (*i).first.first,
            v = (*i).first.second;
        int weight = (*i).second;

        sorted_graph.push({{u, v},weight});
    }
}

edge Graph :: sacar_min() {
    return sorted_graph.top();
}

void Graph :: imprimirQueue() {
    int n_vertices = CE.headers.size();

    for (int i = 0; i <= n_vertices; i++) {
        edge a = sorted_graph.top();
        char u = a.first.first,
            v = a.first.second;
        int weight = a.second;

        cout << "arista " <<
            '(' << u << ", " << v << ')' <<
            ' ' << "weight " << weight <<
            endl;

        sorted_graph.pop();
    }
}

vector<edge> Graph :: getMSF() {
    return msf;
}

/* Metodos del algoritmo Kruskal */

/**
 * @param comp_name representa el nombre de un componente
 * @param elm es un vertice que pertenece a un componente
 */
void Graph :: _init(const char &comp_name, const char &elm) {
    CE.names[comp_name] = {comp_name, NULL};
    CE.headers[comp_name] = {1, elm};
}

/**
 * @param elm es un vertice que pertenece a un componente
 *
 * A partir de un vertice devuleve el nombre de aquel
 * componente que tiene ese elmento como miembro.
 */
char Graph :: _find(const char &elm) {
    return CE.names[elm].first;
}

/**
 * @param A es un componente
 * @param B es un componente
 *
 * Realiza la union adecuada de ambos
 * para crear un unico componenete.
 */
void Graph :: _union(const char &A, const char &B) {
    int countA = CE.headers[A].first;
    int countB = CE.headers[B].first;
    int n_vertices = CE.headers.size();

    if (countA > countB) {
        char i = CE.headers[B].second;

        /* Encuentra el elm final de B y queda almacenado en la variable i.
         * Ademas, va cambiando los nombres de los conjuntos por A conforme
         * se avanza el bucle.
         */
        for (int j = 0; j < n_vertices; j++) {
            CE.names[i].first = A;
            i = CE.names[i].second;
        }

        cout << "hola case 1" << endl;
        // //Agrega a la lista A al final de la B y llama A al resultado
        // //Ahora i es el indice del ultimo elemento de B
        
            /* @Error
        CE.names[i].first = A;
        CE.names[i].second = CE.headers[A].second;
        CE.headers[A].second = CE.headers[B].second;
        CE.headers[A].first = (CE.headers[A].first) + (CE.headers[B].first);
            */

        //B es al menos tan grande como A
    } else {
        char i = CE.headers[A].second;

        for (int j = 0; j < n_vertices; j++) {
            CE.names[i].first = A;
            i = CE.names[i].second;
        }

        cout << "hola case 2" << endl;

            /* @Error
        CE.names[i].first = B;
        CE.names[i].second = CE.headers[B].second;
        CE.headers[B].second = CE.headers[A].second;
        CE.headers[B].first = (CE.headers[A].first) + (CE.headers[B].first);
            */
    }
}

/* Sobrecargar operadores */
// ostream & operator<<(ostream &, Graph G) {

// }

// ostream& Graph :: operator<<(ostream &os, vector<edge> msf) {
//     for (auto i = msf.begin(); i < msf.end(); i++) {
//         edge a = *i;
//         char u = a.first.first,
//             v = a.first.second;
//         int weight = a.second;

//         os << "arista " <<
//             '(' << u << ", " << v << ')' <<
//             ' ' << "weight " << weight <<
//             endl;

//         return os;
//     }
// }