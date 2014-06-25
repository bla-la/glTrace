#include <glTraceCommon.h>
#include <generated.h>

#define glTranslatex_wrp						\
    ((void  (*)(GLfixed x,GLfixed y,GLfixed z                                        \
    ))GL_ENTRY_PTR(glTranslatex_Idx))


GLAPI void  APIENTRY glTranslatex(GLfixed x,GLfixed y,GLfixed z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTranslatex_Idx))
	{
            GL_ENTRY_PTR(glTranslatex_Idx) = dlsym(RTLD_NEXT,"glTranslatex");
            if(!GL_ENTRY_PTR(glTranslatex_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTranslatex_Idx))
    	{
            GL_ENTRY_PREV_TS(glTranslatex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTranslatex_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTranslatex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTranslatex_Idx) ++;

        GL_ENTRY_LAST_TS(glTranslatex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTranslatex_Idx),
				 GL_ENTRY_LAST_TS(glTranslatex_Idx));
        if(last_diff > 1000000000){
            printf("glTranslatex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTranslatex_Idx),
	             GL_ENTRY_CALL_TIME(glTranslatex_Idx),
	             GL_ENTRY_CALL_TIME(glTranslatex_Idx) /
	             GL_ENTRY_CALL_COUNT(glTranslatex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTranslatex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTranslatex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTranslatex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTranslatex_Idx) = get_ts();
        }


	

}