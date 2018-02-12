Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"  Output: true  

Example 2:
Input: "LL"  Output: false  


BREAK DOWN
- ¿Son puras mayusculas, puras minusculas o combinado?
Puras mayusculas

- ¿La posición incial del robot siempre será (0, 0)?
Si, siempre sera esa misma posición

- ¿Podemos ingresar un caracter que no sea R, L, U o D?
Si, se puede ingresar cualquier caracter pero el programa solo funciona correctamente con los
caracteres R, L, U o D.

- ¿Que sucede si ingresamos un caracteres que no sea R, L, U o D?
El programa se ejecuta pero el resultado sera siempre (0, 0) ya que nunca entrara a ningun if.


CASOS

Inicialmente el robot esra en la posición (x, y) = (0, 0). Si el movimiento es 'U' el robot se 
mueve a la posición (x, y-1). Si el movimiento es R el robot se mueve a la posición (x+1, y) y 
así sucesivamente. 

- Primer caso: caso en el que la cadena es correcta. Es decir, una vez recorrida la cadena el 
robot termina en la misma posición en la que empezo. 
    Ejemplo: Input: "UD"  Output: true  
        Paso 1: Creamos un for que recorra toda la cadena. 
        Paso 2: Creamos una variable que nos guarde el movimiento actual. 
            char move = path[i];
        Paso 3: Creamos una serie de "if" y de "else if" donde dependiendo de movimiento actual 
        la posición (0, 0) va ir cambiando.
        Paso 4: Regresamos el valor final de (x, y).
        Paso 5: Si el valor final de (x, y) sigue siendo (0, 0), la secuencia de movimientos 
        es circular. 

- Segundo caso: caso en el que la cadena es incorrecta. Es decir, una vez recorrida la cadena el 
robot termina en una posición distina a (0, 0). 
    Input: "LL"  Output: false 
        Paso 1: Creamos un for que recorra toda la cadena. 
        Paso 2: Creamos una variable que nos guarde el movimiento actual. 
            char move = path[i];
        Paso 3: Creamos una serie de "if" y de "else if" donde dependiendo de movimiento actual 
        la posición (0, 0) va ir cambiando.
        Paso 4: Regresamos el valor final de (x, y).
        Paso 5: Si el valor final de (x, y) no es (0, 0), la secuencia de movimientos 
        NO es circular. 


ANALIZAR

¿Cuanto nos toma todo el proceso?
O(N)
Todo este proceso nos toma solamente N, donde N es la longitud de la cadena de caracteres.


¿LO PODEMOS HACER MEJOR?
Yo creo que no se puede hacer mejor, la manera en la que ya se hizo fue una manera bastante simple 
y con una complejidad de tan solo O(N). Esto se debe a que vamos iterando con respecto a la cadena
de caracteres. 
