#include <glTraceCommon.h>
#include <generated.h>

#define glInsertComponentEXT_wrp						\
    ((void  (*)(GLuint res,GLuint src,GLuint num                                        \
    ))GL_ENTRY_PTR(glInsertComponentEXT_Idx))


GLAPI void  APIENTRY glInsertComponentEXT(GLuint res,GLuint src,GLuint num)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glInsertComponentEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glInsertComponentEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInsertComponentEXT_wrp(res,src,num);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInsertComponentEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInsertComponentEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glInsertComponentEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInsertComponentEXT_Idx),
				 GL_ENTRY_LAST_TS(glInsertComponentEXT_Idx));


        if(last_diff > 1000000000){
            printf("glInsertComponentEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInsertComponentEXT_Idx),
	             GL_ENTRY_CALL_TIME(glInsertComponentEXT_Idx),
	             GL_ENTRY_CALL_TIME(glInsertComponentEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glInsertComponentEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInsertComponentEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInsertComponentEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInsertComponentEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInsertComponentEXT_Idx) = get_ts();
        }


	

}