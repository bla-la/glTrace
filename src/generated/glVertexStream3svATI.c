#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream3svATI_wrp						\
    ((void  (*)(GLenum stream,const GLshort *coords                                        \
    ))GL_ENTRY_PTR(glVertexStream3svATI_Idx))


GLAPI void  APIENTRY glVertexStream3svATI(GLenum stream,const GLshort *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream3svATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream3svATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream3svATI");
            if(!GL_ENTRY_PTR(glVertexStream3svATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream3svATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream3svATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream3svATI_wrp(stream,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream3svATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream3svATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream3svATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream3svATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream3svATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream3svATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream3svATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream3svATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream3svATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream3svATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream3svATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream3svATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream3svATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream3svATI_Idx) = get_ts();
        }


	

}