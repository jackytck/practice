#line 2 "Unblur.cxx"
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

class Unblur
{
    public:
        vector <string> original(vector <string> blurred)
        {	 	 
            vector <string> ret;
            int h = blurred.sz, w = blurred[0].sz;
            vector <vector <int> > un(h, vector <int> (w, 0));
            forn(y, h)
                forn(x, w)
                {
                    if(x == 0 || x == w-1 || y == 0 || y == h-1)
                        continue;
                    int sum = blurred[y-1][x-1] - '0';
                    un[y][x] = sum;
                    forn(i, 3)
                        forn(j, 3)
                        {
                            if(i==0 && j==0)
                                continue;
                            int px = x-i, py = y-j;
                            if(px >= 0 && py >= 0)
                                un[y][x] -= un[py][px];
                        }
                }
            forv(i, un)
            {
                string s = "";
                forv(j, un[i])
                    s += un[i][j] == 0 ? "." : "#";
                ret.PB(s);
            }
            return ret;
        } 
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arr0[] = { "1221",
  "1221",
  "1221" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "....",  ".##.",  "...." }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, original(Arg0)); }
	void test_case_1() { string Arr0[] = { "00000",
  "00000",
  "00000",
  "00000" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { ".....",  ".....",  ".....",  "....." }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, original(Arg0)); }
	void test_case_2() { string Arr0[] = { "0011212121100",
  "0123333333210",
  "0123333333210",
  "1233333333321",
  "1233333333321",
  "1233333333321",
  "0112121212110" } ; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { ".............",  "...#.#.#.#...",  "..#.#.#.#.#..",  ".............",  ".#.#.#.#.#.#.",  "..#.#.#.#.#..",  "............." }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, original(Arg0)); }
	void test_case_3() { string Arr0[] = { "1233321000000000123332100000000000000000000",
  "1244422233222332334343323322232112332223321",
  "1255523344343443545343434434343233432334432",
  "0033303455465775633011445546454355753457753",
  "0033303333364543533011433336333364521346542",
  "0033303455464532445343545546454355753446542",
  "0022202344342200234343434434343233432323221",
  "0011101233221100123332223322232112332211111" } ; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "...........................................",  ".#####...........#####.....................",  "...#...####.####.#...#.####.###..####.####.",  "...#...#..#.#..#.#.....#..#.#..#.#....#..#.",  "...#...#..#.####.#.....#..#.#..#.###..####.",  "...#...#..#.#....#...#.#..#.#..#.#....#.#..",  "...#...####.#....#####.####.###..####.#..#.",  "..........................................." }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, original(Arg0)); }
	void test_case_4() { string Arr0[] = { "0000123210000",
  "0012456542100",
  "0135789875310",
  "0258988898520",
  "1479865689741",
  "2589742479852",
  "2589742479852",
  "1479865689741",
  "0258988898520",
  "0135789875310",
  "0012456542100",
  "0000123210000" }
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { ".............",  ".....###.....",  "...#######...",  "..#########..",  "..####.####..",  ".####...####.",  ".####...####.",  "..####.####..",  "..#########..",  "...#######...",  ".....###.....",  "............." }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, original(Arg0)); }

// END CUT HERE
 
}; 

// BEGIN CUT HERE 
int main()
{
    Unblur ___test; 
    ___test.run_test(-1); 
}
// END CUT HERE
