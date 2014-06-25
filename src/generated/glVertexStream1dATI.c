#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream1dATI_wrp						\
    ((void  (*)(GLenum stream,GLdouble x                                        \
    ))GL_ENTRY_PTR(glVertexStream1dATI_Idx))


GLAPI void  APIENTRY glVertexStream1dATI(GLenum stream,GLdouble x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream1dATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream1dATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream1dATI");
            if(!GL_ENTRY_PTR(glVertexStream1dATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream1dATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream1dATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream1dATI_wrp(stream,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream1dATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream1dATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream1dATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream1dATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream1dATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream1dATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream1dATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1dATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1dATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream1dATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream1dATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream1dATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream1dATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream1dATI_Idx) = get_ts();
        }


	

}