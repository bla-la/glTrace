#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream4sATI_wrp						\
    ((void  (*)(GLenum stream,GLshort x,GLshort y,GLshort z,GLshort w                                        \
    ))GL_ENTRY_PTR(glVertexStream4sATI_Idx))


GLAPI void  APIENTRY glVertexStream4sATI(GLenum stream,GLshort x,GLshort y,GLshort z,GLshort w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream4sATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream4sATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream4sATI");
            if(!GL_ENTRY_PTR(glVertexStream4sATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream4sATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream4sATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream4sATI_wrp(stream,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream4sATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream4sATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream4sATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream4sATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream4sATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream4sATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream4sATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4sATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4sATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream4sATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream4sATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream4sATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream4sATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream4sATI_Idx) = get_ts();
        }


	

}