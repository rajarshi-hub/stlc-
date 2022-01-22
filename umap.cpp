unordered_map<int,int> mp;
    if(mp[0] == mp[1])        // would insert 0 and 1 with value 0
    cout<<'k';
    cout<<mp.at(2);   // out of range error{use 'at' opeartor insted of [] if do not wnat to insert unwillingly}
    cout<<mp.size();
