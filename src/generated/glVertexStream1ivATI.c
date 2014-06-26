#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream1ivATI_wrp						\
    ((void  (*)(GLenum stream,const GLint *coords                                        \
    ))GL_ENTRY_PTR(glVertexStream1ivATI_Idx))


GLAPI void  APIENTRY glVertexStream1ivATI(GLenum stream,const GLint *coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexStream1ivATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream1ivATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream1ivATI_wrp(stream,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream1ivATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream1ivATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream1ivATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream1ivATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream1ivATI_Idx));


        if(last_diff > 1000000000){
            printf("glVertexStream1ivATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream1ivATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1ivATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1ivATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream1ivATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream1ivATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream1ivATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream1ivATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream1ivATI_Idx) = get_ts();
        }


	

}