#include<iostream>
#include<vector>
#include<queue>



int main()
{
	std::vector<int> v1={1,3,2,5,4,8,6};
	std::vector<int> v2={2,7,10};
	// understand pair 1st 
	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>,std::greater<std::pair<int, int>>> pq;

	pq.push({1,10});
	pq.push({4,40});
	pq.push({2,20});
	pq.push({3,30});
	while(!pq.empty())
	{
		std::pair<int, int> p = pq.top();
		std::cout<<p.first<<" : "<<p.second<<std::endl;
		pq.pop();
	}
        // value , index in pair .
	//
	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq1;
	for(int i =0; i < v1.size();i++)
	{
	pq1.push({v1[i],i});
	}
        while(!pq1.empty())
	{ 
		std::pair<int, int> temp = pq1.top();
		pq1.pop();

		std::cout<<"pair: "<<temp.first<<" : "<<temp.second<<std::endl; 
	}

	
	return 0;
}
