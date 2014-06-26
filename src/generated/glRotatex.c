#include <glTraceCommon.h>
#include <generated.h>

#define glRotatex_wrp						\
    ((void  (*)(GLfixed angle,GLfixed x,GLfixed y,GLfixed z                                        \
    ))GL_ENTRY_PTR(glRotatex_Idx))


GLAPI void  APIENTRY glRotatex(GLfixed angle,GLfixed x,GLfixed y,GLfixed z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRotatex_Idx))
    	{
            GL_ENTRY_PREV_TS(glRotatex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRotatex_wrp(angle,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRotatex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRotatex_Idx) ++;

        GL_ENTRY_LAST_TS(glRotatex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRotatex_Idx),
				 GL_ENTRY_LAST_TS(glRotatex_Idx));


        if(last_diff > 1000000000){
            printf("glRotatex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRotatex_Idx),
	             GL_ENTRY_CALL_TIME(glRotatex_Idx),
	             GL_ENTRY_CALL_TIME(glRotatex_Idx) /
	             GL_ENTRY_CALL_COUNT(glRotatex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRotatex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRotatex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRotatex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRotatex_Idx) = get_ts();
        }


	

}