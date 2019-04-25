#include <unistd.h>

class Singleton1{

    private:

    static Singleton1* instance;
    Singleton1(){}; 
    int nums;

    public:

    // lazy instantiation 
    static Singleton1* lazyCreate();

    // strict instantiation
    static Singleton1* threadSafe(); 

};

Singleton1* Singleton1::instance = 0;

Singleton1* Singleton1::lazyCreate(){

    if(instance == 0){
       usleep(1000000); 
        instance = new Singleton1;
    }

    return instance;

}// end of lazyCreate



Singleton1* Singleton1::threadSafe(){
    static Singleton1 safe_instance;

    return &safe_instance;
}// end of threadSafe

