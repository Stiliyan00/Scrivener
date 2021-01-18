#ifndef _GRAPH_H_
#define _GRAPH_H_
#include <iostream>
#include <vector>
#include <stdexcept>

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

    T& get_data(const int pos)const{
        if(pos > related.size())
        {
            cerr << "NO SUCH POSSITION\n";
            T temp;
            return temp;
        }
        return related[pos-1]->data;
    }
};


template <class T>
class Graph{
private:
     vector<GraphNode<T>* > vertexes;
     int currentPos;

public:
    Graph(){currentPos = 0;}
    Graph(const int currentPos_) : currentPos(currentPos_){}
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

    GraphNode<T>* get_current_node()const;

    void set_current_possition(const int newCurrentPossition);

    void print() const {
        for(int i=0; i<vertexes.size(); i++){
           vertexes[i]->print();
        }
    }

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

template<typename T>
GraphNode<T>* Graph<T>::get_current_node() const
{
    if(currentPos >= vertexes.size()) throw std::runtime_error("No value");
    return vertexes[currentPos];
}

template<typename T>
void Graph<T>::set_current_possition(const int newCurrentPossition)
{
    if(newCurrentPossition > vertexes.size())
    {
        cerr << "NO SUCH POSSITION\n" << endl;
        return;
    }
    currentPos = newCurrentPossition - 1;
}




#endif // _GRAPH_H_
