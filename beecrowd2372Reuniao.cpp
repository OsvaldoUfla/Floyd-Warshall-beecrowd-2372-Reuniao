#include<iostream>
#include<vector>
#include<utility>
#include<functional>
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

// quantidade de pares origem-destino a ser calculado
int k;

int floyd_warshall()
{
    for(int k = 0; k < n; k++)
      for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
          /*
           * Adaptacao: originalmente, o calculo eh MA[i][j] = min(MA[i][j], MA[i][k] + MA[k][j]);
           */
          MA[i][j] = min(MA[i][j], max(MA[i][k], MA[k][j]));
}

int main()
{
    int instancia = 1;
    cin >> n >> m;
    while(n != 0 && m != 0)
    {     
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
            cin >> u >> v >> h;
            u--;
            v--;
            MA[u][v] = MA[v][u] = h;
        }
     
        floyd_warshall();
     
        int org, dst, k;
        cin >> k;
        cout << "Instancia " << instancia << endl;
        for(int i = 0; i < k; i++)
        {
            cin >> org >> dst;
            org--;
            dst--;
            if(org != dst)
              cout << MA[org][dst] << endl;
         
            else
              cout << 0 << endl;
        }
        instancia++;
        cout << endl;
     
        cin >> n >> m;
    }
 
    return 0;
}