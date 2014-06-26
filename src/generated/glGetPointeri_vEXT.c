#include <glTraceCommon.h>
#include <generated.h>

#define glGetPointeri_vEXT_wrp						\
    ((void  (*)(GLenum pname,GLuint index,void **params                                        \
    ))GL_ENTRY_PTR(glGetPointeri_vEXT_Idx))


GLAPI void  APIENTRY glGetPointeri_vEXT(GLenum pname,GLuint index,void **params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPointeri_vEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPointeri_vEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPointeri_vEXT_wrp(pname,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPointeri_vEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPointeri_vEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPointeri_vEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPointeri_vEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetPointeri_vEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetPointeri_vEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPointeri_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetPointeri_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetPointeri_vEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPointeri_vEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPointeri_vEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPointeri_vEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPointeri_vEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPointeri_vEXT_Idx) = get_ts();
        }


	

}