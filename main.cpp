#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if (cnt == 0) {
      for (int i = 1; i <= N; i++) cout << i << " ";
      return;
   }

   int r, q;
   r = cnt % M;
   q = cnt / M;

   
   
}

int main() {
   cin >> N >> M;
   func(0);

   return 0;
}
