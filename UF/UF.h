
#ifndef UF_H
#define UF_H 

class UF
{
public:
	UF(int N);
	~UF();
	int find(int p, int q, int N);
	void unite(int p, int q, int N);
	void compresion(int p, int q, int N);

private:
	#include <C:\Users\HP GAMING\Desktop\Program\UF\UF_private.h>
	
};

#endif