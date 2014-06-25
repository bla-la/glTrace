#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream2fvATI_wrp						\
    ((void  (*)(GLenum stream,const GLfloat *coords                                        \
    ))GL_ENTRY_PTR(glVertexStream2fvATI_Idx))


GLAPI void  APIENTRY glVertexStream2fvATI(GLenum stream,const GLfloat *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream2fvATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream2fvATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream2fvATI");
            if(!GL_ENTRY_PTR(glVertexStream2fvATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream2fvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream2fvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream2fvATI_wrp(stream,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream2fvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream2fvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream2fvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream2fvATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream2fvATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream2fvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream2fvATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2fvATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2fvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream2fvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream2fvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream2fvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream2fvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream2fvATI_Idx) = get_ts();
        }


	

}