#include <iostream>

class DwarfBuilder{

    public:
        DwarfBuilder(){
            std::cout << "Dwarf Builder gets out of bed"<< std::endl;
        }

        ~DwarfBuilder(){
            std::cout <<"Dwarf Builder going back to bed" << std::endl;
        }

        void gatherMats(){
            std::cout << "Dwarf Builder gathers materials from Dwarf Miner and Dwarf Lumberjack" << std::endl;

        }
        void buildHouse(){
            std::cout << "Dwarf Builder uses materials from the Dwarf Miner and Dwarf Lumberjack" << std::endl;
        }

};
