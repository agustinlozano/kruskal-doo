#include "kruskal.h"

void Graph :: insertar_vertice(const char &v) {
    V.push_back(v);
}

void Graph :: insertar_arista(const char &u, const char &v, const int &weight) {
    edge a = {{u,v}, weight};
    E.push_back(a);
}

void Graph :: _insert() {
    for (auto i = E.begin(); i != E.end(); i++) {
        char u = (*i).first.first,
            v = (*i).first.second;
        int weight = (*i).second;

        edge e = {{u, v},weight};
        sorted_graph.push(e);
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