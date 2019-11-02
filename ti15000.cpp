#include <stdlib.h>
#include <stdio.h>
#include<time.h>
#define max 50
int joueur[max][max] ;
int joueur2[max][max];
int i,j,a,b,v,p,l,c,x,y,f,q,k,m,d,g,u,z,e;
int pieces[max][max];
int grille[max][max];
int affichage()
{
	v=0;
		printf("\n");
printf(" -----  -----  -----  -----  -----  -----  ----- ---- ---- ----\n");
printf("      C                      ***GRILLE****\n");
printf("   _________________________________________________________\n");
printf("L  |     | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 10 |\n");
printf("   |_____|____|____|____|____|____|____|____|____|____|____|\n");
	for(j=1;j<11;j++){
	 v=v+1;
	 if (v<10) {
	printf("   |  %d  |",v);
    } else { 	printf("   | %d  |",v);
    }
      for(i=0;i<10;i++)
     	{
        switch(grille[i][j])
        {

          case -1 : printf("    |");
          break;
          case 7 : printf("    |");
          break;
          default : printf(" %d  |",grille[i][j]);
          
}
}
printf("\n");
printf("   |_____|____|____|____|____|____|____|____|____|____|____|\n");
}
return 0;
}
int jeu()
{
	for (k=0;k<7;k++)
	{
if ((joueur[0][0]!= -1)&&(joueur[1][0]!= -1)&&(joueur[2][0]!= -1)&&(joueur[3][0]!= -1)&&(joueur[4][0]!= -1)&&(joueur[5][0]!= -1)&&(joueur[6][0]!= -1))
{
	for(i=0;i<2;i++)
{
	printf("\n");
    printf("Donner le numero de la piece : ");
    scanf("%d",&p);
    printf("Donner la ligne :");
    scanf("%d",&l);
    l=l-1;
    c=c-1;
    printf("Donner la colone :");
    scanf("%d",&c);
      if ((grille[l][c]=-1)&(l<11)&(c<11)&(p<7)&(joueur[0][p]!=-1))
      {
                grille[4][5]= 6; grille[5][5]=6;
             	grille[l][c]= joueur[0][p]; joueur[0][p]=-1;
            	grille[l+1][c]= joueur[1][p]; 
            	q = rand()&6;
            	grille[l+2][c]= joueur2[0][q]; joueur2[0][q]=-1;
            	grille[l+3][c]= joueur2[1][q];
               affichage();
	  }
	  else {
	  	printf("\n");
	  	printf("SELCTIONEER A NOUVEAU \n");
	  	printf("\n");
	  	i=i-1;
	  }
	 }
	
}    else {
	  printf("Tous les pieces sont utilise \n");
	  printf("FIN DE JEU !!!!");
}

}
return 0;
}
main()
{
	for(i=0;i<11;i++){
	for(j=0;j<11;j++){
		grille[i][j]=7;
	}
}
grille[4][5]= 6; grille[5][5]=6;
grille[2][5]=-1; grille[3][5]=-1; grille[3][6]=-1; grille[3][4]=-1; grille[4][6]=-1; grille[4][4]=-1; grille[4][7]=-1; grille[4][3]=-1; grille[5][6]=-1; grille[5][4]=-1; grille[5][7]=-1; grille[5][3]=-1; grille[7][5]=-1; grille[6][5]=-1; grille[6][6]=-1; grille[6][4]=-1;
a=1;
g=0;
u=0;
srand(time(0));
printf("                                      ***MINI PROJET***\n");
printf("\n");
printf("- LES 28 PIECES : \n");
printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
 for(j=0;j<28;j++)
	   {
	   	if (j<7) {
	   		pieces[0][j]=0;
	   		printf(" 0  |");
		   }
	    else
	    {
		if ((j<13) & (j>=7)) {
	   		pieces[0][j]=1;
	   		printf(" 1  |");
		   }
		  else
	    {
		if ((j<18) & (j>=13)){
	   		pieces[0][j]=2;
	   		printf(" 2  |");
		   }
		 else
	    {
		if ((j<22) & (j>=18)){
	   		pieces[0][j]=3;
	   		printf(" 3  |");
		   }
		 else
	    {
		if ((j<25) & (j>=22)){
	   		pieces[0][j]=4;
	   		printf(" 4  |");
		   }
		   else
	    {
		if ((j<27) & (j>=25)){
	   		pieces[0][j]=5;
	   		printf(" 5  |");
		   }
		 else
	    {
		if (j=27){
	   		pieces[0][j]=6;
	   		printf(" 6  |");
		   }
        }
		   }
		   }
	}
}
}
}
printf("\n");
printf(" 0  |"); pieces[1][0]=0; printf(" 1  |"); pieces[1][1]=1; printf(" 2  |"); pieces[1][2]=2; printf(" 3  |"); pieces[1][3]=3; printf(" 4  |"); pieces[1][4]=4; printf(" 5  |"); pieces[1][5]=5; printf(" 6  |"); pieces[1][6]=6; printf(" 1  |"); pieces[1][7]=1; printf(" 2  |"); pieces[1][8]=2; printf(" 3  |"); pieces[1][9]=3; printf(" 4  |"); pieces[1][10]=4; printf(" 5  |"); pieces[1][11]=5; printf(" 6  |"); pieces[1][12]=6; printf(" 2  |"); pieces[1][13]=2; printf(" 3  |"); pieces[1][14]=3; printf(" 4  |"); pieces[1][15]=4; printf(" 5  |"); pieces[1][16]=5; printf(" 6  |"); pieces[1][17]=6; printf(" 3  |"); pieces[1][18]=3; printf(" 4  |"); pieces[1][19]=4; printf(" 5  |"); pieces[1][20]=5; printf(" 6  |"); pieces[1][21]=6; printf(" 4  |"); pieces[1][22]=4; printf(" 5  |"); pieces[1][23]=5; printf(" 6  |"); pieces[1][24]=6; printf(" 5  |"); pieces[1][25]=5; printf(" 6  |"); pieces[1][26]=6; printf(" 6  |\n"); pieces[1][27]=6;
printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("\n");
printf("Les Pieces de joueur 1 : \n");
printf("\n");
    for(d=0;d<7;d++){
       b=rand()&27;
	   if (pieces[0][b]>-1) {
	   	g=g+1;
       printf("Piece %d : | %d | ",a,pieces[0][b]);
	     joueur[0][g]= pieces[0][b] ;
	     pieces[0][b]= -1 ;
		printf(" %d |  * ",pieces[1][b]);
	    joueur[1][g]= pieces[1][b] ;
		pieces[1][b]= -1 ;
		a=a+1;    }
		else {
		d=d-1;
		}

}
    for(i=0;i<7;i++){

	   f=rand()&27;
	   if (pieces[0][f]>-1) {
	   	u=u+1;
	     joueur2[0][u]= pieces[0][f] ;
	     pieces[0][f]= -1 ;
	     joueur2[1][u]= pieces[1][f] ;
		 pieces[1][f]= -1 ;
	    }
		else {
			i=i-1;
		}
	}
	printf("\n");
affichage();
jeu();
return 0;
}



