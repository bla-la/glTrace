#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream1dvATI_wrp						\
    ((void  (*)(GLenum stream,const GLdouble *coords                                        \
    ))GL_ENTRY_PTR(glVertexStream1dvATI_Idx))


GLAPI void  APIENTRY glVertexStream1dvATI(GLenum stream,const GLdouble *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream1dvATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream1dvATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream1dvATI");
            if(!GL_ENTRY_PTR(glVertexStream1dvATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream1dvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream1dvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream1dvATI_wrp(stream,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream1dvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream1dvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream1dvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream1dvATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream1dvATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream1dvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream1dvATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1dvATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1dvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream1dvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream1dvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream1dvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream1dvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream1dvATI_Idx) = get_ts();
        }


	

}