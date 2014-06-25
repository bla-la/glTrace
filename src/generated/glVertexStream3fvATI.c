#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream3fvATI_wrp						\
    ((void  (*)(GLenum stream,const GLfloat *coords                                        \
    ))GL_ENTRY_PTR(glVertexStream3fvATI_Idx))


GLAPI void  APIENTRY glVertexStream3fvATI(GLenum stream,const GLfloat *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream3fvATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream3fvATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream3fvATI");
            if(!GL_ENTRY_PTR(glVertexStream3fvATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream3fvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream3fvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream3fvATI_wrp(stream,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream3fvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream3fvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream3fvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream3fvATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream3fvATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream3fvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream3fvATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream3fvATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream3fvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream3fvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream3fvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream3fvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream3fvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream3fvATI_Idx) = get_ts();
        }


	

}