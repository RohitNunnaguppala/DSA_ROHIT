#include <bits/stdc++.h>
using namespace std;

void maxMeetings(int start[], int end[], int n) {
    vector<pair<int, int>> meetings;

    for (int i = 0; i < n; i++) {
        meetings.push_back({end[i], start[i]});
    }

    sort(meetings.begin(),meetings.end());

    vector<int> ans;
    int limit = 0;

    for (int i = 0; i < n; i++) {
        int s = meetings[i].second;
        int e = meetings[i].first;

        if (s > limit) {
            ans.push_back(i + 1);
            limit = e;
        }
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int n = 6;
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] =   {2, 4, 5, 7, 9, 9};

    maxMeetings(start, end, n);

    return 0;
}
