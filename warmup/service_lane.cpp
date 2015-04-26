#include<vector>
#include<climits>
#include<iostream>
#include<iterator>
#include<algorithm>


using namespace std;

int main(void)
{
	int N,T;
	std::vector<int> v;
	cin >> N;
	cin >> T;

	while(N--)
	{
		int lw;
		cin >> lw;
		v.push_back(lw);
	}

	while(T--)
	{
		int indexi, indexj;
		cin >> indexi;
		cin >> indexj;
		int m = INT_MAX;
		for (int i = indexi; i <= indexj; ++i)
		{
			if (v[i] < m)
			{
				m = v[i];
			}
		}
		cout << m<< endl;
	}

}