// HackerRank Link: https://www.hackerrank.com/challenges/operator-overloading

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

////////////////
// SOLUTION CODE
////////////////

class Matrix {
  public:
    vector< vector<int> > a;
    Matrix(){}
    Matrix operator+(const Matrix& m1) {
        Matrix result;
        int val;

        // Defined width and height for clarity; could have used them directly
        // in the loops as well.
        int width = m1.a[0].size();
        int height = m1.a.size();

        for (int i = 0; i < height; i++) {
            vector<int> vec_result;
            for (int j = 0; j < width; j++) {
                val = this->a[i][j] + m1.a[i][j];
                vec_result.push_back(val);
            }
            result.a.push_back(vec_result);
        }

        return result;
    }
};

////////////
// STUB CODE
////////////
int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }
   return 0;
}
