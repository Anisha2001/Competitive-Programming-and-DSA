#include <bits/stdc++.h>
using namespace std;

int main()
{

    // size taken as input and stored in n

    long long int n;
    cin >> n;

    // set is declared

    set<long long int> st;

    // for loop to take in elements and store in set

    for (long long int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    // take k as input

    long long int k;
    cin >> k;
    set<long long int>::iterator itr = st.begin();

    // st.begin() points to the first element in set.

    // set stores elements in sorted ordered

    // output kth largest and smallest since indexing starts from 0 so cout k-1th and n-1-kth elements
    long long int k_small=0,k_large=0;
    long long int i = 0;
    while (itr != st.end())
    {
        if (i == k-1)
        {
            k_small = *itr;
        }
        if (i == n - k)
        {
            k_large = *itr;
        }
        i++;
        itr++;
    }
    cout<<k_small<<" "<<k_large<<endl;
    return 0;
}
