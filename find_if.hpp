
template <class forwardIterator, class predicate>
forwardIterator find_if(forwardIterator first, forwardIterator last, predicate pred){
    for (; ; ++first){
        if (pred(*first)) return first; // first instance of true value found, return this position
        if (first == last) return last; // no instance of true value found, return last
    }
}
