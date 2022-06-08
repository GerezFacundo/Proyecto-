#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#include"Subproducto.h"

Subproducto::Subproducto(){

}
bool Subproducto::leerDeDisco(int pos){
	FILE * pSub = fopen("Menudencias.dat","rb");
	if(pSub==nullptr)return false;
	fseek(pSub, pos * sizeof(Subproducto), SEEK_SET);
	bool leyo = fread(this, sizeof(Subproducto),1,pSub);
	fclose(pSub);
	return leyo;
}
bool Subproducto::grabarEnDisco(){
	FILE * pSub = fopen("Menudencias.dat","ab");
	if(pSub==nullptr)return false;
	bool grabo = fwrite(this, sizeof(Subproducto),1,pSub);
	fclose(pSub);
	return grabo;
}
int Subproducto::getCodigoSubproducto(){
	return codigoSubproducto;
}
char * Subproducto::getNombreSuproducto(){
	return nombreSubproducto;
}
float Subproducto::getPrecio(){
	return precio;
}
void Subproducto::setCodigoSubproducto(int cs){
	codigoSubproducto = cs;
}
void Subproducto::setNombreSubproducto(char * ns){
	strcpy(nombreSubproducto, ns);
}
void Subproducto::setPrecio(float p){
	precio = p;
}
void Subproducto::Mostrar(){
}

void Subproducto::Cargar(){


}
