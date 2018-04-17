#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/mman.h>
#include "student.h"

int int main() {
  char *fileName = "student.dat";
  int fd = open(fileName,O_RDWR);
  int id;
  char name[20];
  student *pAvanzada = (Student *)mmap(
    NULL,
    10 * sizeof(Student),
    PROT_READ | PROT_WRITE,
    MAP_FILE | MAP_SHARED,
    fd,
    0);
  close(fd);
  for(int i = 0; i < 4; i++){
    printf("Give me an id and name\n");
    scanf("%d %s",&id,name);
    printf("Student[%d] = %s \n",id,pAvanzada[id].firstName);
  }

  munmap(pAvanzada, 10*sizeof(Student));
  return 0;
}
