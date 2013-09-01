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

