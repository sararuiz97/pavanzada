Given two lists A and B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.
We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.
These lists A and B may contain duplicates. If there are multiple answers, output any of them.
For example, given
A = [12, 28, 46, 32, 50]  B = [50, 12, 32, 46, 28]  
We should return
[1, 4, 3, 2, 0]  
as  P[0] = 1 because the  0th element of  A appears at  B[1], and  P[1] = 4 because the  1st element of  A appears at  B[4], and so on.
Note:
1.  A, B have equal lengths in range [1, 100].
2.  A[i], B[i] are integers in range [0, 10^5]


BREAK DOWN

- ¿El arreglo esta ordenado?
No

- ¿Que pasa si un elemento del arreglo A no se encuentra en B?
Vamos a suponer que eso no podría pasar

- ¿Que pasa si los arreglos no son del mismo tamaño?
Suponemos que siempre seran del mismo tamaño

- Debemos tener en cuenta lo siguiente:
    A, B have equal lengths in range [1, 100].
    A[i], B[i] are integers in range [0, 10^5]

Lo que nos lleva a afirmar que:
    - No hay números negativos 
    - Se debe de respetar un rango de 1 a 100.

CASOS

- Primer caso
    Asumiendo que tenemos lo siguiente
    A = [24,61,7,12]  B = [7,24,12,61]
    1. Creamos un nuevo arreglo P del mismo tamaño que los arreglos A y B. En este caso P[] = 3
    2. Tomamos el primer elemento de A y buscamos en que posición de B se encuentra el elemento y 
    guardamos la posición en P. 24 se encuentra en la posición 1 de B. Por lo que P[]={1}.
    3. Repetimos el paso anterior hasta que hayamos recorrido todo el arreglo de A.
    Al final tendriamos que P = [1, 3, 0, 2]


CONTEXTO

Algoritmo que necesitamos:
    - Un algoritmo de busqueda


ANALIZAR

¿Cuanto nos toma todo el proceso?
n^2
Todo este proceso nos toma n al cuadrado ya que debemos de buscar cada elemento de A en B.
Para posteriormente guardar el resultado de la posición, en P.


¿LO PODEMOS HACER MEJOR?
BREAK DOWN

A = [24,61,7,12]  B = [7,24,12,61]
Utilizamos una hashtable donde guardaremos los elementos y posiciones del arreglo B.
La key es el elemento del array y su valor es su posición dentro del array.

1. Guardar los elementos y posiciones de B en una hashtable. 
2. Tomamos el primer elementos de A y lo buscamso en la hashtable.
3. Ya que encontramos el elemento en nuestra hashthable, guardamos su valor en un nuevo arreglo P. P[] = {1}
4. Repetimos el paso anterior hasta que ya no tengamos que buscar mas elementos de A en la hashtable. 

Resultado: P = [1, 3, 0, 2]

ANALIZAR
NumeroElementosDentroDelArray + HashTable
n + n = 2n 
Como el número dos es una constante, podemos decir que el tiempo es de n. 


CONCLUSIÓN
Como podemos observar, ambas formas resuelven el problema. La diferencia mas importante es que la primer forma lo resuelve en un tiempo de n^2 y la segunda forma en un tiempo de n. La primer forma es mas sencilla de implementar 
ya que, no requiere de algoritmos complejos. Sin embargo, el tiempo de ejecución es muy poco eficiente a 
comparación de la segunda forma. El problema especifica que los arreglos A y B tienen un rango del 1 al 100.
Podemos observar que no son muchos los elementos que tenemos que analizar, por lo que la primer opcion no es
una mala idea. Pero si en algun momento ese rango aumenta, sería comveniente implementar la segunda opcion. 