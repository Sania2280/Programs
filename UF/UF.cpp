#include <iostream>
#include <stdlib.h>
#include "C:\Users\HP GAMING\Desktop\Program\UF\UF.cxx"

int main(int argc, char const *argv[])
{int p, q, N = atoi(argv[1]);
	UF info(N);
	while(std::cin >> p >> q){
		if(!info.find(p, q, N)){
			info.unite(p, q, N);
			info.compresion(p, q, N);
		}
	}
}