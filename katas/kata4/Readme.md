Valid Number

Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true

Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

BREAK DOWN
- Debemos ignorar espacios en blanco
- Ignorar los siguientes simbolos al inicio del String {+,-,.}
- Debemos asegurarnos que los simbolos permitidos sean los siguientes {+,-,e,.,[0-9]}
- No puede haber un puntos seguido de un exponencial
- Un punto debe ir seguido de un digito
- El exponencial debe seguir de los siguientes simbolos {+,-,[0-9]}
- Solo estaremos comporbando con números positivos
- Tenemos un maximo de 200 caracteres por String


CASOS

- Primer caso, el más sencillo:
  Es cuando nuestro arreglo de caracteres esta vacio, por lo tanto, automaticamente la respuesta es false.


- Segundo Caso:
    Es cuando nuestro arreglo de caracteres solo esta conformado por un caracter.
    1. Comprobamos que el caracter sea un digito, si si lo es devuelve true. De lo contario devuelve false.  

- Tercer Caso:
    Asumiendo que nuestro arreglo de caracteres esta compuesto por mas de un caracter.
    1. Si el primer caracter no es uno de los siguientes simbolos {+,-,.,[0-9]} devuelve false.
    2. Creamos una bandera, PuntoExp, y la inicializamos en false. Esto nos va a servir para comprobar que
    el puntos y el exponencial se encuentran dentro de nuestro string y asegurarnos que solo aparezcan una vez.
    3. Creamos un for que recorra el arreglo de caracteres. Dentro del for tendremos los siguientes if:
      - Un if que compruebe si algunos de los caracteres no perteneces a alguno de los siguientes simbolos
      {digito, +, -, e, .}
      - Si el caracter en la posicion [i] es un puntos, tendremos los siguientes ifs:
        - Un if que cheque si la el caracter 'e' ya ocurrio antes de algun punto. Para esto Utilizamos
        nuestra vandera PuntoExp. De ser así devuelve false.
        - Un if que compruebe si el ultimo caracter es un punto, de ser así devuelve false.
        - Un if que compruebe si un punto fue seguido de un digito. De no ser así, devuelve false.
      - Si el caracter en la posicion [i] es un exponencial, tendremos el siguinet else if:
        - Para empezar cambiamos la bandera PuntoExp a true.
        - Un if que compruebe que hay un digito despues de un exponencial. De no ser así devuelve false.
        - Un if que compruebe si el ultimo caracter es 'e'. Si es así devuelve false.
        - Un ultimo if que compruebe que el caracter 'e' es seguido por alguno de los siguientes
        digitos {+,-,.,digito}.

    Si el string pasa todas estos casos devuelve true.


ANALIZAR

En el peor escenario tendriamos que recorrer todo nuestro arreglo de carcateres por lo tanto
tendriamos una complejidad de n.



¿LO PODEMOS HACER MEJOR? ¿EN UN TIEMPO DE N?
BREAK DOWN

Supongo que si se puede mejorar, si tenemos mas especificaciones con las cuales cumplir a lo mejorar
un switch case puede ser una mejor solución.  
