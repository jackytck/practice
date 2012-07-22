#line 2 "Apothecary.cxx"
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

class Apothecary
{
    public:
        vector <int> balance(int W)
        {	 	 
            vector <int> ret;
            int power = 1;
            while(W > 0)
            {
                if(W % 3 == 1)
                {
                    W--;
                    ret.PB(power);
                }
                else if(W % 3 == 2)
                {
                    W++;
                    ret.PB(-power);
                }
                W /= 3;
                power *= 3;
            }
            sort(ret.begin(), ret.end());
            return ret;
        } 
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arg0 = 17; int Arr1[] = { -9,  -1,  27 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, balance(Arg0)); }
	void test_case_1() { int Arg0 = 1; int Arr1[] = { 1 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, balance(Arg0)); }
	void test_case_2() { int Arg0 = 2016; int Arr1[] = { -243,  -9,  81,  2187 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, balance(Arg0)); }
	void test_case_3() { int Arg0 = 1000000; int Arr1[] = { -531441,  -59049,  -6561,  -243,  -27,  1,  81,  729,  2187,  1594323 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, balance(Arg0)); }

// END CUT HERE
 
}; 

// BEGIN CUT HERE 
int main()
{
    Apothecary ___test; 
    ___test.run_test(-1); 
}
// END CUT HERE
