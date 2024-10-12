#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int count = 0;

void *inc() {
  for(int i = 0; i < 10000; i++) {
    pthread_mutex_lock(&mutex);
    count++; // this operation is atomic
    pthread_mutex_unlock(&mutex);
  }
  printf("After increment: %d\n", count);
  return NULL;
}

void *dec() {
  for(int i = 0; i < 10000; i++) {
    pthread_mutex_lock(&mutex);
    count--; // this operation is atomic
    pthread_mutex_unlock(&mutex);
  }
  printf("After decrement: %d\n", count);
  return NULL;
}

int main() {
  pthread_t t1, t2;
  
  pthread_create(&t1, NULL, inc, NULL);
  sleep(1);
  pthread_create(&t2, NULL, dec, NULL);
  
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  
  pthread_mutex_destroy(&mutex);
  printf("Final value of count: %d\n", count);
  return 0;
}