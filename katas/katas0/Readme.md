Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

BREAK DOWN

- ¿El arreglo esta ordenado?
no

- ¿Que pasa si no da?
Debe de ser por lo menos dos elementos en el array

- ¿Son números negativos y positivos?
Solo número positivos


CASOS

- Primer caso, el más sencillo:
Es cuando solo tenemos dos elementos en el array, ya que, solo devolvemos la posición [0,1]

- Segundo Caso:
    Asumiendo que tenemos el siguiente arreglo [2,7,4] target=6
    1. Tomamos el primer elemento del array y se lo restamos a nuestro target
        6-2=4
    2. Buscamos si dentro de nuestro array tenemos el resultado de la resta anterior, en este caso el número 4
    3. Como si se encontró el número 4, dentro del array, devolvemos la posición [0,2]

- Tercer Caso: 
    Asumiendo que tenemos el siguiente arreglo [2,7,4] target=11
    1. Tomamos el primer elemento del array y se lo restamos a nuestro target
        11-2=9
    2. Buscamos si dentro de nuestro array tenemos el resultado de la resta anterior, en este caso el número 9
    3. Como no encontramos el número 9, nos pasamos al siguiente elemento de nuestro array y le volvemos a restar ese elemento a nuestro target.
        11-7=4
    4. Como si se encontró el número 4, dentro del array, devolvemos la posición [1,2]


CONTEXTO

Algoritmo:
    - Selecciono un elemento (algoritmo de ordenamiento)
    - Busco en el resto (algortimo de busqueda)


ANALIZAR

¿Cuanto nos toma todo el proceso?

NumeroElementosDentroDelArray(buscar + ordenar)
n(nlogn + nlogn)
n^2


¿LO PODEMOS HACER MEJOR? ¿EN UN TIEMPO DE N?
BREAK DOWN

[2,7,4] target=11
Utilizamos una hashtable donde la key es el elemento del array y su valor es su posición dentro del array.

1. Tomamos el primer elemento del array y se lo restamos a nuestro target
        11-2=9
2. Buscamos si en nuestar Hash Table tenemos el resultado de la resta anterior, en este caso el número 9
3. Como no encontramos el número 9, nos pasamos al siguiente elemento de nuestro array y le volvemos a restar ese elemento a nuestro target.
        11-7=4
4. Buscamos el número 4 dentro de nuestra Hash Table, como si se encontro devolvemos el valor del elemento 7 y del elemento 4. 
        [1,2]

ANALIZAR
NumeroElementosDentroDelArray + HashTable
n + n = 2n 
Como el número dos es una constante, podemos decir que el tiempo es de n. 


CONCLUSIÓN
Como podemos observar, ambas formas resuelven el problema. La diferencia mas importante es que la primer forma lo resuelve en un tiempo de n^2
y la segunda forma en un tiempo de n. La primer forma es mas sencilla de implementar ya que, utiliza podemos utilizar algoritmos sencillos de 
busqueda y ordenamiento. La segunda forma requiere de un algoritmo mas completo, una Hash Table. Si nuestro array va a tener muy pocos elementos,
unos 100 elementos, la primer forma podría ser la solución mas optima. Pero si nuestro array tiene miles y miles de elementos, sin duda la 
segunda forma es la mejor solución. 