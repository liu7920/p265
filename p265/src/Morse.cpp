#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#include "Morse.h"

Morse::Morse() {
	// TODO Auto-generated constructor stub
	this->alphabet[0]=".-";
	this->alphabet[1]="-...";
	this->alphabet[2]="-.-.";
	this->alphabet[3]="-..";
	this->alphabet[4]=".";
	this->alphabet[5]="..-.";
	this->alphabet[6]="--.";
	this->alphabet[7]="....";
	this->alphabet[8]="..";
	this->alphabet[9]=".---";
	this->alphabet[10]="-.-";
	this->alphabet[11]=".-..";
	this->alphabet[12]="--";
	this->alphabet[13]="-.";
	this->alphabet[14]="---";
	this->alphabet[15]=".--.";
	this->alphabet[16]="--.-";
	this->alphabet[17]=".-.";
	this->alphabet[18]="...";
	this->alphabet[19]="-";
	this->alphabet[20]="..-";
	this->alphabet[21]="...-";
	this->alphabet[22]=".--";
	this->alphabet[23]="-..-";
	this->alphabet[24]="-.--";
	this->alphabet[25]="--..";

	this->digit[0]="-----";
	this->digit[1]=".----";
	this->digit[2]="..---";
	this->digit[3]="...--";
	this->digit[4]="....-";
	this->digit[5]=".....";
	this->digit[6]="-....";
	this->digit[7]="--...";
	this->digit[8]="----..";
	this->digit[9]="----.";

	this->slash="-..-.";
	this->question="..--..";
	this->comma="--..--";
	this->period=".-.-.-";
	this->plus=".-.-.";
	this->equal="-...-";
}

void Morse::text2Morse(string text, string& morse){

	for(int i=0; i<text.length(); i++){
		if(text[i]>='a' && text[i]<='z'){
			morse.append(this->alphabet[text[i]-97]);
		}
		else if(text[i]>='A' && text[i]<='Z'){
			morse.append(this->alphabet[text[i]-65]);
		}
		else if(text[i]>='0' && text[i]<= '9'){
			morse.append(this->digit[text[i]-48]);
		}
		else if(text[i]=='/'){
			morse.append(this->slash);
		}
		else if(text[i]=='?'){
			morse.append(this->question);
		}
		else if(text[i]==','){
			morse.append(this->comma);
		}
		else if(text[i]=='.'){
			morse.append(this->period);
		}
		else if(text[i]=='+'){
			morse.append(this->plus);
		}
		else if(text[i]=='='){
			morse.append(this->equal);
		}
		else if(text[i]==' '){
			morse.append("  ");
		}
		morse.append(" ");
	}

}

bool Morse::morse2Text(string morse, string& text){

	char temp[100]=" ";
	string temp1;
	string ch;
	int o=0;
	text = "";

	for(int i=0; i<morse.length(); i++){
		if(morse[i]==' '){
			temp[o]='\0';
			temp1=temp;

			for(int p=0; p<26; p++){
				if(this->alphabet[p]==temp1){
					cout << (char)('a'+p) ;
					ch=(char)('a'+p);
					text.append(ch);
				}
			}

			for(int p=0; p<10; p++){
				if(this->digit[p]==temp1){
					cout << p ;
					ch=to_string(p);
					text.append(ch);
				}
			}

			if(this->slash == temp1){
				cout << "/" ;
				ch="/";
				text.append(ch);
			}
			else if(this->question == temp1){
				cout << "?" ;
				ch="?";
				text.append(ch);
			}
			else if(this->comma == temp1){
				cout << "," ;
				ch=",";
				text.append(ch);
			}
			else if(this->period == temp1){
				cout << "." ;
				ch=".";
				text.append(ch);
			}
			else if(this->plus == temp1){
				cout << "+" ;
				ch="+";
				text.append(ch);
			}
			else if(this->equal == temp1){
				cout << "=" ;
				ch="=";
				text.append(ch);
			}

			o=0;
			strcpy(temp,"");
			if(morse[i+1]==' ' && morse[i+2]==' '){
				cout << " " ;
				ch=' ';
				text.append(ch);
				i=i+2;
			}
		}
		else{
			temp[o]=morse[i];
			o++;
		}
	}

	return true;
}
