class SmallestInfiniteSet {
    void initialise(set<int> &s){
        for(int i=1 ; i<=1000 ; i++){
            s.insert(i);
        }
    }
public:
    set<int> s;
    SmallestInfiniteSet() {
        initialise(s);
    }
    
    int popSmallest() {
        int value = *s.begin() ;
        s.erase(s.begin()) ;

        return value ;
    }
    
    void addBack(int num) {
        if(s.find(num) == s.end()){
            s.insert(num) ;
        }
    }
};

