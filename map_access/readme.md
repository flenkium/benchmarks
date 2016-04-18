## Map-Access

#### clang++ --version
clang version 3.3 (tags/RELEASE_33/final)  
Target: x86_64-unknown-linux-gnu  
Thread model: posix  

#### results
    func()   | map     | umap
    ---------+---------+--------
    fill[]   | 9.03943 | 2.95987
    insert   | 9.01139 | 2.03354
    emplace  | 8.97783 | 1.98458
    change[] | 4.75484 | 0.719362
    at()     | 4.77779 | 0.697669
    read []  | 4.78352 | 0.732106
    read at  | 4.78569 | 0.706758
    remove   | 6.33623 | 1.0589

#### clang++ --version
clang version 3.5.0 (tags/RELEASE_350/final)
Target: x86_64-unknown-linux-gnu
Thread model: posix

#### results
    func()   | map     | umap
    ---------+---------+--------
    fill[]   | 8.6665 | 2.9077
    insert   | 8.7521 | 2.0111
    emplace  | 8.7137 | 1.9463
    change[] | 4.7456 | 0.72774
    at()     | 5.0079 | 0.72465
    read []  | 4.8458 | 0.73281
    read at  | 4.9017 | 0.71638
    remove   | 7.0856 | 1.1668
