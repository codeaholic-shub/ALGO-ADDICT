// Happy Coding Guys.

// This is the code for one of the most important algorithms of graphs known as Dijkstra's algorithm. This algorithm is used to find the shortest paths to all vertices of a graph from the given source vertex.

// To read more about Dijkstra's algorithm you may visit this documentation :-
// https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/

// The below code is only the function needed to implement this algorithm not the complete program because all that is important is the function implementing the specific algorithm.

// The below code is the solution to the problem of the question given in CodeStudio (follow the link to reach out to the question) :-
// https://www.codingninjas.com/codestudio/problem-details/dijkstra-s-shortest-path_920469

#include <bits/stdc++.h>

vector<int> helper(int n, vector<vector<int>> &adjacency)
{
    vector<bool> visited(n, false);
    vector<int> minDistance(n, INT_MAX);
    minDistance[0] = 0;

    for (int i = 1; i < n; i++)
    {
        int mini = INT_MAX, minIndex = 0;
        for (int j = 0; j < n; j++)
        {
            if (minDistance[j] < mini && !visited[j])
            {
                mini = minDistance[j];
                minIndex = j;
            }
        }
        visited[minIndex] = true;

        for (int j = 0; j < n; j++)
        {
            if (adjacency[minIndex][j] != INT_MAX && !visited[j])
            {
                if ((adjacency[minIndex][j] + minDistance[minIndex]) < minDistance[j])
                    minDistance[j] = adjacency[minIndex][j] + minDistance[minIndex];
            }
        }
    }
    return minDistance;
}

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    vector<vector<int>> adjacency(vertices, vector<int>(vertices, INT_MAX));
    for (auto it : vec)
    {
        if (adjacency[it[0]][it[1]] > it[2])
        {
            adjacency[it[0]][it[1]] = it[2];
            adjacency[it[1]][it[0]] = it[2];
        }
    }

    return helper(vertices, adjacency);
}

// Time Complexity of the code is O(V^2) where V is the number of vertices present in the graph.

// After completely understanding the algorithm, Follow up :- Try solving the problem using a priority queue and reduce the time complexity to O(E*log V) where V and E are the number of vertices and number of edges present in the graph respectively.
