#include <iostream>
#include<queue>
template<typename T>
void print(T &pq)
{
	while(!pq.empty())
	{
		std::cout<<pq.top()<<"\t";
		pq.pop();
	}
}





int  main()
{
	std::priority_queue<int> pq;
	std::vector<int> vt={3,1,5,10,100,20,30,15};

	for(auto it:vt)
	{
		pq.push(it);
	}
	print(pq);

	std::priority_queue<int, std::vector<int>, std::greater<int> > pq1=pq;
	print(pq1);

	return 0;
}
