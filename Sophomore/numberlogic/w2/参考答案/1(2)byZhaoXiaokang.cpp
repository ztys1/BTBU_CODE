#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	int query;
	
	cin >> query;
	int l = sizeof(query) * 8;
	while(l > 0)
	{
		s.push(query & 1);
		query = query >> 1;
		l--;
	}
	
	while(!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	
	cout << endl;
	
	return 0;
}
