class Singleton{

    private:

    static Singleton* instance;
    Singleton(){}; 
    int nums;

    public:

    // lazy instantiation 
    static Singleton* lazyCreate();

    // strict instantiation
    static Singleton* threadSafe(); 

};

Singleton* Singleton::instance = 0;

Singleton* Singleton::lazyCreate(){
    if(instance == 0)
        instance = new Singleton;

    return instance;

}// end of lazyCreate


Singleton* Singleton::threadSafe(){
    static Singleton safe_instance;

    return &safe_instance;
}// end of threadSafe

