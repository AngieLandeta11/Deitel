template <class T>

T maximo(T valor1, T valor2, T valor3){
	T valorMaximo=valor1;
	
	if(valor2>valorMaximo){
		valorMaximo=valor2;
	}
	if(valor3>valorMaximo){
		valorMaximo=valor3;
	}
	
	return valorMaximo;
}