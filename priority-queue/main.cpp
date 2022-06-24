#include "pq.h"

int main() {
    typedef priority_queue
        <
            edge,
            vector <edge>,
            MenorValor
        >
    arbol;

    arbol T;

    vPair p1('A', 'C'),
        p2('A', 'D'),
        p3('B', 'D'),
        p4('B', 'E'),
        p5('C', 'D'),
        p6('D', 'E'),
        p7('D', 'F'),
        p8('E', 'F');

    edge a1(p1, 3),
        a2(p2, 3),
        a3(p3, 3),
        a4(p4, 3),
        a5(p5, 3),
        a6(p6, 3),
        a7(p7, 3),
        a8(p8, 3);

    T.push(a1);
    T.push(a2);
    T.push(a3);
    T.push(a4);
    T.push(a5);
    T.push(a6);
    T.push(a7);
    T.push(a8);

    return 0;
}
