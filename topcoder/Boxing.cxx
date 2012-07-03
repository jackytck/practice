// BEGIN CUT HERE

// END CUT HERE
#line 5 "Boxing.cxx"
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define sz size()
#define PB push_back
#define clr(x) memset(x, 0, sizeof(x))
#define forn(i,n) for(__typeof(n) i = 0; i < (n); i++)
#define ford(i,n) for(int i = (n) - 1; i >= 0; i--)
#define forv(i,v) forn(i, v.sz)
#define For(i, st, en) for(__typeof(en) i = (st); i < (en); i++)

using namespace std;

class Boxing {
	public:
	int maxCredit(vector <int> a, vector <int> b, vector <int> c, vector <int> d, vector <int> e) 
	{
        int ret = 0;
        vector <bool> A(180001, false);
        vector <bool> B(180001, false);
        vector <bool> C(180001, false);
        vector <bool> D(180001, false);
        vector <bool> E(180001, false);
        forv(i, a)
            A[a[i]] = true;
        forv(i, b)
            B[b[i]] = true;
        forv(i, c)
            C[c[i]] = true;
        forv(i, d)
            D[d[i]] = true;
        forv(i, e)
            E[e[i]] = true;
        forv(i, A)
        {
            if(!A[i] && !B[i] && !C[i] && !D[i] && !E[i])
                continue;
            vector <bool> pressed(5, false);
            For(j, i, A.sz)
            {
                if(j-i > 1000)
                    break;
                bool dirty = false;
                if(A[j])
                {
                    pressed[0] = true;
                    dirty = true;
                }
                if(B[j])
                {
                    pressed[1] = true;
                    dirty = true;
                }
                if(C[j])
                {
                    pressed[2] = true;
                    dirty = true;
                }
                if(D[j])
                {
                    pressed[3] = true;
                    dirty = true;
                }
                if(E[j])
                {
                    pressed[4] = true;
                    dirty = true;
                }
                if(dirty)
                {
                    int cnt = 0;
                    forv(k, pressed)
                        if(pressed[k])
                            cnt++;
                    if(cnt >= 3)
                    {
                        ret++;
                        i = j;
                        break;
                    }
                }
            }
        }
        return ret;
	}
};
