#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream4iATI_wrp						\
    ((void  (*)(GLenum stream,GLint x,GLint y,GLint z,GLint w                                        \
    ))GL_ENTRY_PTR(glVertexStream4iATI_Idx))


GLAPI void  APIENTRY glVertexStream4iATI(GLenum stream,GLint x,GLint y,GLint z,GLint w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream4iATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream4iATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream4iATI");
            if(!GL_ENTRY_PTR(glVertexStream4iATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream4iATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream4iATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream4iATI_wrp(stream,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream4iATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream4iATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream4iATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream4iATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream4iATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream4iATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream4iATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4iATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4iATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream4iATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream4iATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream4iATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream4iATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream4iATI_Idx) = get_ts();
        }


	

}