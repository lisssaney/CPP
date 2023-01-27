#include "whatever.hpp"

int main( void ) 
{ 
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "ch1";
    std::string d = "ch2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

   std::string t = "hhaha";
   std::string f = "mmmm";
   ::swap(t, f);
   std::cout << "t = " << t << ", f = " << f << std::endl;
   t = f;
   std::cout << "t = " << t << ", f = " << f << std::endl;
   std::cout << "t = " << &t << ", f = " << &f << std::endl;
   std::cout << "max( t, f ) = " << &::max(t, f) << std::endl;
  std::cout << "min( f, t ) = " << &(::min( f, t )) << std::endl;
    return 0; 
}