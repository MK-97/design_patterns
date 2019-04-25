#include <iostream>
class DwarfMiner{

    public:
        DwarfMiner(){
            std::cout <<"Dwarf Miner gets out of bed"<< std::endl; 
        }

        ~DwarfMiner(){
            std::cout <<"Dwarf Miner going back to bed" << std::endl;
        }
        void getMinerals(){
            std::cout <<"Dwarf Miner mines minerals from the mineshaft" << std::endl;


        }

        void deliverMinerals(){

            std::cout <<"Dwarf Miner delivers minerals to Dwarf Builder" << std::endl;

        }


};
