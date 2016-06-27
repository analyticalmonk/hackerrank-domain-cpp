#include <iostream>
using namespace std;

int main() {
  // My solution
  //////////////
  int N, Q, k, a, b;
  cin >> N >> Q;
  int sequences[300001];
  int first_track[N];
  first_track[0] = 0;
  for (int i = 0; i < N; i++) {
    cin >> k;
    if (i != (N - 1)) {
      first_track[i + 1] = (first_track[i] + k);
    }
    for (int j = first_track[i]; j < (first_track[i] + k); j++) {
      cin >> sequences[j];
    }
  }

  for (int i = 0; i < Q; i++) {
    cin >> a >> b;
    cout << sequences[(first_track[a] + b)] << endl;
  }

  // Alternative solution (from the forum)
  ////////////////////////////////////////
  // int n,q;
  // cin>>n>>q;
  // int** seq=new int* [n];
  // for(int i=0;i<n;i++)
  //   {
  //     int a;
  //     cin>>a;
  //     int* b=new int [a];
  //     for(int j=0;j<a;j++)
  //       {
  //         int e;
  //         cin>>e;
  //         b[j]=e;
  //       }
  //   *(seq+i)=b;
  //  }
  //
  // for(int i=0;i<q;i++)
  // {
  // int r,s;
  // cin>>r>>s;
  // cout<<seq[r][s]<<endl;
  // }

	return 0;
}
