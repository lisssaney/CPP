#include "Data.hpp"

// uintptr_t serialize(Data* ptr)
// {
//     std::cout << "serialize" << std::endl;
//     return (reinterpret_cast<uintptr_t>(ptr));
// }

// Data* deserialize(uintptr_t raw)
// {
//     std::cout << "deserialize" << std::endl;
//     return (reinterpret_cast<Data *>(raw));  
// }

int main()
{
    Data *data = new Data();
    data->str = "gbump";
    data->numb = 18;

    std::cout << data << std::endl;
    std::cout << data->str << std::endl;
    std::cout << data->numb << std::endl;
    std::cout << std::endl;
    uintptr_t raw = serialize(data);
    Data *data_1 = deserialize(raw);
    
    std::cout << raw << std::endl;
    std::cout << data_1 << std::endl;
    std::cout << data_1->str << std::endl;
    std::cout << data_1->numb << std::endl;

    return (0);
}