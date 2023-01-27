#include<iostream>
#include<vector>
#include<utility>
#include<functional>
#include<fstream>

using namespace std;

#define INF 1000000000

/*
 * Variaveis globais
 */

// matriz de adjacencia
int** MA;

// quantidade de vertices
int n;

// quantidade de arestas
int m;
 int resultadoParcial = -1;
 int resultadoFinal = INF;

void exibeMatriz(int n, int m, int** MA){
    cout << endl;
    for(int i=0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(MA[i][j] < 0){
                cout << MA[i][j] << " ";
            }
            else{
                if(MA[i][j] == INF){
                    cout << " ∞ " ;
                }
                else{
                    cout << " " << MA[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    cout << endl;
}

void floyd_warshall()
{
   for(int k = 0; k < n; k++)
   {
      for(int i = 0; i < n; i++)
      {
         for(int j = 0; j < n; j++)
         {
            MA[i][j] = min(MA[i][j], MA[i][k] + MA[k][j]);
            exibeMatriz(n, n, MA);
         }
      }
   }
}

int main()
{
    int instancia = 1;

    ifstream arquivo("Casos-de-Teste-Reuniao(BeeCrowd 2372)/1.in");
    if(!arquivo)
    {
        cout << "Erro ao abrir o arquivo de entrada" << endl;
        return 0;
    }
    else{
        arquivo >> n >> m;
           
        MA = new int*[n];
        int u, v, h;

        for(int i = 0; i < n; i++)
        {
            MA[i] = new int[n];
            for(int j = 0; j < n; j++)
                MA[i][j] = INF;
        }

        for(int i = 0; i < m; i++)
        {
            arquivo >> u >> v >> h;
            u;
            v;
            MA[u][v] = MA[v][u] = h;//se não for direcionado
            //MA[u][v] = h;//se for direcionado
        }

        exibeMatriz(n, n, MA);
        
        floyd_warshall();

        exibeMatriz(n, n, MA);
        
        
    }
    
  
    return 0;
}