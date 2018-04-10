#include <stdio.h>
#include <unistd.h>

int main() {
  int pid;

  pid = fork();
  if(pid == 0) {
    execl("C:\Windows\System32\calc.exe","Calc",(char *)0);
    printf("Soy el proceso hijo\n");
  } else {
    printf("Soy el proceso padre\n");
  }

  return 0;
}
