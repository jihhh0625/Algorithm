
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int order[10]={0,};

int visited[5][41]={0,};
int ans = 0;
vector<int> mals;
// int cnt = 0;

void bfs(){

    memset(visited,0,sizeof(visited));
    int res = 0;

    vector<pair<int,int>> arr(4);

    for(int turn =0; turn <10; turn++){
        

        int bf = arr[mals[turn]].first;
        int bs = arr[mals[turn]].second;
        
        if(bs == 6){
            // turn++;
            continue;
        }
        // cout << bf <<" "<<bs<<endl;
        
    
        if(arr[mals[turn]].second == 0){
            arr[mals[turn]].first += order[turn]*2;
            
            
            if(arr[mals[turn]].first == 10){
                arr[mals[turn]].second = 1;
            }
            else if(arr[mals[turn]].first == 20){
                arr[mals[turn]].second = 2;
            }
            else if(arr[mals[turn]].first == 30){
                arr[mals[turn]].second = 3;
            }
            else if(arr[mals[turn]].first> 40){
                arr[mals[turn]].second = 6;
                arr[mals[turn]].first = 0;
            }
            

        }
        else if(arr[mals[turn]].second  == 1){

            if(arr[mals[turn]].first == 10){
                if(order[turn] <= 3){
                    arr[mals[turn]].first += order[turn]*3;
                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first = 25;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first = 30;
                    arr[mals[turn]].second = 4;
                }

            }
            else if(arr[mals[turn]].first == 13){
                if(order[turn] <= 2){
                    arr[mals[turn]].first += order[turn]*3;
                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first =25;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first =30;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                
                    arr[mals[turn]].first =35;
                    arr[mals[turn]].second = 4;
                }

            }
            else if(arr[mals[turn]].first == 16){
                if(order[turn] == 1){
                    arr[mals[turn]].first += order[turn]*3;
                }
                else if(order[turn] == 2){
                    arr[mals[turn]].first =25;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first =30;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first =35;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first =40;
                    arr[mals[turn]].second = 4;
                }

            }
            else if(arr[mals[turn]].first == 19){
                if(order[turn] == 1){
                    arr[mals[turn]].first = 25;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 2){
                    arr[mals[turn]].first =30;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first =35;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first = 40;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first = 0;
                    arr[mals[turn]].second = 6;
                }
            }

            
        }
        else if(arr[mals[turn]].second == 2){

            if(arr[mals[turn]].first == 20){
                if(order[turn] <=2){
                    arr[mals[turn]].first += order[turn]*2;
                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first = 25;
                    arr[mals[turn]].second = 4;

                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first = 30;
                    arr[mals[turn]].second = 4;

                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first = 35;
                    arr[mals[turn]].second = 4;
                }

            }
            else if(arr[mals[turn]].first == 22){
                if(order[turn] == 1 ){
                    arr[mals[turn]].first  = 24;
                }
                else if(order[turn] == 2){
                    arr[mals[turn]].first = 25;
                    arr[mals[turn]].second = 4;

                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first = 30;
                    arr[mals[turn]].second = 4;

                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first = 35;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first = 40;
                    arr[mals[turn]].second = 4;
                }
            }
            else if(arr[mals[turn]].first == 24){
                if(order[turn] == 1 ){
                    arr[mals[turn]].first  = 25;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 2){
                    arr[mals[turn]].first = 30;
                    arr[mals[turn]].second = 4;

                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first = 35;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first = 40;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first = 0;
                    arr[mals[turn]].second = 6;
                }
            }
        }
        else if(arr[mals[turn]].second  == 3){
            if(arr[mals[turn]].first == 30){
                if(order[turn] == 1 ){
                    arr[mals[turn]].first  = 28;
                }
                else if(order[turn] == 2){
                    arr[mals[turn]].first = 27;

                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first = 26;
                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first = 25;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first = 30;
                    arr[mals[turn]].second = 4;
                }
            }
            else if(arr[mals[turn]].first == 28){
                if(order[turn] == 1 ){
                    arr[mals[turn]].first  = 27;
                }
                else if(order[turn] == 2){
                    arr[mals[turn]].first = 26;

                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first = 25;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first = 30;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first = 35;
                    arr[mals[turn]].second = 4;
                }
            }
            else if(arr[mals[turn]].first == 27){
                if(order[turn] == 1 ){
                    arr[mals[turn]].first  = 26;
                }
                else if(order[turn] == 2){
                    arr[mals[turn]].first = 25;
                    arr[mals[turn]].second = 4;

                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first = 30;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first = 35;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first = 40;
                    arr[mals[turn]].second = 4;
                }
            }
            else if(arr[mals[turn]].first == 26){
                if(order[turn] == 1 ){
                    arr[mals[turn]].first = 25;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 2){
                    arr[mals[turn]].first = 30;
                    arr[mals[turn]].second = 4;

                }
                else if(order[turn] == 3){
                    arr[mals[turn]].first = 35;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 4){
                    arr[mals[turn]].first = 40;
                    arr[mals[turn]].second = 4;
                }
                else if(order[turn] == 5){
                    arr[mals[turn]].first = 0;
                    arr[mals[turn]].second = 6;
                }
            }
        }
        else if(arr[mals[turn]].second  == 4){
            arr[mals[turn]].first += 5*order[turn];

            if(arr[mals[turn]].first > 40){
                arr[mals[turn]].first = 0;
                arr[mals[turn]].second = 6;
            }


        }


        if(arr[mals[turn]].second != 6){
            if(visited[arr[mals[turn]].second][arr[mals[turn]].first] == 1){ //중복
                arr[mals[turn]].first = bf;
                arr[mals[turn]].second = bs;
                visited[bs][bf] = 0;
                return;
            }

                
            else{
                if(arr[mals[turn]].first == 40){
                    visited[0][arr[mals[turn]].first] = 1;
                    visited[1][arr[mals[turn]].first] = 1;
                    visited[2][arr[mals[turn]].first] = 1;
                    visited[3][arr[mals[turn]].first] = 1;
                    visited[4][arr[mals[turn]].first] = 1;
                    
                }

                visited[bs][bf] = 0;
                visited[arr[mals[turn]].second][arr[mals[turn]].first] = 1;
                res += arr[mals[turn]].first;
            }
            
            
        }
        else if(arr[mals[turn]].second == 6){
            if(bf ==40){
                visited[0][40] = 0;
                visited[1][40] = 0;
                visited[2][40] = 0;
                visited[3][40] = 0;
                visited[4][40] = 0;
            }
            visited[bs][bf] = 0;
        }
        // cout << arr[mals[turn]].first <<" "<<arr[mals[turn]].second<<endl;
        // for(int i =0; i <4; i++){

        // cout<< turn <<" "<<arr[mals[turn]].first <<endl;
        // for(int i =0; i <4;i++){
            
        // }
        
        // }
        // for(int i =0; i <4;i++){
        //     cout<< arr[i].first;
        // }
        // cout<<endl;
    }
    
    
    if(res > ans){
        ans = res;
        
    }
    return;

    

}
void dfs(){
    

    if(mals.size() == 10){
        bfs();
        return;
    }


    for(int i = 0; i <4; i++){
        // cnt++;
        mals.push_back(i);
        dfs();
        mals.erase(mals.begin() + mals.size() - 1);
    }
    // cout <<cnt<<endl;

}
int main(){

    

    for(int i =0; i < 10; i++){
        cin >> order[i];
    }

    
    //1 2 2 2 1 2 1 1 2 1
    dfs();

    /*
    mals.push_back(0);
    mals.push_back(1);
    mals.push_back(1);
    mals.push_back(1);
    mals.push_back(0);
    mals.push_back(1);
    mals.push_back(0);
    mals.push_back(0);
    mals.push_back(1);
    mals.push_back(0);
    bfs();
*/


    cout<< ans;

    return 0;
}
