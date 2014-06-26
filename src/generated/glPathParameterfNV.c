#include <glTraceCommon.h>
#include <generated.h>

#define glPathParameterfNV_wrp						\
    ((void  (*)(GLuint path,GLenum pname,GLfloat value                                        \
    ))GL_ENTRY_PTR(glPathParameterfNV_Idx))


GLAPI void  APIENTRY glPathParameterfNV(GLuint path,GLenum pname,GLfloat value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPathParameterfNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathParameterfNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathParameterfNV_wrp(path,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathParameterfNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathParameterfNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathParameterfNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathParameterfNV_Idx),
				 GL_ENTRY_LAST_TS(glPathParameterfNV_Idx));


        if(last_diff > 1000000000){
            printf("glPathParameterfNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathParameterfNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathParameterfNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathParameterfNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathParameterfNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathParameterfNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathParameterfNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathParameterfNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathParameterfNV_Idx) = get_ts();
        }


	

}