#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define NUM_THREADS 5

void *taskcode(void *argument)
{
    int tid;

    tid = *((int *) argument);
    printf("Hello world its me, thread %d!\n", tid);
    return NULL;
}

int main(void)
{
    pthread_t threads[NUM_THREADS];
    int thread_args[NUM_THREADS];
    int rc, i;

    for(i=0;i<NUM_THREADS;i++)
    {
        thread_args[i] = i;
        printf("In main creating thread %d\n", i);
        rc = pthread_create(&threads[i], NULL, taskcode, (void*) &thread_args[i]);
        assert(rc == 0);        
    }

    //wait for each thread to complete
    for(i=0; i < NUM_THREADS; i++)
    {
        rc = pthread_join(threads[i], NULL);
        printf("In main thread %d is complete.\n", i);
        assert(rc == 0);
    }

    printf("In main: all threads completed successfully\n");
    return EXIT_SUCCESS;
}