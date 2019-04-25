#include <iostream>
#include "single.h"
#include "single1.h"
#include "single2.h"
#include "pthread.h"

//single1.h differs from single.h in the lazyCreate() function with the
//inclusion of usleep(), which is meant to give a window of opportunity 
//for a second thread to access the if statement 

using namespace std;

void* threadAttack(void * arg){
  
    arg = Singleton1::lazyCreate();
    
    cout <<"class_obj:"<< arg << endl;

    void* retval;
    return retval;
}

void* threadsafeAttack(void* arg){

    arg = Singleton2::threadSafe();

    cout <<"class_obj:"<< arg <<endl;

    void* retval;
    return retval;

}

int main(){
    pthread_t test1;
    pthread_t test2;

    pthread_t test3;
    pthread_t test4;

    Singleton* ptr1;
    Singleton* ptr2;

    Singleton1* ptr3;
    Singleton1* ptr4;

    Singleton2* ptr5;
    Singleton2* ptr6;

    cout <<"Lazy Creation, single thread"<<endl;
    ptr1 = Singleton::lazyCreate();
    ptr2 = Singleton::lazyCreate();

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout <<"Lazy Creation, multi-threaded"<<endl;
    pthread_create(&test1, NULL, &threadAttack, ptr3);
    pthread_create(&test2, NULL, &threadAttack, ptr4);

    pthread_join(test1, NULL);
    pthread_join(test2, NULL);

    cout <<"Threadsafe Creation, multi-threaded"<<endl;
    pthread_create(&test3, NULL, &threadsafeAttack, ptr5);
    pthread_create(&test4, NULL, &threadsafeAttack, ptr6);


    pthread_join(test3, NULL);
    pthread_join(test4, NULL);
    return 0;

}
