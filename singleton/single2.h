#include <unistd.h>

class Singleton2{

    private:

    static Singleton2* instance;
    Singleton2(){}; 
    int nums;

    public:

    // lazy instantiation 
    static Singleton2* lazyCreate();

    // strict instantiation
    static Singleton2* threadSafe(); 

};

Singleton2* Singleton2::instance = 0;

Singleton2* Singleton2::lazyCreate(){

    if(instance == 0){
       usleep(1000000); 
        instance = new Singleton2;
    }

    return instance;

}// end of lazyCreate



Singleton2* Singleton2::threadSafe(){
    static Singleton2 safe_instance;

    return &safe_instance;
}// end of threadSafe

