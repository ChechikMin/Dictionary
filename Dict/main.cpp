
#include <iostream>
#include <any>
#include "Dictionary.h"


int main()
{
   int a = 5;
   uint16_t a1 = 1;

   Dictionary<uint16_t, int> dict2{ a1,a };
   
   try {
	   dict2.get(5);
   }
   catch (CommonException<uint16_t>  &ex)
   {
	   std::cout << ex.what() <<":"<<ex.get_key() << "\n";
   }
   catch (std::exception &ex) {
	   std::cout << ex.what() <<"\n";
   }
   std::cout << "Hello World!\n";
}
