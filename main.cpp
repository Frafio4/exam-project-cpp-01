bool f(const Grafo& g){
    if (g.m()%2!=0) return false;
    for (int i=0; i<g.n(); i++){
        if (g(i, i)) return false;
    }
    int nodi_max_1_entrante=0;
    for (int i=0; i<g.n(); i++){
        int archi_entranti=0;
        for (int j=0; j<g.n(); j++){
            if (g(j, i)) archi_entranti++;
        }
        if (archi_entranti<=1) nodi_max_1_entrante++;
    }
    for (int i=0; i<g.n(); i++){
        int archi_uscenti=0;
        for (int j=0; j<g.n(); j++){
            if (g(i, j)) archi_uscenti++;
        }
        if (archi_uscenti>=nodi_max_1_entrante) return false;
    }
    return true;
}
