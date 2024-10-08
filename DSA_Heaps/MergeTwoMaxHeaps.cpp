#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void heapify(vector<int>& arr, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[largest] < arr[left]) {
            largest = left;
        }
        if (right < n && arr[largest] < arr[right]) {
            largest = right;
        }
        if (largest != i) {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    vector<int> mergeHeaps(vector<int>& a, vector<int>& b, int m, int n) {
        vector<int> ans;

        // Insert all elements of heap a into ans
        for (auto i : a) {
            ans.push_back(i);
        }

        // Insert all elements of heap b into ans
        for (auto i : b) {
            ans.push_back(i);
        }

        // Step 2: Build the max heap using the merged array
        int size = ans.size();
        for (int i = size / 2 - 1; i >= 0; i--) {
            heapify(ans, size, i);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> heap1 = {10, 5, 6, 2};
    vector<int> heap2 = {7, 4, 8, 3};

    vector<int> mergedHeap = sol.mergeHeaps(heap1, heap2, heap1.size(), heap2.size());

    cout << "Merged Max Heap: ";
    for (int i : mergedHeap) {
        cout << i << " ";
    }

    return 0;
}
