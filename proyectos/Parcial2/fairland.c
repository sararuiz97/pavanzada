#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n = 6;
int d = 5;
int *emp = {10, 1, 3, 17};
int *numMax = {6, 5};
int *manager = {5, 2, 7, 19};
int *idEmpleado = {1, 2, 3, 4, 5};

int *getSalary(int *salary) {
  // metodo que recibe un arreglo con los siguientes datos (S0, As, Cs, Rs)
  // FORMULA Si+1 = (Si * As + Cs) mod Rs
  // Con la formula anterior calculamos los salarios de cada empleado.
  return *salary;
  // devuelve un arreglo con lo salarios ya asignados.
}

int *getTree(int *tree) {
  // metodo que recibe un arreglo con los siguientes datos (M0, Am, Cm, Rm)
  // FORMULA Mi+1 = (Mi * Am + Cm) mod Rm Y Mi mod i.
  // Con las formulas anteriores calculamos la posicion de cada empleado en el arbol
  return *tree;
  // devuelve un arreglo con las posiciones ya asignadas
}

boolean lawOne(int *numMax){
  boolean flag;
  //Comprobar que numMax[0] sea mayor a 0
  if(numMax[0] > 0){
    flag = true
  } else {
    flag = false;
  }

  return flag;
}

boolean lawTwo() {
  boolean flag;
  // Comprobar que cada empleado tenga un manager, a excepcion del CEO
  // mandamos a llamar la funcion getTree
  // Necesitamos de fors anidados para recorred el arreglo tree y el arreglo idEmpleado.
  for(){
    for() {
      if(tree[i] != idEmpleado[i]){
        if(tree[i] < n && tree[i] >= 0){
          if(tree[i] != NULL){
            flag = true;
          }
        }
      }
      flag = false;
    }
  }
  return flag;
}

void lawThree() {
  // Cada empleado que apunte al manager que tiene que irse, tambien debe irse.
  if(tree[i] == ManagerQueDebeIrse){
    // Buscar en idEmpleado el id del manager que debe irse e eliminarlos
    // del arreglo junto con el manager
  }
}

void lawFour() {
  // Asegurar que el CEO nunca sea removido
}

void lawFive() {
  // Cada empelado tiene un salario para esto mandamos a llamar la funcion getSalary
  // El arreglo salary jamas debe ser modificado.
}

void lawSix() {
  // Con los metodos getSalary y getTree nos aseguramos que los salarios
  // no dependen de su posicion en el arbol.
}

int *lawSeven() {
  int *solucion;
  // la diferencia de el mayor salario contra el menor, no debe sobrepasar a d.
  // Debemos comprobar cada diferencia entre el salario del CEO y el salariod e cada empleado
  // Si esta diferencia es mayor a "d" el empleado debe de irse junto con sus hijos.
  for(){
      if((salary[0] - salary[i]) > d) {
        delete(salary[i]);
      } else {
        solucion = salary[i];
      }
  }
  return solucion;
  
}
