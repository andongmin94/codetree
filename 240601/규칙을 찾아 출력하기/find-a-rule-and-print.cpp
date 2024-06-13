#include <iostream>
using namespace std;

int main() {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     for (int i = 0; i < n; ++i)
     {
          for (int j = 0; j < n; ++j)
          {
               if (i == 0 || i == n - 1)
               {
                    // 첫 번째와 마지막 행에서는 모든 위치에 '*'
                    cout << '*';
               }
               else
               {
                    // 그 외의 행에서는 첫 번째, 마지막 위치, 그리고 i와 j가 같은 위치에 '*'
                    if (j == 0 || j == n - 1 || j < i) {
                         cout << '*';
                    } else {
                         cout << ' ';
                    }
               }
               // 각 별 또는 공백 뒤에 공백 추가
               if (j < n - 1) {
                    cout << ' ';
               }
          }
          // 행이 끝난 후 줄 바꿈
          cout << '\n';
     }

     return 0;
}