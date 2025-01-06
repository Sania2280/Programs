#include <iostream>
#include "C:\Users\Алекс\Desktop\Programs\QUEUE\queue.cxx"

int main()
{
	QUEUE<int> Queue(10);

	Queue.put(5);
	Queue.put(10);
	Queue.put(15);

	std::cout<<Queue.get()<<" " ;
	std::cout<<Queue.get()<<" ";
	

	std::cout<<Queue.get()<<" ";

	return 0;
}