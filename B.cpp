#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> Coords_Center(const vector<pair<int, int>>& points) {
    vector<int> x_coords, y_coords;
    for (const auto& point : points) {
        x_coords.push_back(point.first);
        y_coords.push_back(point.second);
    }
    
    sort(x_coords.begin(), x_coords.end());
    sort(y_coords.begin(), y_coords.end());
    
    int median_x = x_coords[x_coords.size() / 2];
    int median_y = y_coords[y_coords.size() / 2];
    
    return {median_x, median_y};
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<pair<int, int>> points;
        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < m; ++j) {
                if (row[j] == '#') {
                    points.emplace_back(i + 1, j + 1);
                }
            }
        }
        
        pair<int, int> center = Coords_Center(points);
        cout << center.first << " " << center.second << endl;
    }
    
    return 0;
}