#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<assert.h>
#include<string.h>


string ari(string s){
int charact=0,word=0,sent=0;
 for(int i=0;s[i]!='\0';i++){
	 if(isalnum((int)s[i]))
	 charact+=1;
	 else if(s[i]==' ')
	 word+=1;
	 else if(s[i]=='.'||s[i]=='?')
	 sent+=1;
	 else if(s[i]=='!')
	 sent+=1;
	 }
	
	float wf=(float)charact/word,sf=(float)word/sent;
	 
	float ari=4.71*wf+0.5*sf-21.43;
	
	int rari=(int)ari;
	if(ari>rari)rari+=1;
        if(rari==1) return "Kindergarten";
	else if(rari==2) return "First/Second Grade";
	else if(rari==3) return "Third Grade";
	else if(rari==4) return "Fourth Grade";
	else if(rari==5) return "Fifth Grade";
	else if(rari==6) return "Sixth Grade";
	else if(rari==7) return "Seventh Grade";
	else if(rari==8) return "Eighth Grade";
	else if(rari==9) return "Ninth Grade";
	else if(rari==10) return "Tenth Grade";
	else if(rari==11) return "Eleventh Grade";
	else if(rari==12) return "Twelfth grade";
	else if(rari==13) return "College student";
	else if(rari>=14) return "Professor";
}
