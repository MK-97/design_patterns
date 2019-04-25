#include <iostream>
class DwarfLumberjack{


    public:
        DwarfLumberjack(){
            std::cout <<"Dwarf Lumberjack gets out of bed" << std::endl;
        }

        ~DwarfLumberjack(){
            std::cout <<"Dwarf Lumberjack goes back to bed" << std::endl;

        }
        void getLumber(){
            std::cout <<"Dwarf Lumberjack cuts down a tree"<< std::endl;
        }
        void deliverLumber(){
            std::cout <<"Dwarf Lumberjack delivers logs to Dwarf Builder" << std::endl;

        }

};
