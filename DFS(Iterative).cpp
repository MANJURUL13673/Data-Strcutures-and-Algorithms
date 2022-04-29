void dfs(int startNode, vector<vector<int>>graph)
{
    visited[maxNodeNum + 1];
    stack<int>Node;
    Node.push(startNode);  
    //let every node is connected
    int u;
    while(!Node.empty())
    {
        u = Node.top();
        Node.pop();
        visited[u] = true;
        cout<<u<<endl;
        for(int i = 0; i < graph[u][i].size(); i++)
        {
            if(!visited[graph[u][i]]) Node.push(graph[u][i]);
        }
    }
}