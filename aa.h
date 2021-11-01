#define phi 3.14
float balokPep(int p,int l, int t){
	float volumeb;
	volumeb = p*l*t;
	return volumeb;
}
float balokPip(int p, int l, int t){
	float luasb;
	luasb = 2*(p*l+p*t+l*t);
	return luasb;
}
float kubusEh(int s){
	float volumek;
	volumek = s*s*s;
	return volumek;
}
float kubusAh(int s){
	float luask;
	luask = 6 * s * s;
	return luask;
}
float tabungVe(int r, int t){
	float volumett;
	volumett = phi*r*r*t;
	return volumett;
}
float tabungLu(int r, int t){
	float luast;
	luast = 2*phi*r*(r+t);
	return luast;
}