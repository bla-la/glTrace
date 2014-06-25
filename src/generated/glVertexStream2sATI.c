#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream2sATI_wrp						\
    ((void  (*)(GLenum stream,GLshort x,GLshort y                                        \
    ))GL_ENTRY_PTR(glVertexStream2sATI_Idx))


GLAPI void  APIENTRY glVertexStream2sATI(GLenum stream,GLshort x,GLshort y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream2sATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream2sATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream2sATI");
            if(!GL_ENTRY_PTR(glVertexStream2sATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream2sATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream2sATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream2sATI_wrp(stream,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream2sATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream2sATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream2sATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream2sATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream2sATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream2sATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream2sATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2sATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2sATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream2sATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream2sATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream2sATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream2sATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream2sATI_Idx) = get_ts();
        }


	

}