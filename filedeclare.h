
#define FFTMODE 1
#define IFFTMODE 2

char *FFT_infilename[]={
	"DIR_64.txt",
	"DIR_256.txt",
	"DIR_1024.txt",
	"DII_64.txt",
	"DII_256.txt",
	"DII_1024.txt",
	"DOR_64.txt",
	"DOR_256.txt",
	"DOR_1024.txt",
	"DOI_64.txt",
	"DOI_256.txt",
	"DOI_1024.txt",
};

char *IFFT_infilename[]={
	"IIR_64.txt",
	"IIR_256.txt",
	"IIR_1024.txt",
	"III_64.txt",
	"III_256.txt",
	"III_1024.txt",
	"IOR_64.txt",
	"IOR_256.txt",
	"IOR_1024.txt",
	"IOI_64.txt",
	"IOI_256.txt",
	"IOI_1024.txt",
};

char *srand_FFT_outfilename[]={
	"srand_DIR.h",
	"srand_DII.h",
	"srand_DOR.h",
	"srand_DOI.h"
};	

char *sig_FFT_outfilename[]={
	"sig_DIR.h",
	"sig_DII.h",
	"sig_DOR.h",
	"sig_DOI.h"
};	

char *wgn_FFT_outfilename[]={
	"wgn_DIR.h",
	"wgn_DII.h",
	"wgn_DOR.h",
	"wgn_DOI.h"
};	


char *srand_IFFT_outfilename[]={
	"srand_IIR.h",
	"srand_III.h",
	"srand_IOR.h",
	"srand_IOI.h"
};	
char *sig_IFFT_outfilename[]={
	"sig_IIR.h",
	"sig_III.h",
	"sig_IOR.h",
	"sig_IOI.h"
};	
char *wgn_IFFT_outfilename[]={
	"wgn_IIR.h",
	"wgn_III.h",
	"wgn_IOR.h",
	"wgn_IOI.h"
};	


char filenamepath[3][30]={"srand/","sig/","wgn/"};


char *FFT_datatype[]={
	"DIR",
	"DII",
	"DOR",
	"DOI"
};
char *IFFT_datatype[]={
	"IIR",
	"III",
	"IOR",
	"IOI"
};

int datalen[3]={
	64,
	256,
	1024
};