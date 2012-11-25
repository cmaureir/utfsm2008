x<-read.table(file = "/home/gzamora/ec2008_01/ARCHIVOALEER.txt", sep = "\t", header = TRUE);
#data<-read.table("clipboard",dec=",",header=TRUE)

cov(data$x,data$y)
cor(data$x,data$y)

reg<-lm(data$y~data$x)

summary.lm(reg)

plot(data$x,data$y)
abline(reg)

hist(reg$residuals)

x<-sort(unique(data$x))
k<-length(x3)
y<-0
for(i in 1:k){
	temp<-subset(data,data[1]==x[i])
	print(temp)
	y[i]<-mean(temp$y)
}

