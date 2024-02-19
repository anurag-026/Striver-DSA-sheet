   
    map<char, int>::iterator iter;

    // use iterator to display map elements
    for (iter = mpp.begin(); iter != mpp.end(); ++iter) {
        cout << iter->first << " - " << iter->second << endl;
    }