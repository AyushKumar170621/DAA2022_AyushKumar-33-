/*II. Given a long list of tasks. Each task takes specific time to accomplish it and each task has a deadline associated with it. You have to design an algorithm and 
implement it using a program to find maximum number of tasks that can be completed without crossing their deadlines and also find list of selected tasks.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,t[n],f[n];

    for(i=0;i<n;i++)
    cin>>t[i];

    for(i=0;i<n;i++)
    cin>>f[i];

    vector<vector<int>> a;
    vector<int> act;
    for(i=0;i<n;i++)
    a.push_back({f[i],f[i]-t[i],i+1});

    sort(a.begin(),a.end());

    int e=INT_MIN,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i][1]>=e)
        {
            e=a[i][0];
            c++;
            act.push_back(a[i][2]);
        }
    }
    sort(act.begin(),act.end());

    cout<<"No. of non-conflicting activities : "<<c<<endl;
    cout<<"List of selected activities : ";
    for(i=0;i<act.size();i++)
    cout<<act[i]<<",";
    return 0;
}
