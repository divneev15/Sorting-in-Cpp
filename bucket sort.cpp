// tripatjot singh
// 24070123044

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int n) {
    vector<float> buckets[n];
    for (int i = 0; i < n; i++) {
        int idx = n * arr[i];
        buckets[idx].push_back(arr[i]);
    }
    for (int i = 0; i < n; i++)
        sort(buckets[i].begin(), buckets[i].end());
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (float val : buckets[i]) arr[index++] = val;
    }
}

int main() {
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, n);
    for (float i : arr) cout << i << " ";
}

// OUTPUT
// 0.1234 0.3434 0.565 0.656 0.665 0.897
