class NumberContainers {
    public:
        unordered_map<int, int> ind_num;
        unordered_map<int, set<int>> num_inds;
        void change(int index, int number) {
            auto it = ind_num.find(index);
            if (it != end(ind_num))
                num_inds[it->second].erase(index);
            ind_num[index] = number;
            num_inds[number].insert(index);
        }
        int find(int number) {
            auto it = num_inds.find(number);
            return it == end(num_inds) || it->second.empty() ? -1 : *begin(it->second);
        }
    };