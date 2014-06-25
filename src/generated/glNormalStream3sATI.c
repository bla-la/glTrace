#include <glTraceCommon.h>
#include <generated.h>

#define glNormalStream3sATI_wrp						\
    ((void  (*)(GLenum stream,GLshort nx,GLshort ny,GLshort nz                                        \
    ))GL_ENTRY_PTR(glNormalStream3sATI_Idx))


GLAPI void  APIENTRY glNormalStream3sATI(GLenum stream,GLshort nx,GLshort ny,GLshort nz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormalStream3sATI_Idx))
	{
            GL_ENTRY_PTR(glNormalStream3sATI_Idx) = dlsym(RTLD_NEXT,"glNormalStream3sATI");
            if(!GL_ENTRY_PTR(glNormalStream3sATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormalStream3sATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalStream3sATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalStream3sATI_wrp(stream,nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalStream3sATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalStream3sATI_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalStream3sATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalStream3sATI_Idx),
				 GL_ENTRY_LAST_TS(glNormalStream3sATI_Idx));
        if(last_diff > 1000000000){
            printf("glNormalStream3sATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalStream3sATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3sATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3sATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalStream3sATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalStream3sATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalStream3sATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalStream3sATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalStream3sATI_Idx) = get_ts();
        }


	

}