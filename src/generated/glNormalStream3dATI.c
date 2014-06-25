#include <glTraceCommon.h>
#include <generated.h>

#define glNormalStream3dATI_wrp						\
    ((void  (*)(GLenum stream,GLdouble nx,GLdouble ny,GLdouble nz                                        \
    ))GL_ENTRY_PTR(glNormalStream3dATI_Idx))


GLAPI void  APIENTRY glNormalStream3dATI(GLenum stream,GLdouble nx,GLdouble ny,GLdouble nz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormalStream3dATI_Idx))
	{
            GL_ENTRY_PTR(glNormalStream3dATI_Idx) = dlsym(RTLD_NEXT,"glNormalStream3dATI");
            if(!GL_ENTRY_PTR(glNormalStream3dATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormalStream3dATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalStream3dATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalStream3dATI_wrp(stream,nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalStream3dATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalStream3dATI_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalStream3dATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalStream3dATI_Idx),
				 GL_ENTRY_LAST_TS(glNormalStream3dATI_Idx));
        if(last_diff > 1000000000){
            printf("glNormalStream3dATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalStream3dATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3dATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3dATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalStream3dATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalStream3dATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalStream3dATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalStream3dATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalStream3dATI_Idx) = get_ts();
        }


	

}