#line 2 "RockStar.cxx"
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

class RockStar
{
    public:
        int getNumSongs(int ff, int fs, int sf, int ss)
        {	 	 
            int ret = 0;
            if(fs == 0 && sf == 0)
            {
                if(ff > 0)
                    ret = ff;
                else
                    ret = ss;
            }
            else if(fs != 0 && sf != 0)
            {
                ret = ff + ss + min(fs, sf) * 2;
                if(fs > sf)
                    ret++;
            }
            else if(fs == 0 && sf != 0)
            {
                if(ff > 0)
                    ret = ff;
                else
                {
                    ret = ss;
                    if(sf > 0)
                        ret++;
                }
            }
            else
            {
                ret = ff + 1 + ss;
            }
            return ret;
        } 
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 100; int Arg1 = 0; int Arg2 = 0; int Arg3 = 200; int Arg4 = 100; verify_case(0, Arg4, getNumSongs(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 0; int Arg1 = 0; int Arg2 = 20; int Arg3 = 200; int Arg4 = 201; verify_case(1, Arg4, getNumSongs(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 1; int Arg1 = 2; int Arg2 = 1; int Arg3 = 1; int Arg4 = 5; verify_case(2, Arg4, getNumSongs(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 192; int Arg1 = 279; int Arg2 = 971; int Arg3 = 249; int Arg4 = 999; verify_case(3, Arg4, getNumSongs(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE
 
}; 

// BEGIN CUT HERE 
int main()
{
    RockStar ___test; 
    ___test.run_test(-1); 
}
// END CUT HERE
