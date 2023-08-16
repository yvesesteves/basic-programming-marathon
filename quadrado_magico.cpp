#include <iostream>

using namespace std;

int main()
{
    int N;
    int V[11][11];
    int i, j, somaf = 0, soma = 0, somad = 0;
    cin >> N;
    //preenchendo a quadrado magico
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            cin >> V[i][j];
    }
    for(i=0;i<1;i++){
        somad+=V[i][i];
        for(j=0;j<N;j++)
            somaf += V[i][j];
    }
    for(i=1;i<N;i++){
        soma = 0;
        somad+=V[i][i];
        for(j=0;j<N;j++)
        {
            soma+=V[i][j];
        }
        if(soma != somaf)
        {
                printf("-1\n");
                return 0;
        }
    }
    if(somad!=somaf)
    {
        printf("-1\n");
        return 0;
    }
    somad = 0;
    for(i=0;i<N;i++){
        soma = 0;

        for(j=0;j<N;j++)
        {
            soma+=V[j][i];
            if(N == i + j + 1)
            {
                somad += V[i][j];
            }
        }
        if(soma != somaf)
            {
                printf("-1\n");
                return 0;
            }
    }
    if(somad!=somaf)
    {
        printf("-1\n");
    }
    else
        printf("%d\n", somaf);
    return 0;
}