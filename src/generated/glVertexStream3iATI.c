#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream3iATI_wrp						\
    ((void  (*)(GLenum stream,GLint x,GLint y,GLint z                                        \
    ))GL_ENTRY_PTR(glVertexStream3iATI_Idx))


GLAPI void  APIENTRY glVertexStream3iATI(GLenum stream,GLint x,GLint y,GLint z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream3iATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream3iATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream3iATI");
            if(!GL_ENTRY_PTR(glVertexStream3iATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream3iATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream3iATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream3iATI_wrp(stream,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream3iATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream3iATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream3iATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream3iATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream3iATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream3iATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream3iATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream3iATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream3iATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream3iATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream3iATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream3iATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream3iATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream3iATI_Idx) = get_ts();
        }


	

}