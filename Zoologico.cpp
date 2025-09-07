#include <iostream>
using namespace std;

class Animal{
	protected:
		string respiro;
		string meReprodusco;
		string meDesplazo;
	public:
	Animal(string respiros,string meReproduscos,string meDesplazos){
		respiro=respiros;
		meReprodusco=meReproduscos;
		meDesplazo=meDesplazos;
	}	
	void setRespiro(string respiros){
		respiro=respiros;
	}
	void setMeReprodusco(string meReproduscos){
		meReprodusco=meReproduscos;
	}
	void setMeDesplazo(string meDesplazos){
		meDesplazo=meDesplazos;
	}
	string getRespiro(){
		return respiro;
	}
	string getMeReprodusco(){
		return meReprodusco;
	}
	string getMeDesplazo(){
		return meDesplazo;
	}
};
class Pez : public Animal{
	private:
		int ojo;
		string color;
		int CantidadHuevo;
	public:
	Pez(string respiros,string meReproduscos,string meDesplazos,int ojos,string colors,int CantidadHuevos) : Animal(respiros,meReproduscos,meDesplazos){
		ojo=ojos;
		color=colors;
		CantidadHuevo=CantidadHuevos;
	}	
	void setOjos(int ojos){
		ojo=ojos;
	}
	void setColor(string colors){
		color=colors;
	}
	void setCantidadesHuevos(int CantidadHuevos){
		CantidadHuevo=CantidadHuevos;
	}
	int getOjos(){
		return ojo;
	}
	string getColor(){
		return color;
	}
	int getCantidadesHuevos(){
		return CantidadHuevo;
	}
	void maxHuevos(Pez peces[]){
		int maximo=0;
		int digito;
		for(int i=0;i<4;i++){
			 if(peces[i].getCantidadesHuevos()>peces[i+1].getCantidadesHuevos()){
			 	if(maximo<peces[i].getCantidadesHuevos()){
			 		maximo=peces[i].getCantidadesHuevos();
					digito=i+1;	
				 }	
			}
			if(peces[i].getCantidadesHuevos()<peces[i+1].getCantidadesHuevos()){
			 	if(maximo<peces[i+1].getCantidadesHuevos()){
			 		maximo=peces[i+1].getCantidadesHuevos();
					digito=i+2;	
				 }	
			}
		}
	 cout<<"El pez que coloca mas huevos es "<<"p"<<digito<<" y coloca "<<maximo<<endl;
 }
	
};
class Ave : public Animal{
	private:
		string alimentacion;
		float largoAla;
		float tamanio;
	public:
	Ave(string respiros,string meReproduscos,string meDesplazos,string alimentacions,float largoAlas,float tamanios) : Animal(respiros,meReproduscos,meDesplazos){
		alimentacion=alimentacions;
		largoAla=largoAlas;
		tamanio=tamanios;
	}	
	void setAlimentacion(string alimentacions){
		alimentacion=alimentacions;
	} 
	void setLargoAlas(float largoAlas){
		largoAla=largoAlas;
	}
	void setTamanio(float tamanios){
		tamanio=tamanios;
	}
	string getAlimentacion(){
		return alimentacion;
	}
	float getLargoAlas(){
		return largoAla;
	}
	float getTamanio(){
		return tamanio;
	}
	void tipoAlimentacion(Ave aves[]){
		int c=0,o=0,h=0;
		for(int i=0;i<5;i++){
			if(aves[i].getAlimentacion()=="carnivoro"){
				c++;
			}
			if(aves[i].getAlimentacion()=="omnivoro"){
				o++;
			}
			if(aves[i].getAlimentacion()=="hervivoro"){
				h++;
			}}
			cout<<"Hay "<<c<<" aves carnivoras "<<endl;
			cout<<"Hay "<<o<<" aves omnivoros "<<endl;
			cout<<"Hay "<<h<<" aves hervivoros "<<endl;
		
	}
};

class Felino : public Animal{
	private:
		int largoGarra;
		string raza;
		string tipo;
	public:
	Felino(string respiros,string meReproduscos,string meDesplazos,int largoGarras,string razas,string tipos) :  Animal(respiros,meReproduscos,meDesplazos){
		largoGarra=largoGarras;
		raza=razas;
		tipo=tipos;
	}	
	void setLargoGarras(int largoGarras){
		largoGarra=largoGarras;
	}
	void setRaza(string razas){
		raza=razas;
	}
	void setTipo(string tipos){
		tipo=tipos;
	}
	int getLargoGarras(){
		return largoGarra;
	}
	string getRaza(){
		return raza;
	}
	string getTipos(){
		return tipo;
	}
	void  maxLargoGarra(Felino felinos[]){
		int maximo=0,digito;
		for(int i=0;i<4;i++){
			if(felinos[i].getLargoGarras()>felinos[i+1].getLargoGarras()){
				if(maximo<felinos[i].getLargoGarras()){
					maximo=felinos[i].getLargoGarras();
				    digito=i+1;
				}	
			}
			if(felinos[i].getLargoGarras()<felinos[i+1].getLargoGarras()){
				if(maximo<felinos[i+1].getLargoGarras()){
					maximo=felinos[i+1].getLargoGarras();
				    digito=i+2;
				}
			}
		}
		cout<<"El felino con las garras mas largas es "<<"f"<<digito<<" con la medida de "<<maximo<<endl;
	}
};
int main()
{
	//peces llenado
	Pez p1=Pez("branquias","huevos","nadando",2,"negros",150);
	Pez p2=Pez("branquias","huevos","nadando",2,"rojos",101);
	Pez p3=Pez("branquias","huevos","nadando",2,"verdes",113);
	Pez p4=Pez("branquias","huevos","nadando",2,"azules",100);
	Pez p5=Pez("branquias","huevos","nadando",2,"celestes",160);
	Pez peces[5] = {p1,p2,p3,p4,p5};
	//ave llenado
	Ave a1=Ave("pulmones","huevos","volando","carnivoro",20.5,14);
	Ave a2=Ave("pulmones","huevos","volando","hervivoro",12,10);
	Ave a3=Ave("pulmones","huevos","volando","omnivoro",22.6,5);
	Ave a4=Ave("pulmones","huevos","volando","omnivoro",2.53,2.4);
    Ave a5=Ave("pulmones","huevos","volando","hervivoro",5,1.6);
    Ave aves[5] = {a1,a2,a3,a4,a5};
    //felino llenado
    Felino f1=Felino("pulmones","mamifero","caminando",2,"michi","salvaje");
    Felino f2=Felino("pulmones","mamifero","caminando",1,"galactico","salvaje");
    Felino f3=Felino("pulmones","mamifero","caminando",1,"pulman","domestico");
    Felino f4=Felino("pulmones","mamifero","caminando",3,"mantecato","salvaje");
    Felino f5=Felino("pulmones","mamifero","caminando",2,"fufio","domestico");
    Felino felinos[5] = {f1,f2,f3,f4,f5};
    //llamado metodos 
	f1.maxLargoGarra(felinos);
	cout<<endl;
	p1.maxHuevos(peces);
	cout<<endl;
	a1.tipoAlimentacion(aves);
	cout<<endl;
	cout<<"============"<<endl;
	cout<<endl;
	//Especificaciones de cada animal
	for(int i=0;i<5;i++){
		cout<<" El pez del zoologico es: p"<<i+1<<endl;
		cout<<" Respira por: "<<peces[i].getRespiro()<<endl;
		cout<<" Esta especie tiene: "<<peces[i].getMeReprodusco()<<endl;
		cout<<" Se desplaza: "<<peces[i].getMeDesplazo()<<endl;
		cout<<" Tiene: "<<peces[i].getOjos()<<" ojos "<<endl;
		cout<<" Tiene los ojos de color: "<<peces[i].getColor()<<endl;
		cout<<" Tiene "<<peces[i].getCantidadesHuevos()<<" huevos "<<endl;
		cout<<endl;
		cout<<"==============="<<endl;
		cout<<endl;
	}
     for(int i=0;i<5;i++){
		cout<<" La ave del zoologico es: a"<<i+1<<endl;
		cout<<" Respira por: "<<aves[i].getRespiro()<<endl;
		cout<<" Esta especie tiene: "<<aves[i].getMeReprodusco()<<endl;
		cout<<" Se desplaza: "<<aves[i].getMeDesplazo()<<endl;
		cout<<" Es : "<<aves[i].getAlimentacion()<<endl;
		cout<<" Tiene las alas de: "<<aves[i].getLargoAlas()<<" cm "<<endl;
		cout<<" Tiene un tamaño de: "<<aves[i].getTamanio()<<" cm "<<endl;
		cout<<endl;
		cout<<"==============="<<endl;
		cout<<endl;
	}
	for(int i=0;i<5;i++){
		cout<<" El felino del zoologico es: f"<<i+1<<endl;
		cout<<" Respira por: "<<felinos[i].getRespiro()<<endl;
		cout<<" Esta especie es un: "<<felinos[i].getMeReprodusco()<<endl;
		cout<<" Se desplaza: "<<felinos[i].getMeDesplazo()<<endl;
		cout<<" Tiene las garras de : "<<felinos[i].getLargoGarras()<<" cm "<<endl;
		cout<<" Es de raza: "<<felinos[i].getRaza()<<endl;
		cout<<" Es de tipo: "<<felinos[i].getTipos()<<endl;
		cout<<endl;
		cout<<"==============="<<endl;
		cout<<endl;
	}
	
}
