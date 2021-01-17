#ifndef _GRAPH_H_
#define _GRAPH_H_
#include <iostream>
#include <vector>

using namespace std;

template <class T>
struct GraphNode{
    T data;
    vector<GraphNode<T>* > related;

    GraphNode(const T& data): data(data){}

    int isRelated(const GraphNode<T> *vertex) const{
        for(int i=0; i<related.size(); i++){
            if(related[i] == vertex) return i;
        }
        return -1;
    }

    void addEdgeTo(GraphNode<T>* vertex){
        if(isRelated(vertex) == -1)
            related.push_back(vertex);
    }

    void print()const {
        cout<<data<<": ";
        for(int i=0; i<related.size(); i++){
            cout<<related[i]->data<<" ";
        }
        cout<<endl;
    }
};


template <class T>
class Graph{
private:
    vector<GraphNode<T>* > vertexes;

public:
    Graph(){}
    ~Graph(){
        for(int i=0; i<vertexes.size(); i++)
            delete vertexes[i];
    }
    int hasVertex(const T& data) const{
        for(int i=0; i<vertexes.size(); i++)
            if(vertexes[i]->data == data) return i;
        return -1;
    }

    GraphNode<T>* addVertex(const T& data){
        int p = hasVertex(data);
        if(p == -1){
            GraphNode<T> *gn = new GraphNode<T>(data);
            vertexes.push_back(gn);
            return gn;
        }
        return vertexes[p];
    }

    void addEdge(const T& v, const T& u){
        GraphNode<T> *node1 = addVertex(v);
        GraphNode<T> *node2 = addVertex(u);
        node1->addEdgeTo(node2);
        ///node2->addEdgeTo(node1);
    }

    void print() const {
        for(int i=0; i<vertexes.size(); i++){
           vertexes[i]->print();
        }
    }

    class Iterator
    {
    private:
        GraphNode<T>* ptr;
        Iterator(GraphNode<T>* ptr1);
        int currentPos;

    public:
        Iterator();

        T operator*();
        Iterator operator++();
        Iterator operator--();
        bool operator==(const Iterator&)const;
        bool operator!=(const Iterator&)const;
    };
};

Graph<int>* readGraph(){
    int m;
    cin>>m;
    Graph<int> *g = new Graph<int>();
    for(int i=0; i<m; i++){
        int v, u;
        cin>>v>>u;
        g->addEdge(v, u);
    }
    return g;
}

///---------|
///Iterator:|
///---------|

template<typename T>
Graph<T>::Iterator::Iterator(GraphNode<T>* ptr1)
{
    for(int i = 1; i < vertexes.size(); i++)
    {
        if(vertexes[i] == ptr1)
        {
            currentPos = i;
        }
    }
}

template<typename T>
 Graph<T>::Iterator::Iterator()
{
    ptr = nullptr;
    currentPos = 0;
}

template<typename T>
T Graph<T>::Iterator::operator*()
{
    if(ptr == nullptr) throw std::runtime_error("No value");
    return ptr->data;
}

template<typename T>
typename Graph<T>::Iterator Graph<T>::Iterator::operator++()
{

}

template<typename T>
typename Graph<T>::Iterator Graph<T>::Iterator::operator--()
{

}

template<typename T>
bool Graph<T>::Iterator::operator==(const Iterator&) const
{

}

template<typename T>
bool Graph<T>::Iterator::operator!=(const Iterator&) const
{

}



#endif // _GRAPH_H_

