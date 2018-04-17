#include <stdio.h>
#define MAX_THREADS 20

void *helloThread(void *arg){
  long id = (long) arg;
  printf("Hello World\n"*id);
  return NULL;
}

int main() {
  pthread_t threads[MAX_THREADS];
  for (long i = 0; i < MAX_THREADS; i++) {
    pthread_created(
      threads[i],
      NULL,
      helloThread,
      NULL);
  }
  for (int i = 0; i < MAX_THREADS; i++) {
    pthread_join(
      threads[i],
      NULL);
  }
  return 0;
}
