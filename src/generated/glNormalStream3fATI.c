#include <glTraceCommon.h>
#include <generated.h>

#define glNormalStream3fATI_wrp						\
    ((void  (*)(GLenum stream,GLfloat nx,GLfloat ny,GLfloat nz                                        \
    ))GL_ENTRY_PTR(glNormalStream3fATI_Idx))


GLAPI void  APIENTRY glNormalStream3fATI(GLenum stream,GLfloat nx,GLfloat ny,GLfloat nz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormalStream3fATI_Idx))
	{
            GL_ENTRY_PTR(glNormalStream3fATI_Idx) = dlsym(RTLD_NEXT,"glNormalStream3fATI");
            if(!GL_ENTRY_PTR(glNormalStream3fATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormalStream3fATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalStream3fATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalStream3fATI_wrp(stream,nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalStream3fATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalStream3fATI_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalStream3fATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalStream3fATI_Idx),
				 GL_ENTRY_LAST_TS(glNormalStream3fATI_Idx));
        if(last_diff > 1000000000){
            printf("glNormalStream3fATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalStream3fATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3fATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3fATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalStream3fATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalStream3fATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalStream3fATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalStream3fATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalStream3fATI_Idx) = get_ts();
        }


	

}