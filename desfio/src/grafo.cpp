#include <iostream>
#include<locale.h>
#include<time.h>

class Fork{
    private:
        int itens[30];
        int weight[30][30];
        bool visited[30][30];
        int count_edge[30];

    public:
        int getItens(int);
        void setItens(int,int);

        int getWeight(int, int);
        void setWeight(int,int,int);

        bool getVisited(int,int);
        void setVisited(int,int,bool);

        int getCount_edge(int);
        void setCount_edge(int,int);

        void getData();
        void setData(int);

        void getNextData();
        void setNextData(int);

        void createFork();
        void DisplayFork();

        int getCount_edge();
        void setCount_edge();

        void shortest_way(int);
}; 

int main(){
    Fork fo;
    fo.createFork();

}   

int Fork::getWeight(int i, int j){
    return weight[i][j];
}
void Fork::setWeight(int i,int j,int value){
    weight[i][j] = value;
}

int Fork::getItens(int i){
    return itens[i];
}
void Fork:: setItens(int i, int value){
    itens[i] = value;
}

bool Fork::getVisited(int i, int j){
    return visited[i][j];
}
void Fork::setVisited(int i ,int j, bool b){
    visited[i][j] = b;
}

int Fork::getCount_edge(int i){
    return count_edge[i];
}
void Fork::setCount_edge(int i, int edges){
    count_edge[i] = edges;
}

void Fork::createFork(){
    int num, iten, weight, x, y, num_edge, vertex,counter = 0;
    bool boolean = false;
//Definition of value of the vertex 
    for(int i = 0; i <30; i++){
        srand(time(NULL));
        num = (rand() % 60);
        setItens(i,num);
    }
//Definition of the edge
    for(int i = 0; i <30; i++){
        iten = getItens(i); //in getIten(0), the element is the root the fork
        for(int j = 0; j < 30; j++){
            //Defition of the number the edges per element
            srand(time(NULL));
            num_edge = (rand() % 3);
            if(num_edge == 0){
                setVisited(i,j,true);
                setCount_edge(i,0);
            }else{
               do{
                    do{
                        srand(time(NULL));
                        vertex = (rand() % 30);
                        if ((getItens(i) == getItens(vertex)) || ((getVisited(i,j) || getVisited(i,vertex)) == true )){
                             setWeight(i,vertex,10000); //10000 == infinity
                        }else{
                            true;
                        }
                    }while(boolean == false);
                    //Definition weight

                    weight = (rand() % 19 + 1);
                    //Prize draw the link
                    setCount_edge(i,1);
                    setWeight(i,vertex,weight);
                }while(getCount_edge(i) <= num_edge);
            }
        }
    }
}
void Fork::shortest_way(int origin, int final){
    int start,counter, it;
    do{
        for(int i = 0; i <30; i++){
            if(start == getItens(i)){
                it = getCount_edge(i);            
            }
        }
        if (start > 0){
            for(int i = 0; i <start; i++){
                
            }
        }else{
            std:: cout<<"Not has path";
        }
    }while(it != counter);
}





void Fork::DisplayFork(){
    int counter;
    for(int i = 0; i <30; i++){
        for(int j = 0; j < 30; j++){
            std:: cout<<"==="<<" Element [ "<<getItens(i) << "] " <<"===" <<std::endl;
            do{
                std:: cout<<" Conexted: " << getWeight(i,j) << std::endl;
            }while(counter <= getCount_edge(i));
        }
    }
}
