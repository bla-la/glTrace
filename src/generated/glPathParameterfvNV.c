#include <glTraceCommon.h>
#include <generated.h>

#define glPathParameterfvNV_wrp						\
    ((void  (*)(GLuint path,GLenum pname,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glPathParameterfvNV_Idx))


GLAPI void  APIENTRY glPathParameterfvNV(GLuint path,GLenum pname,const GLfloat *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPathParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathParameterfvNV_wrp(path,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glPathParameterfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glPathParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathParameterfvNV_Idx) = get_ts();
        }


	

}