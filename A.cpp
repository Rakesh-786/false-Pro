#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> element_arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> element_arr[i];
        }
        
        long long sum = 0;
        unordered_set<long long> viewed_element;
        int prefix_counter = 0;

        for (int i = 0; i < n; ++i) {
            sum += element_arr[i];
            viewed_element.insert(element_arr[i]);
            if (sum % 2 == 0 && viewed_element.find(sum / 2) != viewed_element.end()) {
                prefix_counter++;
            }
        }

        cout << prefix_counter << endl;
    }
    return 0;
}   