// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_netsync_State
#define INCLUDED_kha_netsync_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,netsync,State)

namespace kha{
namespace netsync{


class HXCPP_CLASS_ATTRIBUTES State_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef State_obj OBJ_;
		State_obj();

	public:
		enum { _hx_ClassId = 0x48aa6bdd };

		void __construct(Float time, ::haxe::io::Bytes data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.netsync.State")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.netsync.State"); }
		static hx::ObjectPtr< State_obj > __new(Float time, ::haxe::io::Bytes data);
		static hx::ObjectPtr< State_obj > __alloc(hx::Ctx *_hx_ctx,Float time, ::haxe::io::Bytes data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~State_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("State",f1,e5,38,17); }

		Float time;
		 ::haxe::io::Bytes data;
		inline  ::haxe::io::Bytes _hx_set_data(hx::StackContext *_hx_ctx, ::haxe::io::Bytes _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return data=_hx_v; }
};

} // end namespace kha
} // end namespace netsync

#endif /* INCLUDED_kha_netsync_State */ 