#include<iostream>
using namespace std;
int main(){
    int n, m, min, sum=0;
    cin >> n;
    cin >> m;
    for (int i = m; i >= n; i--)
    {
        int cnt=0;
        for (int j = 1; j <= i; j++){
            if (i%j==0)
                cnt++;
        }
        if (cnt==2)
        {
            sum+=i;
            min=i;
        }
    }
    if (sum!=0)
    {
        cout << sum << '\n' << min;
    }
    else
        cout << -1;
    
}