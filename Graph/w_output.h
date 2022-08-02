#ifndef W_OUTPUT_H
#define W_OUTPUT_H
/*
(0)->(1)
---Graph---
   0 1 2 3 4 5
0 |0|2|0|0|0|0
1 |0|0|0|0|0|0
2 |0|0|0|0|0|0
3 |0|0|0|0|0|0
4 |0|0|0|0|0|0
5 |0|0|0|0|0|0

(1)->(2)
---Graph---
   0 1 2 3 4 5
0 |0|2|0|0|0|0
1 |0|0|7|0|0|0
2 |0|0|0|0|0|0
3 |0|0|0|0|0|0
4 |0|0|0|0|0|0
5 |0|0|0|0|0|0

(2)->(3)
---Graph---
   0 1 2 3 4 5
0 |0|2|0|0|0|0
1 |0|0|7|0|0|0
2 |0|0|0|3|0|0
3 |0|0|0|0|0|0
4 |0|0|0|0|0|0
5 |0|0|0|0|0|0

(2)->(4)
---Graph---
   0 1 2 3 4 5
0 |0|2|0|0|0|0
1 |0|0|7|0|0|0
2 |0|0|0|3|9|0
3 |0|0|0|0|0|0
4 |0|0|0|0|0|0
5 |0|0|0|0|0|0

(4)->(5)
---Graph---
   0 1 2 3 4 5
0 |0|2|0|0|0|0
1 |0|0|7|0|0|0
2 |0|0|0|3|9|0
3 |0|0|0|0|0|0
4 |0|0|0|0|0|5
5 |0|0|0|0|0|0

+(6)
+(7)
added 2 new verticies, graph reallocated twice here
---Graph---
   0 1 2 3 4 5 6 7
0 |0|2|0|0|0|0|0|0
1 |0|0|7|0|0|0|0|0
2 |0|0|0|3|9|0|0|0
3 |0|0|0|0|0|0|0|0
4 |0|0|0|0|0|5|0|0
5 |0|0|0|0|0|0|0|0
6 |0|0|0|0|0|0|0|0
7 |0|0|0|0|0|0|0|0

Dijkstra of Node: 0

Node     Distance     From
0        0            0
1        2            0
2        9            1
3        12            2
4        18            2
5        23            4
6        X            X
7        X            X


Dijkstra of Node: 2

Node     Distance     From
0        X            X
1        X            2
2        0            0
3        3            7
4        9            7
5        14            4
6        X            X
7        X            X

Search from 2
->(2)->(3)->(4)->(5)
---------------------------------------------------------


Press <RETURN> to close this window...


*/
#endif // W_OUTPUT_H