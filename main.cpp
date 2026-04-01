#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   for (int i = 0; i < cnt; i++) {
      vec.push_back(N);
      N += M;
   }
}

int main() {
   cin >> N >> M;
   func(0);
   for (int i = 0; i < cnt; i++) {
      cout << vec[i] << " ";
   }
   return 0;
}
