#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixRotatefEXT_wrp						\
    ((void  (*)(GLenum mode,GLfloat angle,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glMatrixRotatefEXT_Idx))


GLAPI void  APIENTRY glMatrixRotatefEXT(GLenum mode,GLfloat angle,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixRotatefEXT_Idx))
	{
            GL_ENTRY_PTR(glMatrixRotatefEXT_Idx) = dlsym(RTLD_NEXT,"glMatrixRotatefEXT");
            if(!GL_ENTRY_PTR(glMatrixRotatefEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixRotatefEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixRotatefEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixRotatefEXT_wrp(mode,angle,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixRotatefEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixRotatefEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixRotatefEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixRotatefEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixRotatefEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixRotatefEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixRotatefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixRotatefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixRotatefEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixRotatefEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixRotatefEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixRotatefEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixRotatefEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixRotatefEXT_Idx) = get_ts();
        }


	

}