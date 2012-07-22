#line 2 "SchoolAssembly.cxx"
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

class SchoolAssembly
{
    public:
        int getBeans(int kids, int quantity)
        {	 	 
            return (kids * quantity + 4 * (quantity - 1) + 19) / 20;
        } 
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; int Arg1 = 5; int Arg2 = 2; verify_case(0, Arg2, getBeans(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 1; int Arg1 = 2; int Arg2 = 1; verify_case(1, Arg2, getBeans(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 5; int Arg1 = 5; int Arg2 = 3; verify_case(2, Arg2, getBeans(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 223; int Arg1 = 15; int Arg2 = 171; verify_case(3, Arg2, getBeans(Arg0, Arg1)); }

// END CUT HERE
 
}; 

// BEGIN CUT HERE 
int main()
{
    SchoolAssembly ___test; 
    ___test.run_test(-1); 
}
// END CUT HERE
