// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
    public:
    int capacity;
    unordered_map<int, pair<int, list<int>::iterator>> mp;
    list<int> l;
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        // code here
        capacity = cap;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        // your code here
        if(mp.find(key) != mp.end())
        {
            l.erase(mp[key].second);
            l.push_front(key);
            mp[key].second = l.begin();
            return mp[key].first;
        }
        return -1;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        // your code here 
        if(mp.size() == capacity && mp.find(key) == mp.end())
        {
            int back = l.back();
            l.erase(mp[back].second);
            mp.erase(back);
            l.push_front(key);
            mp[key] = {value, l.begin()};
        }
        if(mp.find(key) == mp.end())
        {
            l.push_front(key);
            mp[key] = {value, l.begin()};
        }
        else
        {
            l.erase(mp[key].second);
            l.push_front(key);
            mp[key].second = l.begin();
            mp[key].first = value;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends