unordered_map<int,int>mp;

bool cmp(int x, int y)
{
    int temp1 = mp[x], temp2 = mp[y];
    if(temp1 == temp2)
    {
        return x<y;
    }
    return temp1 < temp2;
}

class Solution {
public:
    int calculate(int i)
    {
        if(i == 1)
        {
           return 0;
        }
        
        if(mp[i]!=0)
        {
            return mp[i];
        }
        
        if(i%2 == 1)
        {
            return mp[i] = 1+calculate(1+(3*i));
        }
        else
        {
            return mp[i] = 1+calculate(i/2);
        }
    
        return 0;
    }
    
    int getKth(int lo, int hi, int k) {
        vector<int>vals;
        mp[1] = 0;
        for(int i = lo; i<=hi; i++)
        {
            if(mp[i] != 0 || i == 1)
            {
                continue;
            }
            calculate(i);
        }
        
        for(int i = lo; i<=hi; i++)
        {
            vals.push_back(i);
        }
        
        sort(vals.begin(), vals.end(), cmp);
        
        return vals[k-1];
    }
};
