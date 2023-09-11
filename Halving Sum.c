unsigned halving_sum(unsigned n) {
    unsigned sum = 0;
    
    while (n >= 1) {
        sum += n;
        n /= 2;
    }
    
    return sum;
}