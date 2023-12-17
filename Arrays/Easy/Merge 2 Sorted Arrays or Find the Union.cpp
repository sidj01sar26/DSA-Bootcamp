// CodeStudio

#include <vector>
#include <set>

using namespace std;

vector<int> sortedArray(const vector<int> &a, const vector<int> &b)
{
    set<int> st(a.begin(), a.end());
    st.insert(b.begin(), b.end());

    return {st.begin(), st.end()};
}
