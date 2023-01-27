# ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        virtual ~Dog(void);
        void makeSound() const;
         Brain &getBrain() const;
    private:
        Brain *_DogBrain;
};

#endif