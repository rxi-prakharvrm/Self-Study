#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <sys/types.h>

sem_t s;
int count = 0;

void *inc() {
  for(int i = 0; i < 10000; i++) {
    sem_wait(&s);
    count++; // this operation is atomic
    sem_post(&s);
  }
  printf("After increment: %d\n", count);
  return NULL;
}

void *dec() {
  for(int i = 0; i < 10000; i++) {
    sem_wait(&s);
    count--; // this operation is atomic
    sem_post(&s);
  }
  printf("After decrement: %d\n", count);
  return NULL;
}

int main() {
  pthread_t t1, t2;
  sem_init(&s, 0, 1);
  
  pthread_create(&t1, NULL, inc, NULL);
  sleep(1);
  pthread_create(&t2, NULL, dec, NULL);
  
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);

  sem_destroy(&s);
  printf("Final value of count: %d\n", count);
  return 0;
}