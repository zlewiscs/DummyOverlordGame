#ifndef CHARACTER_H
#define CHARACTER_H

#define MAX_ATTRIBUTE 100

#include <string.h> 

class Character {
    private:
        int attack;
        int defence;
        int dexterity;
        int intelligence;
        int mana;
        int physical;
        

        void update_attribute(std::string attribute) {

        }
    
    public:
        std::string name;
        int in_game_DOB;
        std::string guild_name;

        void check_attribute(std::string attribute) {
            
        }

        void allocate_skill_points(std::string attribute, int skill_point) {

        }

        void enter_guild_hall() {
            std::cout << "Entered guild hall" << '\n';
        }
};


#endif