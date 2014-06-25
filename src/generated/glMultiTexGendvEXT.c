#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexGendvEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum coord,GLenum pname,const GLdouble *params                                        \
    ))GL_ENTRY_PTR(glMultiTexGendvEXT_Idx))


GLAPI void  APIENTRY glMultiTexGendvEXT(GLenum texunit,GLenum coord,GLenum pname,const GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexGendvEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexGendvEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexGendvEXT");
            if(!GL_ENTRY_PTR(glMultiTexGendvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexGendvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexGendvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexGendvEXT_wrp(texunit,coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexGendvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexGendvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexGendvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexGendvEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexGendvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexGendvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexGendvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGendvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGendvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexGendvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexGendvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexGendvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexGendvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexGendvEXT_Idx) = get_ts();
        }


	

}