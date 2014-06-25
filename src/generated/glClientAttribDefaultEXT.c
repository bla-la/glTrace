#include <glTraceCommon.h>
#include <generated.h>

#define glClientAttribDefaultEXT_wrp						\
    ((void  (*)(GLbitfield mask                                        \
    ))GL_ENTRY_PTR(glClientAttribDefaultEXT_Idx))


GLAPI void  APIENTRY glClientAttribDefaultEXT(GLbitfield mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClientAttribDefaultEXT_Idx))
	{
            GL_ENTRY_PTR(glClientAttribDefaultEXT_Idx) = dlsym(RTLD_NEXT,"glClientAttribDefaultEXT");
            if(!GL_ENTRY_PTR(glClientAttribDefaultEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClientAttribDefaultEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glClientAttribDefaultEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClientAttribDefaultEXT_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClientAttribDefaultEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClientAttribDefaultEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glClientAttribDefaultEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClientAttribDefaultEXT_Idx),
				 GL_ENTRY_LAST_TS(glClientAttribDefaultEXT_Idx));
        if(last_diff > 1000000000){
            printf("glClientAttribDefaultEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClientAttribDefaultEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClientAttribDefaultEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClientAttribDefaultEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glClientAttribDefaultEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClientAttribDefaultEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClientAttribDefaultEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClientAttribDefaultEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClientAttribDefaultEXT_Idx) = get_ts();
        }


	

}