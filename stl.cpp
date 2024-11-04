#include <bits/stdc++.h>
using namespace std;


int main() {
  priority_queue<int> pq;
  pq.emplace(2);
  pq.emplace(1);
  pq.emplace(1000);
  pq.emplace(728);
  pq.pop();
  cout<<pq.top();
}


// int main() {
//   vector<int> v;
//   v.emplace_back(1);
//   v.push_back(2);
//   v.push_back(3);
//   v.push_back(4);
//   v.erase(v.begin(), v.begin()+2);
//   for (auto it : v) {
//     cout<<it<<" ";
//   }
//   return 0;
// }




// int main() {
//   pair<int, pair<int, int>> p = {5, {6, 7}};
//   cout<<p.second.first;
//   pair<int, int> arr[2] = {{1,2}, {3, 4}};
//   cout<<arr[0].first;
//   return 0;
// }