#line 2 "GroceryBagger.cxx"
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

class GroceryBagger
{
    public:
        int minimumBags(int strength, vector <string> itemType)
        {	 	 
            int ret = 0;
            map <string, int> dict;
            forv(i, itemType)
                dict[itemType[i]] = 0;
            forv(i, itemType)
                dict[itemType[i]]++;
            map <string, int>::const_iterator it;
            for(it=dict.begin(); it!=dict.end(); it++)
                ret += it->second % strength == 0 ? it->second / strength : it->second / strength + 1;
            return ret;
        } 
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; string Arr1[] = {"DAIRY",
 "DAIRY",
 "PRODUCE",
 "PRODUCE",
 "PRODUCE",
 "MEAT"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 4; verify_case(0, Arg2, minimumBags(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 3; string Arr1[] = {"DAIRY",
 "DAIRY",
 "PRODUCE",
 "PRODUCE",
 "PRODUCE",
 "MEAT"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 3; verify_case(1, Arg2, minimumBags(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 10; string Arr1[] = {}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; verify_case(2, Arg2, minimumBags(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 5; string Arr1[] = {"CANNED",   "CANNED",  "PRODUCE",
 "DAIRY",    "MEAT",    "BREAD",
 "HOUSEHOLD","PRODUCE", "FROZEN",
 "PRODUCE", "DAIRY"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 7; verify_case(3, Arg2, minimumBags(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 2; string Arr1[] = {"CANNED",   "CANNED",  "PRODUCE",
 "DAIRY",    "MEAT",    "BREAD",
 "HOUSEHOLD","PRODUCE", "FROZEN",
 "PRODUCE", "DAIRY"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 8; verify_case(4, Arg2, minimumBags(Arg0, Arg1)); }

// END CUT HERE
 
}; 

// BEGIN CUT HERE 
int main()
{
    GroceryBagger ___test; 
    ___test.run_test(-1); 
}
// END CUT HERE
