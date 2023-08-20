#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
    private :
        std::string name;
        AMateria *inventory[4];

    public :
        // Default Constructor.
        Character(const std::string& name);

        // Copy Constructor.
        Character(const Character &other);

        // Copy assignement operator.
    	Character &operator=(const Character &other);

        // Member Functions.
		std::string const& getName() const;
    	void equip(AMateria *m);
    	void unequip(int idx);
    	void use(int idx, ICharacter &target);

        // Default Destructor.
    	~Character();
};

#endif