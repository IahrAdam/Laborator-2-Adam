#include <stdlib.h>
#include <stdio.h>
int tabla[8][8];
int p;

int verifica_pioni(int poz,int tabla[][8])
{

}


int main()
{
    int case =32,linii=8,wrooks=0,wknights=0,wbishops=0,wqueen=0,wking=0,brooks=0,bknights=0,bbishops=0,bqueen=0,bking=0;
    char piesa[3];
    for(int i = 0;i<case;i++)
    {
        scanf("%s", piesa);
        //verific turele si culoriile lor
    if(piesa[0] == 'r'){
        if(piesa[1]=='w')
        {
        if(wrooks%2==0){
            tabla[0][0]=1;
        }
        else
            tabla[0][7]=1;
            wrooks++;
        }
         if(piesa[1]=='b')
        {
        if(brooks%2==0){
            tabla[7][0]=1;
        }
        else
            tabla[7][7]=1;
            brooks++;
        }
    }
    //verific caii si culoriile lor
        if(piesa[0] == 'n'){
        if(piesa[1]=='w')
        {
        if(wknights%2==0){
            tabla[0][1]=1;
        }
        else
            tabla[0][6]=1;
            wknigths++;
        }
         if(piesa[1]=='b')
        {
        if(bknigths%2==0){
            tabla[7][1]=1;
        }
        else
            tabla[7][6]=1;
            brooks++;
        }
    }

    if(s[0]=='p')
    {

    }
       





    }


 /*  char s[3];
    for (int i = 0; i < 32; i++)
    {
        scanf("%s", s);
        if (s[1] == 'w')
        {
            if (s[0] == 'k')
            {
                m[0][4] = 1;
            }
            else if (s[0] == 'q')
            {
                m[0][3] = 1;
            }
            else if (s[0] == 'r')
            {
                if (m[0][0] == 0)
                    m[0][0] = 1;
                else
                    m[0][7] = 1;
            }
            else if (s[0] == 'n')
            {
                if (m[0][1] == 0)
                    m[0][1] = 1;
                else
                    m[0][6] = 1;
            }
            else if (s[0] == 'b')
            {
                if (m[0][2] == 0)
                    m[0][2] = 1;
                else
                    m[0][5] = 1;
            }
            else
            {
                p = 0;
                while (m[1][p] != 0)
                    p++;
                m[1][p] = 1;
            }
        }
        else if (s[1] == 'b')
        {
            if (s[0] == 'k')
            {
                m[7][4] = 1;
            }
            else if (s[0] == 'q')
            {
                m[7][3] = 1;
            }
            else if (s[0] == 'r')
            {
                if (m[7][0] == 0)
                    m[7][0] = 1;
                else
                    m[7][7] = 1;
            }
            else if (s[0] == 'n')
            {
                if (m[7][1] == 0)
                    m[7][1] = 1;
                else
                    m[7][6] = 1;
            }
            else if (s[0] == 'b')
            {
                if (m[7][2] == 0)
                    m[7][2] = 1;
                else
                    m[7][5] = 1;
            }
            else
            {
                p = 0;
                while (m[6][p] != 0)
                    p++;
                m[6][p] = 1;
            }
        }
    }
    for (int i = 7; i >= 0; i--)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
*/

    return 0;
}