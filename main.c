#include <stdio.h>
#include <string.h>
#include "filedeclare.h"


void data_to_head_file(char *infilename[],char *outfilename[],char *filenamepath,int mode){
	FILE *infp,*outfp;
	float a;
	int i=0;
	int len=0;
	int outfilenum=0;	
	char filetype[30];

	strncpy(filetype,filenamepath,strlen(filenamepath)-1);   
	filetype[strlen(filenamepath)-1]='\0';
	
	for (outfilenum=0;outfilenum<4;outfilenum++)
	{
		
		outfp=fopen(outfilename[outfilenum],"w");
		if (outfp==NULL)
		{
			printf("打开文件<%s>失败！\n",outfilename[outfilenum]);
			return 0;
		}

		for (i=outfilenum*3;i<outfilenum*3+3;i++)
		{
			char path[30];			
			strcpy(path,filenamepath);
			len=0;
			infp=fopen(strcat(path,infilename[i]),"r");
			if (infp==NULL)
			{
				printf("打开文件<%s>失败！\n",path);
				return 0;
			}		
		
			if (mode == FFTMODE)
			{
				if (i%3==0)
				{
					fprintf(outfp,"#include \"FFT_mode.h\"\n\n");
				}
				fprintf(outfp,"#if %s%d==%s_FFT_CHOICE\n",FFT_datatype[outfilenum],datalen[i%3],filetype);
				fprintf(outfp,"float %s_%s_%d[%d]={\n",filetype,FFT_datatype[outfilenum],datalen[i%3],datalen[i%3]);
			}else if (mode == IFFTMODE)
			{
				if (i%3==0)
				{
					fprintf(outfp,"#include \"IFFT_mode.h\"\n\n");
				}
				fprintf(outfp,"#if %s%d==%s_IFFT_CHOICE\n",IFFT_datatype[outfilenum],datalen[i%3],filetype);
				fprintf(outfp,"float %s_%s_%d[%d]={\n",filetype,IFFT_datatype[outfilenum],datalen[i%3],datalen[i%3]);
			}else{
				printf("mode error.\n");
				return 0;
			}			

			while (len<datalen[i%3])
			{
				fscanf(infp,"%f",&a);
				fprintf(outfp,"\t\t%f,\n",a);
				len++;
			}
			fprintf(outfp,"%s","};\n");
			fprintf(outfp,"%s","#endif\n\n");
			fclose(infp);		
		}
		fclose(outfp);

		printf("%s 创建完成\n",outfilename[outfilenum]);
	}
	printf("\n");
}

int main(){	

	data_to_head_file(FFT_infilename,srand_FFT_outfilename,filenamepath[0],FFTMODE);
	data_to_head_file(FFT_infilename,sig_FFT_outfilename,filenamepath[1],FFTMODE);
	data_to_head_file(FFT_infilename,wgn_FFT_outfilename,filenamepath[2],FFTMODE);

	data_to_head_file(IFFT_infilename,srand_IFFT_outfilename,filenamepath[0],IFFTMODE);
	data_to_head_file(IFFT_infilename,sig_IFFT_outfilename,filenamepath[1],IFFTMODE);
	data_to_head_file(IFFT_infilename,wgn_IFFT_outfilename,filenamepath[2],IFFTMODE);


	return 0;
}