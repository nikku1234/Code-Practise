class RandomizedSet {
    vector<int> vec;
    unordered_map<int, int> positions;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {

    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (positions.count(val))
            return false;

        vec.push_back(val);
        positions[val] = vec.size() - 1;

        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (!positions.count(val))
            return 0;

        int curPos = positions[val];
        positions[vec.back()] = curPos;

        swap(vec[curPos], vec.back());

        vec.pop_back();
        positions.erase(val);

        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return vec[rand() % vec.size()];
    }
};
