#include <stdio.h>
#include <string.h>

int main() {
  // Variables que necesitaremos:
  int n;
  int index, temp, end, start, lenght;
  char frase[];
  char reverse[]:

  printf("Input: ");
  // Debemos guardar el primer valor en una variable n.
  // El siguiente valor es una frase por la que la obtenemos con gets.
  gets(frase);
  lenght  = strlen(frase); // almacenamos la longitud de nuestro arreglo en una variable lenght
  index = 0; // inicializamos nuestra variable index en cero

  start = lenght - 1;
  end = lenght - 1;

  while(start > 0) { // Mientras la longitud de start sea mayor a cero
    if(frase[start] == ' ') { // Tenemos este if para indicar que nos hemos topado con una palabra
      temp = start + 1; // añadimos la palabra a temp.

      while(temp <= end) { // Mientras nuestra variable temp sea menor o igual a la longitud de end.
        reverse[index] = frase[temp]; // Guardamos la palabra que se encuentra en frase en la posicion temp
        temp++;                       // en reverse en la posicion index
        index++;                      // Incrementamos temp e index.
      }

      reverse[index++] = ' '; // Si no entramos al while guardamos un espacio en reverse en la posicion index++
      end = start - 1; // Debemos modificar la variable end, cada vez que hagamos un cambio
    }
    start--; // decrementamos nuestar variable start
  }

  for(int i = 0; i <= end; i++) { // Por ultimo creamos un for que recorra nuestar frase. Esto no sirve
    reverse[index] = frase[i];    // para poder agregar la ultima palabra, es decir, la primer palabra de
    index++;                      // nuestra frase original.
  }

  reverse[index] = '\0'; // Agregamos NULL al final de nuestro string ya volteado.Esto para indicar que la frase a finalizado

  printf("Reverse order \n%s", reverse);

  return 0;
}
