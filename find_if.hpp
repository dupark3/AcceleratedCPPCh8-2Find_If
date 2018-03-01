
template <class forwardIterator, class predicate>
forwardIterator find_if(forwardIterator first, forwardIterator last, predicate pred){
    for (; ; ++first){
        if (pred(*first)) return first;
        if (first == last) return last;
    }
}
