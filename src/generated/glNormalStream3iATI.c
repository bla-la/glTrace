#include <glTraceCommon.h>
#include <generated.h>

#define glNormalStream3iATI_wrp						\
    ((void  (*)(GLenum stream,GLint nx,GLint ny,GLint nz                                        \
    ))GL_ENTRY_PTR(glNormalStream3iATI_Idx))


GLAPI void  APIENTRY glNormalStream3iATI(GLenum stream,GLint nx,GLint ny,GLint nz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormalStream3iATI_Idx))
	{
            GL_ENTRY_PTR(glNormalStream3iATI_Idx) = dlsym(RTLD_NEXT,"glNormalStream3iATI");
            if(!GL_ENTRY_PTR(glNormalStream3iATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormalStream3iATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalStream3iATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalStream3iATI_wrp(stream,nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalStream3iATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalStream3iATI_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalStream3iATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalStream3iATI_Idx),
				 GL_ENTRY_LAST_TS(glNormalStream3iATI_Idx));
        if(last_diff > 1000000000){
            printf("glNormalStream3iATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalStream3iATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3iATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3iATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalStream3iATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalStream3iATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalStream3iATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalStream3iATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalStream3iATI_Idx) = get_ts();
        }


	

}