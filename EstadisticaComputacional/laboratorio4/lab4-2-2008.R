# intervalo de de confianza para la media con varianza
# poblacional conocida
ic1<-function(x,sigma,porcentaje){
	n<-length(x)
	px<-mean(x)
	alfa<-1-porcentaje/100
	Z<-qnorm(1-alfa/2)
	ic<-c(px-Z*sigma/sqrt(n),px+Z*sigma/sqrt(n),2*Z*sigma/sqrt(n))
	return(ic)
}

# intervalo de confianza para la media con varianza 
# poblacional desconocida
ic2<-function(x,porcentaje){
	n<-length(x)
	px<-mean(x)
	S<-sd(x)
	alfa<-1-porcentaje/100
	T<-qt(1-alfa/2,n-1)
	ic<-c(px-T*S/sqrt(n),px+T*S/sqrt(n),2*T*S/sqrt(n))
	return(ic)
}

# intervalo de confianza para la varianza
icVar<-function(x,porcentaje){
	S<-sd(x)
	alfa<-1-porcentaje/100
	n<-length(x)
	chil<-qchisq(1-alfa/2,n-1)
	chir<-qchisq(alfa/2,n-1)
	icVar<-c(((n-1)*S^2)/(chil),((n-1)*S^2)/(chir),((n-1)*S^2)/(chir)-((n-1)*S^2)/(chil))
	return(icVar)
}
# intervalo de confianza para la diferencia de medias con varianzas
# poblacionales conocidas
icdm1<-function(x1,x2,sigma1,sigma2,porcentaje){
  n1<-length(x1)
  n2<-length(x2)
  p1<-mean(x1)
  p2<-mean(x2)
  alfa<-1-porcentaje/100
  Z<-qnorm(1-alfa/2)
  ic<-c(p1-p2-Z*sqrt(sigma1/n1 + sigma2/n2),p1-p2+Z*sqrt(sigma1/n1 + sigma2/n2),2*Z*sqrt(sigma1/n1 + sigma2/n2))
  return(ic)
}

# intervalo de confianza para la diferenecia de medias
# suponiendo varianzas poblacionales desconocidas pero iguales
icdm2<-function(x1,x2,porcentaje){
	n1<-length(x1)
	n2<-length(x2)
	var1<-var(x1)
	var2<-var(x2)
	Sp<-sqrt(((n1-1)*var1+(n2-1)*var2)/(n1+n2-2))
	alfa<-1-porcentaje/100
	T<-qt(1-alfa/2,n1+n2-2)
	p1<-mean(x1)
	p2<-mean(x2)
	ic<-c(p1-p2-T*Sp*sqrt(1/n1+1/n2),p1-p2+T*Sp*sqrt(1/n1+1/n2),2*T*Sp*sqrt(1/n1+1/n2))
	return(ic)
}

# intervalo de confianza para la diferencia de medias 
# con varianza poblacional desconocidas y desiguales
icdm3<-function(x1,x2,porcentaje){
	n1<-length(x1)
	n2<-length(x2)
	var1<-var(x1)
	var2<-var(x2)
	v <- ( var1/n1 + var2/n2 )^2 / ( (var1/n1)^2/(n1-1) + (var2/n2)^2/(n2-1) )
	alfa<-1-porcentaje/100
	T<-qt(1-alfa/2,v)
	p1<-mean(x1)
	p2<-mean(x2)
	ic<-c(p1-p2-T*sqrt(var1/n1 + var2/n2),p1-p2+T*sqrt(var1/n1 + var2/n2),2*T*sqrt(var1/n1 + var2/n2))
	return(ic)
}







