#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream1sATI_wrp						\
    ((void  (*)(GLenum stream,GLshort x                                        \
    ))GL_ENTRY_PTR(glVertexStream1sATI_Idx))


GLAPI void  APIENTRY glVertexStream1sATI(GLenum stream,GLshort x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream1sATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream1sATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream1sATI");
            if(!GL_ENTRY_PTR(glVertexStream1sATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream1sATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream1sATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream1sATI_wrp(stream,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream1sATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream1sATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream1sATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream1sATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream1sATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream1sATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream1sATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1sATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1sATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream1sATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream1sATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream1sATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream1sATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream1sATI_Idx) = get_ts();
        }


	

}