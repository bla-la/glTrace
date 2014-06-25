#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream1fATI_wrp						\
    ((void  (*)(GLenum stream,GLfloat x                                        \
    ))GL_ENTRY_PTR(glVertexStream1fATI_Idx))


GLAPI void  APIENTRY glVertexStream1fATI(GLenum stream,GLfloat x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream1fATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream1fATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream1fATI");
            if(!GL_ENTRY_PTR(glVertexStream1fATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream1fATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream1fATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream1fATI_wrp(stream,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream1fATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream1fATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream1fATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream1fATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream1fATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream1fATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream1fATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1fATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1fATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream1fATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream1fATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream1fATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream1fATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream1fATI_Idx) = get_ts();
        }


	

}