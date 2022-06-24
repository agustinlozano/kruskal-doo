#include "pq.h"

int main() {
    typedef priority_queue
        <
            edge,
            vector <edge>,
            MenorValor
        >
    arbol;

    vPair p1('A', 'C'),
        p2('A', 'D'),
        p3('B', 'D'),
        p4('B', 'E'),
        p5('C', 'D'),
        p6('D', 'E'),
        p7('D', 'F'),
        p8('E', 'F');

    dge a1(p1, 3),
        a2(p2, 3),
        a3(p3, 3),
        a4(p4, 3),
        a5(p5, 3),
        a6(p6, 3),
        a7(p7, 3),
        a8(p8, 3);

    arbol.push(a1);
    arbol.push(a2);
    arbol.push(a3);
    arbol.push(a4);
    arbol.push(a5);
    arbol.push(a6);
    arbol.push(a7);
    arbol.push(a8);

    return 0;
}