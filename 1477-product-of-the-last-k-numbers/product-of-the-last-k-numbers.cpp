class ProductOfNumbers {
    vector<int> arr;
public:
    ProductOfNumbers() {
       arr.push_back(1);
    }
    
    void add(int num) {
        arr.push_back(num);
    }
    
    int getProduct(int k) {
        int n = arr.size()-1;
        int pro = 1;
        while(k && n>=0)
        {
            pro*=arr[n--];
            k--;
        }
        return pro;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */