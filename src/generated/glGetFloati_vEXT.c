#include <glTraceCommon.h>
#include <generated.h>

#define glGetFloati_vEXT_wrp						\
    ((void  (*)(GLenum pname,GLuint index,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetFloati_vEXT_Idx))


GLAPI void  APIENTRY glGetFloati_vEXT(GLenum pname,GLuint index,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFloati_vEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFloati_vEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFloati_vEXT_wrp(pname,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFloati_vEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFloati_vEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFloati_vEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFloati_vEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetFloati_vEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetFloati_vEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFloati_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetFloati_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetFloati_vEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFloati_vEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFloati_vEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFloati_vEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFloati_vEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFloati_vEXT_Idx) = get_ts();
        }


	

}