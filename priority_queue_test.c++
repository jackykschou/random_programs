#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
#include <cstdlib> //for rand
#include <ctime>

using namespace std;

/*create a vector of custom Objects, put them into a priority queue with custom comparator, then change the data in the queue that determines their priority
this program check is a priotity do the sorting automatically after initial pushes
*/

//class
class A
{
public: 
	static int id;
	int x;
	int y;
	A()
	{
		x = ++id;
		y = id;
	}

};

int A::id = 0;

//function object for the comparison
class Comp_A
{
public:
	bool operator()(A& a1, A& a2) 
    {
       return a1.y > a2.y;
    }
};

int main()
{
	srand(time(0));
	vector<A> v(10);
	for(auto elem: v)
	{
		cout << elem.x << endl;
	}

	cout << endl;

	priority_queue<reference_wrapper<A>, vector<reference_wrapper<A>>, Comp_A> pq(v.begin(), v.end());
	
	vector<reference_wrapper<A>> v2(v.begin(), v.end());

	//change the data
	for_each(v2.begin () , v2.end () , [](A& a){
		a.y = rand() % 10 + 1;
	});


	while(!pq.empty())
	{
		cout << pq.top().get().x << endl;
		pq.pop();
	}

	return 0;
}

/*
------output:------
1
2
3
4
5
6
7
8
9
10

1
3
7
10
6
2
5
4
8
9
*/
