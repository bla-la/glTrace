#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream4fATI_wrp						\
    ((void  (*)(GLenum stream,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glVertexStream4fATI_Idx))


GLAPI void  APIENTRY glVertexStream4fATI(GLenum stream,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexStream4fATI_Idx))
	{
            GL_ENTRY_PTR(glVertexStream4fATI_Idx) = dlsym(RTLD_NEXT,"glVertexStream4fATI");
            if(!GL_ENTRY_PTR(glVertexStream4fATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexStream4fATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream4fATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream4fATI_wrp(stream,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream4fATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream4fATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream4fATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream4fATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream4fATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexStream4fATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream4fATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4fATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4fATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream4fATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream4fATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream4fATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream4fATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream4fATI_Idx) = get_ts();
        }


	

}