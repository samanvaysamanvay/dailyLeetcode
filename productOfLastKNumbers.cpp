class ProductOfNumbers {
    vector<int> snap;
    int last_zero;

public:
    ProductOfNumbers() {
        snap.push_back(1); 
        last_zero = -1;
    }
    
    void add(int num) {
        if (num != 0) {
            snap.push_back(snap.back() * num);
        } else {
            snap.push_back(1);
            last_zero = snap.size() - 1;
        }
    }
    
    int getProduct(int k) {
        int size = snap.size();
        if (size - k <= last_zero) return 0;
        return snap[size - 1] / snap[size - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOf


/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */