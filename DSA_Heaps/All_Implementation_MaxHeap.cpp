#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
    vector<int> heap;

    void siftUp(int i) {
        while (i > 0) {
            int parent = (i - 1) / 2;
            if (heap[i] > heap[parent]) {
                swap(heap[i], heap[parent]);
                i = parent;
            } else break;
        }
    }

    void siftDown(int i) {
        int n = heap.size();
        while (2 * i + 1 < n) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if (left < n && heap[left] > heap[largest])
                largest = left;
            if (right < n && heap[right] > heap[largest])
                largest = right;

            if (largest != i) {
                swap(heap[i], heap[largest]);
                i = largest;
            } else break;
        }
    }

public:
    void insert(int val) {
        heap.push_back(val);
        siftUp(heap.size() - 1);
    }

    int extractMax() {
        if (heap.empty()) {
            cout << "Heap is empty.\n";
            return -1;
        }

        int maxVal = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        siftDown(0);
        return maxVal;
    }

    int getMax() {
        if (heap.empty()) return -1;
        return heap[0];
    }

    void buildHeap(const vector<int>& arr) {
        heap = arr;
        for (int i = heap.size() / 2 - 1; i >= 0; --i) {
            siftDown(i);
        }
    }

    void printHeap() {
        for (int x : heap)
            cout << x << " ";
        cout << "\n";
    }
};

int main() {
    MaxHeap h;

    cout << "🔨 Building heap from array:\n";
    vector<int> arr = {10, 8, 4, 2, 5, 1};
    h.buildHeap(arr);
    h.printHeap(); // Should be max-heapified

    cout << "➕ Inserting 15:\n";
    h.insert(15);
    h.printHeap();

    cout << "👀 Current Max: " << h.getMax() << "\n";

    cout << "🗑️ Deleting Max: " << h.extractMax() << "\n";
    h.printHeap();

    return 0;
}
