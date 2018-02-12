1150. Page Numbers
Time limit: 1.0 second
Memory limit: 64 MB

John Smith has decided to number the pages in his notebook from 1 to N. Please, figure out the number of zeros, ones, twos, …, nines he might need.

Input
One number N (1 ≤ N < 10^9).

Output
Output 10 lines. The first line should contain the number of zeros needed, the second line should contain the number of ones needed, …, the tenth line should contain the number of nines needed.

BREAK DOWN
Sabemos que el número a evaluar tiene que ser un número dentro del rango (1 ≤ N < 10^9).

Para separar el número que me dan se me ocurrio meterlo en un array. 
    
    int temp = 1;
    for(int i=0; i<num; i++){
        arr[i] = temp;
        temp++;
    }

    Por ejemplo, si el numero es 7 el siguiente for hace lo siguiente:
    arr = [1, 2, 3, 4, 5]

Para ir contando el número de veces que se repite un número se me ocurrio utilizar "if" y "else if".

    int temp = 1;
    for(int i=0; i<num; i++){
        arr[i] = temp;
        if(arr[i]==0){
            cero++;
        } else if (arr[i]==1){
            uno++;
        } else if (arr[i]==2){
            dos++;
        } else if (arr[i]==3){
            tres++;
        } else if (arr[i]==4){
            cuatro++;
        } else if (arr[i]==5){
            cinco++;
        } else if (arr[i]==6){
            seis++;
        } else if (arr[i]==7){
            siete++;
        } else if (arr[i]==8){
            ocho++;
        } else if (arr[i]==9){
            nueve++;
        }
        temp++;
    }

    De esta manera tendriamos como resultado:
    0
    1
    1
    1
    1
    1
    0
    0
    0
    0


ANALIZAR
Como podemos observar, esta no es la manera mas optima de resolver el problema. Para guardar
el numero, separado, en un array tenemos que recorrerlo todo y evaluar los digitos con 
multiples "else if". Pero nuestro problema mas importante es que esta solución no funciona
para un número mayor a 9, por lo que lo hace una solución bastante mala. 


¿LO PODEMOS HACER MEJOR?
BREAK DOWN
Definitivamente se puede hacer mejor. Por el momento no se me ocurre otra forma en la cual 
guardar el numero ya separado. Lo que si se me ocurrio despues de esta solución fallida fue
en como separar los digitos con modulo. 
    Por ejemplo:
    Si tenemos el número 12, con mi método el array quedaría de la siguiente forma:
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
    ¿Como podemos separar el número 10 en dos digitos?
    Con modulos
        - Primer paso: dividir el numero 10 entre 2. El resultado de la división es 1.
        Este digito lo guardamos en una nueva posición de nuestro array.
        - Segundo paso: Utilizamos modulos para obtener el residuo de 10 % 10. El
        resultado es 0 por lo que lo guardamos en una nueva posición del array
    Podemos comparar cada elemento del array y separar en digitos y expandir el array para 
    guardarlos.

Sinceramente, no es una forma facil de implementar, de echo, no se me ocurre como implementarla.
Simplemente es lo que pense que se podria hacer para dividir el número en digitos. 


CONCLUSIÓN
Con este proyecto aprendí la importancía de analizar el problema y solucionarlo antes de programar.
Lo leí y se me hizo bastante sencillo por lo que solo empece a escribir y escribir codigo. Ya que 
lo acabe me di cuenta que mi solucion no era ni cerca de ser optima y tenía bastantes fallas. 
Despues de pensarlo un rato se me ocurrio una solución que es la que explique anteriormente. Pero
no se ni como implementarla y suena demasiado dificil que seguramente hay una forma mucho mas
sencilla de resolver el problema. 