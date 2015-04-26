
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {

	int max = 0;
	for (int i = l; i <=r; i++)
	{
		for(int j = i; j <=r; j++)
		{
			int value = i^j;
			if (value > max)
			{
				max = value;
			}
		}
	}

	return max;
}

int main() 
{
    int res;
    int n1,n2;
    cin >> n1;
    cin >> n2;

   	res = maxXor(n1, n2);
   	cout << res;
    
    return 0;
}