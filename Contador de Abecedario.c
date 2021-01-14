#include <stdio.h>
#include <string.h>

int main(){
	int longitud;
        int pop;
        printf("Dame el tamaño de la cadena\n");
        scanf("%d",&pop);
	char cad[pop];
	char let='a';
        char lat='b';
        char lit='c';
        char lot='d';
        char lut='e';
        char lpa='f';
        char lle='g';
        char lli='h';
        char llu='i';
        char lfa='j';
        char llb='k';
        char llc='l';
        char lld='m';
        char lke='n';
        char llf='o';
        char llg='p';
        char llh='q';
        char loi='r';
        char llj='s';
        char llk='t';
        char lll='u';
        char llm='v';
        char lln='w';
        char llo='x';
        char llp='y';
        char llq='z';
	int a, ab=0,b,bb=0,cb=0,c,d,db=0,e,eb=0,f,fb=0,g,gb=0,h,hb=0,i,ib=0,j,jb=0;
        int k,kb=0,l,lb=0,m,mb=0,n,nb=0,o,ob=0,p,pb=0,q,qb=0,r,rb=0,s,sb=0,t,tb=0;
        int u,ub=0,v,vb=0,w,wb=0,x,xb=0,y,yb=0,z,zb=0;

	printf("Ingrese una palabra: ");
	scanf("%s", cad);
	longitud = strlen(cad);

	for(a=0;a<longitud;a++){
		if(cad[a]==let){
			ab++;
		}
	}
        for(b=0;b<longitud;b++){
		if(cad[b]==lat){
			bb++;
		}
	}
         for(c=0;c<longitud;c++){
		if(cad[c]==lit){
			cb++;
		}
	}
          for(d=0;d<longitud;d++){
		if(cad[d]==lot){
			db++;
		}
	}
            for(e=0;e<longitud;e++){
		if(cad[e]==lut){
			eb++;
		}
	}
            for(f=0;f<longitud;f++){
		if(cad[f]==lpa){
			fb++;
		}
	}
                    for(g=0;g<longitud;g++){
		if(cad[f]==lle){
			gb++;
		}
	}
                    for(h=0;h<longitud;h++){
		if(cad[h]==lli){
			hb++;
		}
	}
                  for(i=0;i<longitud;i++){
		if(cad[i]==llu){
			ib++;
		}
	}
                  for(j=0;j<longitud;j++){
		if(cad[j]==lfa){
			jb++;
		}
	}
                  for(k=0;k<longitud;k++){
		if(cad[k]==llb){
			kb++;
		}
	}
                  for(l=0;l<longitud;l++){
		if(cad[l]==llc){
			lb++;
		}
	}
                  for(m=0;m<longitud;m++){
		if(cad[m]==lld){
			mb++;
		}
	}
                  for(n=0;n<longitud;n++){
		if(cad[n]==lke){
			nb++;
		}
	}
                  for(o=0;o<longitud;o++){
		if(cad[o]==llf){
			ob++;
		}
	}
                  for(p=0;p<longitud;p++){
		if(cad[p]==llg){
			pb++;
		}
	}
                  for(q=0;q<longitud;q++){
		if(cad[q]==llh){
			qb++;
		}
	}
                  for(r=0;r<longitud;r++){
		if(cad[r]==loi){
			rb++;
		}
	}
                  for(s=0;s<longitud;s++){
		if(cad[s]==llj){
			sb++;
		}
	}
                  for(t=0;t<longitud;t++){
		if(cad[t]==llk){
			tb++;
		}
	}
                  for(u=0;u<longitud;u++){
		if(cad[u]==lll){
			ub++;
		}
	}
                  for(v=0;v<longitud;v++){
		if(cad[v]==llm){
			vb++;
		}
	}
                  for(w=0;w<longitud;w++){
		if(cad[w]==lln){
			wb++;
		}
	}
                  for(x=0;x<longitud;x++){
		if(cad[x]==llo){
			xb++;
		}
	}
                  for(y=0;y<longitud;y++){
		if(cad[y]==llp){
			yb++;
		}
	}
                  for(z=0;z<longitud;z++){
		if(cad[z]==llq){
			zb++;
		}
	}
	printf("La letra %c aparece %i veces\n",let,ab);
        printf("La letra %c aparece %i veces\n",lat,bb);
        printf("La letra %c aparece %i veces\n",lit,cb);
        printf("La letra %c aparece %i veces\n",lot,db);
        printf("La letra %c aparece %i veces\n",lut,eb);
        printf("La letra %c aparece %i veces\n",lpa,fb);
        printf("La letra %c aparece %i veces\n",lle,gb);
        printf("La letra %c aparece %i veces\n",lli,hb);
        printf("La letra %c aparece %i veces\n",llu,ib);
        printf("La letra %c aparece %i veces\n",lfa,jb);
        printf("La letra %c aparece %i veces\n",llb,kb);
        printf("La letra %c aparece %i veces\n",llc,lb);
        printf("La letra %c aparece %i veces\n",lld,mb);
        printf("La letra %c aparece %i veces\n",lke,nb);
        printf("La letra %c aparece %i veces\n",llf,ob);
        printf("La letra %c aparece %i veces\n",llg,pb);
        printf("La letra %c aparece %i veces\n",llh,qb);
        printf("La letra %c aparece %i veces\n",loi,rb);
        printf("La letra %c aparece %i veces\n",llj,sb);
        printf("La letra %c aparece %i veces\n",llk,tb);
        printf("La letra %c aparece %i veces\n",lll,ub);
        printf("La letra %c aparece %i veces\n",llm,vb);
        printf("La letra %c aparece %i veces\n",lln,wb);
        printf("La letra %c aparece %i veces\n",llo,xb);
        printf("La letra %c aparece %i veces\n",llp,yb);
        printf("La letra %c aparece %i veces\n",llq,zb);
	return 0;
}
