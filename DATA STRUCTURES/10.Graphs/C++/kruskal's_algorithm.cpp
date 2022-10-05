// Happy Coding Guys.

// This is the code for one of the most important algorithms of graphs known as Kruskal's algorithm. This algorithm is used to find the minimum spanning tree of a given graph.

// A minimum spanning tree (MST) or minimum weight spanning tree is a subset of the edges of a connected, edge-weighted undirected graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight. That is, it is a spanning tree whose sum of edge weights is as small as possible.

// To read more about Kruskal's algorithm you may visit this documentation :-
// https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/

// The below code is only the function needed to implement this algorithm not the complete program because all that is important is the function implementing the specific algorithm.

// The below code is the solution to the problem of the question given in CodeStudio (follow the link to reach out to the question) :-
// https://www.codingninjas.com/codestudio/problem-details/kruskal-s-minimum-spanning-tree-algorithm_1082553

#include <bits/stdc++.h>

bool comp(vector<int> &a, vector<int> &b)
{
    return a[2] < b[2];
}

int findParent(int vertex, vector<int> &parent)
{
    if (vertex == parent[vertex])
        return vertex;
    return parent[vertex] = findParent(parent[vertex], parent);
}

int helper(int n, vector<vector<int>> &graph, vector<int> &parent, vector<int> &rank)
{
    int count = 0, wt = 0, i = 0;
    while (count < n - 1)
    {
        int vertex1 = graph[i][0];
        int vertex2 = graph[i][1];

        int parent1 = findParent(vertex1, parent);
        int parent2 = findParent(vertex2, parent);

        if (parent1 != parent2)
        {
            int rank1 = rank[parent1];
            int rank2 = rank[parent2];

            if (rank1 == rank2)
            {
                parent[parent1] = parent2;
                rank[parent2]++;
            }
            else if (rank1 < rank2)
                parent[parent1] = parent2;
            else
                parent[parent2] = parent1;

            count++;
            wt += graph[i][2];
        }
        i++;
    }

    return wt;
}

int kruskalMST(int n, int m, vector<vector<int>> &graph)
{
    sort(graph.begin(), graph.end(), comp);
    vector<int> parent(n + 1);
    for (int i = 0; i <= n; i++)
        parent[i] = i;

    vector<int> rank(n + 1, 0);

    return helper(n, graph, parent, rank);
}