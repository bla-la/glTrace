#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveAttribARB_wrp						\
    ((void  (*)(GLhandleARB programObj,GLuint index,GLsizei maxLength,GLsizei *length,GLint *size,GLenum *type,GLcharARB *name                                        \
    ))GL_ENTRY_PTR(glGetActiveAttribARB_Idx))


GLAPI void  APIENTRY glGetActiveAttribARB(GLhandleARB programObj,GLuint index,GLsizei maxLength,GLsizei *length,GLint *size,GLenum *type,GLcharARB *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetActiveAttribARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveAttribARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveAttribARB_wrp(programObj,index,maxLength,length,size,type,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveAttribARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveAttribARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveAttribARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveAttribARB_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveAttribARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetActiveAttribARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveAttribARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveAttribARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveAttribARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveAttribARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveAttribARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveAttribARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveAttribARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveAttribARB_Idx) = get_ts();
        }


	

}