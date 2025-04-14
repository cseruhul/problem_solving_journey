public class WeightedQuickUnion {
    int[] id;
    int[] size;

    WeightedQuickUnion(int N) {
        id = new int[N];
        size = new int[N];
        for (int i = 0; i < N; i++){
            id[i] = i;
            size[i] = 1;
        }

    }

    private int root(int i) {
        while(i != id[i]){
            id[i] = id[id[i]];
            i = id[i];
        }
        return i;
    }

    public void union(int p, int q){
        int i = root(p);
        int j = root(q);
        if (id[i]==id[j]) return;
        if (size[i] < size[j]){
            id[i] = j;
            size[j] += size[i];
        }else {
            id[j] = i;
            size[i] += size[j];
        }
    }

    public boolean isConnected(int p, int q){
        return root(p) == root(q);
    }
}
