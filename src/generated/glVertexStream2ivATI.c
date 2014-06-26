#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream2ivATI_wrp						\
    ((void  (*)(GLenum stream,const GLint *coords                                        \
    ))GL_ENTRY_PTR(glVertexStream2ivATI_Idx))


GLAPI void  APIENTRY glVertexStream2ivATI(GLenum stream,const GLint *coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexStream2ivATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream2ivATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream2ivATI_wrp(stream,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream2ivATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream2ivATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream2ivATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream2ivATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream2ivATI_Idx));


        if(last_diff > 1000000000){
            printf("glVertexStream2ivATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream2ivATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2ivATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2ivATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream2ivATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream2ivATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream2ivATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream2ivATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream2ivATI_Idx) = get_ts();
        }


	

}