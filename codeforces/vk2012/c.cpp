/*****************************************************************************
 * codeforces:   knst
 * topcoder:     knstqq
 * projecteuler: knstqq
 * **************************************************************************/

#include <algorithm>
#include <iostream>
#include <limits>
#include <map>
#include <regex>
#include <set>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

namespace std {
    template <class T1, class T2>
    class hash<pair<T1, T2>> {
    public:
        size_t operator()(const pair<T1, T2>& p) const {
            return hash<T1>()(p.first) & hash<T2>()(p.second);
        }
    };
}

constexpr long double const_pi() { return std::atan(static_cast<long double>(1))*4; }

const int dx4[] = {-1, 0, 0, 1};
const int dy4[] = {0, -1, 1, 0};

const int dx8[] = {-1, -1, -1,  0,  0,  1,  1,  1};
const int dy8[] = {-1,  0,  1, -1,  1, -1,  0,  1};

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    std::ios_base::sync_with_stdio(false);

    size_t n;
    cin >> n;
    string pwd = "/";
    for (size_t i = 0; i < n; ++i) {
        string cmd;
        cin >> cmd;
        if (cmd == "pwd")
            cout << pwd << endl;
        else {
            string path;
            cin >> path;
            if (path[0] == '/')
                pwd = path + "/";
            else
                pwd = pwd + path + "/";
  //          cerr << pwd << endl;
            regex e("//");
            pwd = regex_replace(pwd, e, "/");
 //           cerr << pwd << endl;

            string pwd2 = pwd;
            do {
                pwd = pwd2;
                regex e2("/[a-z]+/\\.\\./");
                pwd2 = regex_replace(pwd, e2, "/");
            } while (pwd != pwd2);
//            cerr << pwd << endl;


        }
    }


    return 0;
}
