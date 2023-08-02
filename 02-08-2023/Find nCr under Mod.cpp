//Link - https://practice.geeksforgeeks.org/problems/ncr2132/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#define ll long long
class Solution{  
    int mod = 1e9 + 7;
    vector<ll> fact;
public:

    void findFactorial(int n){
        
        fact[0] = 1;
        
        for(ll i=1;i<=n;i++)
            fact[i] = (i*fact[i-1])%mod;
        
    }
    
    ll findPower(ll base, ll power){
        
        if(power == 0)
            return 1;
        
        ll powerHalf = findPower(base,power/2);
        
        if(power%2 == 0)
            return (powerHalf*powerHalf)%mod;
        else
            return (base*((powerHalf*powerHalf)%mod))%mod;
        
        
    }
    long int ncr(int n, int r){
        
        fact.resize(n+1);
        findFactorial(n);
        
        ll num = fact[n];
        ll den = (fact[r]*fact[n-r])%mod;
        
        ll inverseDen = findPower(den,mod-2);
        
        return (num*inverseDen)%mod;
        //complete the function here
    }
};
