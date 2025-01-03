#include <iostream>
#include <utility> // For std::pair

int main() {
    const int n = 3;
    std::pair<int, int> locations[n] = { {1, 2}, {3, 4}, {5, 6} };

    for (int i = 0; i < n; ++i) {
        std::cout << "Location " << i << ": (" << locations[i].first << ", " << locations[i].second << ")\n";
    }

    return 0;
}

