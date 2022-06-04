
#include <iostream>
#include "Dictionary.h"


int main()
{
   int a = 5;
   Dictionary<int, int> dict{std::move(a),5};
   
   try {
	   dict.get(5);
   }
   catch (std::exception ex)//как прокинуть любой эксепшн вне зависимости от типа
   {
	   std::cout << ex.what() << "\n";
   }
   std::cout << "Hello World!\n";
}
