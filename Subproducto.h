#ifndef SUBPRODUCTO_H_INCLUDED
#define SUBPRODUCTO_H_INCLUDED

class Subproducto{
	private:
		int codigoSubproducto;
		char nombreSubproducto[25];
		float precio;
	public:
		Subproducto();
		bool leerDeDisco(int);
		bool grabarEnDisco();
		int getCodigoSubproducto();
		char * getNombreSuproducto();
		float getPrecio();
		void setCodigoSubproducto(int);
		void setNombreSubproducto(char *);
		void setPrecio(float);
		void Mostrar();
		void Cargar();
};



#endif // SUBPRODUCTO_H_INCLUDED
