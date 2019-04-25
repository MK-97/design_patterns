#include "DwarfBuilder.h"
#include "DwarfLumberjack.h"
#include "DwarfMiner.h"
#include <iostream>
class DwarfCommander{

    public:
        DwarfCommander(){
            std::cout <<"Dwarf Commander gets out of bed"<<std::endl; 
        }
        
        ~DwarfCommander(){
            std::cout <<"Dwarf Commander goes back to bed"<<std::endl;
        }

        void WakeUpAndWork(){

            std::cout <<"***********************\nDwarf Commander wakes up the dwarves" << std::endl;
            DwarfMiner Sven;
            DwarfLumberjack Gatmoc;
            DwarfBuilder Lammot;

            std::cout <<"***********************\nDwarf Commander gives the dwarves tasks" << std::endl;

            Sven.getMinerals();
            Gatmoc.getLumber();
            Sven.deliverMinerals();
            Gatmoc.deliverLumber();

            Lammot.gatherMats();
            Lammot.buildHouse();

            std::cout <<"***********************\nDwarf Commander sends the dwarves back to bed" << std::endl;
        }
};
