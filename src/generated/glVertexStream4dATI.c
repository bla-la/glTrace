#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream4dATI_wrp						\
    ((void  (*)(GLenum stream,GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glVertexStream4dATI_Idx))


GLAPI void  APIENTRY glVertexStream4dATI(GLenum stream,GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream4dATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream4dATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream4dATI");
            if(!GL_ENTRY_PTR(glVertexStream4dATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream4dATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream4dATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream4dATI_wrp(stream,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream4dATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream4dATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream4dATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream4dATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream4dATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream4dATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream4dATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4dATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4dATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream4dATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream4dATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream4dATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream4dATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream4dATI_Idx) = get_ts();
        }


	

}