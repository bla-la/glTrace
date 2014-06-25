#include <glTraceCommon.h>
#include <generated.h>

#define glColorMaski_wrp						\
    ((void  (*)(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a                                        \
    ))GL_ENTRY_PTR(glColorMaski_Idx))


GLAPI void  APIENTRY glColorMaski(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorMaski_Idx))
	{
            GL_ENTRY_PTR(glColorMaski_Idx) = dlsym(RTLD_NEXT,"glColorMaski");
            if(!GL_ENTRY_PTR(glColorMaski_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorMaski_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorMaski_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorMaski_wrp(index,r,g,b,a);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorMaski_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorMaski_Idx) ++;

        GL_ENTRY_LAST_TS(glColorMaski_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorMaski_Idx),
				 GL_ENTRY_LAST_TS(glColorMaski_Idx));
        if(last_diff > 1000000000){
            printf("glColorMaski %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorMaski_Idx),
	             GL_ENTRY_CALL_TIME(glColorMaski_Idx),
	             GL_ENTRY_CALL_TIME(glColorMaski_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorMaski_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorMaski_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorMaski_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorMaski_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorMaski_Idx) = get_ts();
        }


	

}