#include <bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    vector<int> unionarr;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionarr.empty() || unionarr.back() != a[i]) {
                unionarr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionarr.empty() || unionarr.back() != b[j]) {
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (unionarr.empty() || unionarr.back() != a[i]) {
            unionarr.push_back(a[i]);
        }
        i++;
    }

    while (j < n2) {
        if (unionarr.empty() || unionarr.back() != b[j]) {
            unionarr.push_back(b[j]);
        }
        j++;
    }

    return unionarr;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 5};
    vector<int> b = {2, 3, 4, 5, 6};

    vector<int> result = Union(a, b);

    cout << "Union of arrays without duplicates: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
