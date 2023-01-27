# ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal(void);
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal(void);
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound() const = 0;
    protected:
        std::string _type;
};

#endif