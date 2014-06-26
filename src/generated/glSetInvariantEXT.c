#include <glTraceCommon.h>
#include <generated.h>

#define glSetInvariantEXT_wrp						\
    ((void  (*)(GLuint id,GLenum type,const void *addr                                        \
    ))GL_ENTRY_PTR(glSetInvariantEXT_Idx))


GLAPI void  APIENTRY glSetInvariantEXT(GLuint id,GLenum type,const void *addr)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSetInvariantEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSetInvariantEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSetInvariantEXT_wrp(id,type,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSetInvariantEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSetInvariantEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSetInvariantEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSetInvariantEXT_Idx),
				 GL_ENTRY_LAST_TS(glSetInvariantEXT_Idx));


        if(last_diff > 1000000000){
            printf("glSetInvariantEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSetInvariantEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSetInvariantEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSetInvariantEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSetInvariantEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSetInvariantEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSetInvariantEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSetInvariantEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSetInvariantEXT_Idx) = get_ts();
        }


	

}