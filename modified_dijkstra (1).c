#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_VERTICES 100
#define INF INT_MAX

int weight[MAX_VERTICES][MAX_VERTICES] = {
    {0, 10, 3, INF, INF},
    {INF, 0, 1, 2, INF},
    {INF, 4, 0, 8, 2},
    {INF, INF, INF, 0, 7},
    {INF, INF, INF, 9, 0}
};
int distance[MAX_VERTICES];
int found[MAX_VERTICES];
int n = 5;  // Number of nodes

// Function to choose the closest node not yet visited
int choose(int distance[], int n, int found[]) {
    int min = INF;
    int min_pos = -1;

    for (int i = 0; i < n; i++) {
        if (distance[i] < min && found[i] == 0) {
            min = distance[i];
            min_pos = i;
        }
    }
    return min_pos;
}

// Dijkstra's algorithm to find the shortest path from the start node
void Dijkstra(int start) {
    for (int i = 0; i < n; i++) {
        distance[i] = weight[start][i];
        found[i] = 0;
    }

    found[start] = 1;

    for (int i = 0; i < n - 1; i++) {
        int u = choose(distance, n, found);
        if (u == -1) break;
        found[u] = 1;

        for (int j = 0; j < n; j++) {
            if (!found[j] && distance[u] != INF && weight[u][j] != INF &&
                distance[u] + weight[u][j] < distance[j]) {
                distance[j] = distance[u] + weight[u][j];
            }
        }
    }
}

// Repeatedly find the shortest path by removing the previous start node
void repeatedDijkstra(int start) {
    int visitedNodes = 0;
    int currentNode = start;
    printf("Starting path traversal from node %d\n", start);
    printf("%d ", currentNode);  // Print the starting node

    while (visitedNodes < n - 1) {  // Traverse until all nodes are visited except the last node
        Dijkstra(currentNode);

        // Find the next node with the shortest distance
        int nextNode = choose(distance, n, found);

        if (nextNode == -1) break;  // If no unvisited node is found, exit

        // Mark the current node as removed (visited)
        found[currentNode] = 1;

        // Print the next node in the path
        printf("-> %d ", nextNode);

        // Set the next node as the new start node
        currentNode = nextNode;
        visitedNodes++;
    }
    printf("\n");
}

int main() {
    int startNode = 0;  // Start with node 0
    repeatedDijkstra(startNode);

    return 0;
}