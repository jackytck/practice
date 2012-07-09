// BEGIN CUT HERE
/*

*/
// END CUT HERE
#line 7 "BioScore.cxx"
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

class BioScore
{
    public:
        void setFreq(string a, string b)
        {
            char c, d;
            forv(i, a)
            {
                c = a[i];
                d = b[i];
                switch (c)
                {
                    case 'A':
                        switch (d)
                        {
                            case 'A':
                                F[0]++;
                                break;
                            case 'T':
                                F[5]++;
                                break;
                            case 'C':
                                F[4]++;
                                break;
                            case 'G':
                                F[6]++;
                                break;
                        }
                        break;
                    case 'C':
                        switch (d)
                        {
                            case 'A':
                                F[4]++;
                                break;
                            case 'T':
                                F[7]++;
                                break;
                            case 'C':
                                F[1]++;
                                break;
                            case 'G':
                                F[8]++;
                                break;
                        }
                        break;
                    case 'T':
                        switch (d)
                        {
                            case 'A':
                                F[5]++;
                                break;
                            case 'T':
                                F[2]++;
                                break;
                            case 'C':
                                F[7]++;
                                break;
                            case 'G':
                                F[9]++;
                                break;
                        }
                        break;
                    case 'G':
                        switch (d)
                        {
                            case 'A':
                                F[6]++;
                                break;
                            case 'T':
                                F[9]++;
                                break;
                            case 'C':
                                F[8]++;
                                break;
                            case 'G':
                                F[3]++;
                                break;
                        }
                        break;
                }
            }
        }
        long long dot(int A[], int B[])
        {
            long long ret = 0;
            forn(i, 10)
                ret += A[i] * B[i];
            return ret;
        }
        double maxAvg(vector <string> knownSet) 
        {
            int n = knownSet.sz;
            forn(i, 10)
                F[i] = 0;
            forn(i, n)
                For(j, i+1, n)
                {
                    string a = knownSet[i];
                    string b = knownSet[j];
                    setFreq(a, b);
                }
            sort(F+4, F+10);
            int w[10];
            long long best = 0;
            bool first = true;
            For(i, 1, 11)
                For(j, 1, 11)
                    For(k, 1, 11)
                        For(l, 1, 11)
                        {
                            int s = i + j + k + l;
                            if(s%2 != 0)
                                continue;
                            w[0] = i;
                            w[1] = j;
                            w[2] = k;
                            w[3] = l;
                            w[4] = -10;
                            w[5] = -10;
                            w[6] = -10;
                            w[7] = 10 - s/2;
                            w[8] = 10;
                            w[9] = 10;
                            if(first)
                            {
                                best = dot(F, w);
                                first = false;
                            }
                            else
                                best = max(best, dot(F, w));
                        }
            return double(best) / (n * (n - 1)) * 2;
        }
    private:
        int F[10];
        	
    // BEGIN CUT HERE
        public:
        void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
        private:
        template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
        void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
        void test_case_0() { string Arr0[] = {"AAA","AAA","AAC"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 30.0; verify_case(0, Arg1, maxAvg(Arg0)); }
        void test_case_1() { string Arr0[] = {"ACTGACTGACTG","GACTTGACCTGA"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = -4.0; verify_case(1, Arg1, maxAvg(Arg0)); }
        void test_case_2() { string Arr0[] = {"ACTAGAGAC","AAAAAAAAA","TAGTCATAC","GCAGCATTC"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 50.5; verify_case(2, Arg1, maxAvg(Arg0)); }

    // END CUT HERE
 
}; 
// BEGIN CUT HERE 
int main()
{
	BioScore ___test; 
    ___test.run_test(-1); 
}
// END CUT HERE 
