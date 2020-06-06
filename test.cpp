#include <bits/stdc++.h>

using namespace std;

void decode(){
	int a[1000], n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	int ans = INT_MAX;
	for (int i = n - 1; i > 0; i--){
		int df = a[i] - a[i - 1];
		if(df >= 0)
			ans = min(ans, df);
	}
	cout << ans << "\n";
}
int main(){
   	ios::sync_with_stdio(false);
   	cin.tie(0);
   	int t;
   	cin >> t;
   	while (t--){
   		decode();
   	}
    return 0;
}
