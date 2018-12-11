#define DEBUG 1
#include <iostream>
#include "Queue_Cwc.h"


main()
{
	Queue<std::string> Q;
	Q.put("merhaba");
	Q.put("Ali");
	Q.put("Veli");
	Q.put("bmerhaba");
	Q.put("cAli");
	#ifdef DEBUG
	Q.printstr();
	#endif
	printf("%s",Q.read().c_str());
	printf("%s",Q.pop().c_str());
	printf("%s",Q.pop().c_str());
	printf("%s",Q.pop().c_str());
	printf("%s",Q.pop().c_str());
	printf("%s",Q.pop().c_str());
	printf("%s",Q.pop().c_str());
}
