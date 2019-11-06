#include<bits/stdc++.h>

using namespace std;
vector<int>one;
vector<string>two;
vector< pair<int, string> >res;

int main()
{
    int test, ind;
    scanf("%d",&test);
    string s, t, str;
    getchar();
    while(test--)
    {
        getchar();
        int n = 0;
        getline(cin,s);
        stringstream ss(s);
        while(ss >> ind){
            one.push_back(ind);
            n++;
        }
        getline(cin,str);
        stringstream sst(str);
        
        while(sst>>t){
             two.push_back(t);
        }
        for(int i=0; i<n; i++)
        {
            res.push_back(make_pair(one[i],two[i]));
        }
        sort(res.begin(), res.end());
        for(int j=0; j<n; j++)
            cout<<res[j].second<<endl;
        one.clear();
        two.clear();
        res.clear();
        if(test)
            cout << endl;
    }
    return 0;
}