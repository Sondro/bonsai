// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_VertexElement
#include <hxinc/kha/graphics4/VertexElement.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <hxinc/kha/graphics4/VertexStructure.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2fb7b29675aad1d3_7_new,"kha.graphics4.VertexStructure","new",0x4962dad2,"kha.graphics4.VertexStructure.new","kha/graphics4/VertexStructure.hx",7,0xec7e48a0)
HX_LOCAL_STACK_FRAME(_hx_pos_2fb7b29675aad1d3_13_add,"kha.graphics4.VertexStructure","add",0x4958fc93,"kha.graphics4.VertexStructure.add","kha/graphics4/VertexStructure.hx",13,0xec7e48a0)
HX_LOCAL_STACK_FRAME(_hx_pos_2fb7b29675aad1d3_18_size,"kha.graphics4.VertexStructure","size",0xf06dba0f,"kha.graphics4.VertexStructure.size","kha/graphics4/VertexStructure.hx",18,0xec7e48a0)
HX_LOCAL_STACK_FRAME(_hx_pos_2fb7b29675aad1d3_21_byteSize,"kha.graphics4.VertexStructure","byteSize",0xf3dbe837,"kha.graphics4.VertexStructure.byteSize","kha/graphics4/VertexStructure.hx",21,0xec7e48a0)
HX_LOCAL_STACK_FRAME(_hx_pos_2fb7b29675aad1d3_32_dataByteSize,"kha.graphics4.VertexStructure","dataByteSize",0xdfdf7381,"kha.graphics4.VertexStructure.dataByteSize","kha/graphics4/VertexStructure.hx",32,0xec7e48a0)
HX_LOCAL_STACK_FRAME(_hx_pos_2fb7b29675aad1d3_53_get,"kha.graphics4.VertexStructure","get",0x495d8b08,"kha.graphics4.VertexStructure.get","kha/graphics4/VertexStructure.hx",53,0xec7e48a0)
namespace kha{
namespace graphics4{

void VertexStructure_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2fb7b29675aad1d3_7_new)
HXLINE(   8)		this->_hx_set_elements(HX_CTX, ::Array_obj< ::Dynamic>::__new());
HXLINE(   9)		this->instanced = false;
            	}

Dynamic VertexStructure_obj::__CreateEmpty() { return new VertexStructure_obj; }

void *VertexStructure_obj::_hx_vtable = 0;

Dynamic VertexStructure_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VertexStructure_obj > _hx_result = new VertexStructure_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VertexStructure_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a19a30a;
}

void VertexStructure_obj::add(::String name,int data){
            	HX_GC_STACKFRAME(&_hx_pos_2fb7b29675aad1d3_13_add)
HXDLIN(  13)		::Array< ::Dynamic> _hx_tmp = this->elements;
HXDLIN(  13)		_hx_tmp->push( ::kha::graphics4::VertexElement_obj::__alloc( HX_CTX ,name,data));
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexStructure_obj,add,(void))

int VertexStructure_obj::size(){
            	HX_STACKFRAME(&_hx_pos_2fb7b29675aad1d3_18_size)
HXDLIN(  18)		return this->elements->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexStructure_obj,size,return )

int VertexStructure_obj::byteSize(){
            	HX_STACKFRAME(&_hx_pos_2fb7b29675aad1d3_21_byteSize)
HXLINE(  22)		int byteSize = 0;
HXLINE(  24)		{
HXLINE(  24)			int _g = 0;
HXDLIN(  24)			int _g1 = this->elements->length;
HXDLIN(  24)			while((_g < _g1)){
HXLINE(  24)				_g = (_g + 1);
HXDLIN(  24)				int i = (_g - 1);
HXLINE(  25)				byteSize = (byteSize + this->dataByteSize(this->elements->__get(i).StaticCast<  ::kha::graphics4::VertexElement >()->data));
            			}
            		}
HXLINE(  28)		return byteSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexStructure_obj,byteSize,return )

int VertexStructure_obj::dataByteSize(int data){
            	HX_STACKFRAME(&_hx_pos_2fb7b29675aad1d3_32_dataByteSize)
HXDLIN(  32)		switch((int)(data)){
            			case (int)0: {
HXLINE(  34)				return 4;
            			}
            			break;
            			case (int)1: {
HXLINE(  36)				return 8;
            			}
            			break;
            			case (int)2: {
HXLINE(  38)				return 12;
            			}
            			break;
            			case (int)3: {
HXLINE(  40)				return 16;
            			}
            			break;
            			case (int)4: {
HXLINE(  42)				return 64;
            			}
            			break;
            			case (int)5: {
HXLINE(  44)				return 4;
            			}
            			break;
            			case (int)6: {
HXLINE(  46)				return 8;
            			}
            			break;
            		}
HXLINE(  32)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VertexStructure_obj,dataByteSize,return )

 ::kha::graphics4::VertexElement VertexStructure_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_2fb7b29675aad1d3_53_get)
HXDLIN(  53)		return this->elements->__get(index).StaticCast<  ::kha::graphics4::VertexElement >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(VertexStructure_obj,get,return )


hx::ObjectPtr< VertexStructure_obj > VertexStructure_obj::__new() {
	hx::ObjectPtr< VertexStructure_obj > __this = new VertexStructure_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VertexStructure_obj > VertexStructure_obj::__alloc(hx::Ctx *_hx_ctx) {
	VertexStructure_obj *__this = (VertexStructure_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VertexStructure_obj), true, "kha.graphics4.VertexStructure"));
	*(void **)__this = VertexStructure_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VertexStructure_obj::VertexStructure_obj()
{
}

void VertexStructure_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexStructure);
	HX_MARK_MEMBER_NAME(elements,"elements");
	HX_MARK_MEMBER_NAME(instanced,"instanced");
	HX_MARK_END_CLASS();
}

void VertexStructure_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elements,"elements");
	HX_VISIT_MEMBER_NAME(instanced,"instanced");
}

hx::Val VertexStructure_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { return hx::Val( elements ); }
		if (HX_FIELD_EQ(inName,"byteSize") ) { return hx::Val( byteSize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instanced") ) { return hx::Val( instanced ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataByteSize") ) { return hx::Val( dataByteSize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VertexStructure_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { _hx_set_elements(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instanced") ) { instanced=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexStructure_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("elements",37,36,c4,83));
	outFields->push(HX_("instanced",2f,83,1a,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo VertexStructure_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(VertexStructure_obj,elements),HX_("elements",37,36,c4,83)},
	{hx::fsBool,(int)offsetof(VertexStructure_obj,instanced),HX_("instanced",2f,83,1a,4b)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VertexStructure_obj_sStaticStorageInfo = 0;
#endif

static ::String VertexStructure_obj_sMemberFields[] = {
	HX_("elements",37,36,c4,83),
	HX_("instanced",2f,83,1a,4b),
	HX_("add",21,f2,49,00),
	HX_("size",c1,a0,53,4c),
	HX_("byteSize",e9,0f,00,4d),
	HX_("dataByteSize",33,5c,f6,b8),
	HX_("get",96,80,4e,00),
	::String(null()) };

hx::Class VertexStructure_obj::__mClass;

void VertexStructure_obj::__register()
{
	VertexStructure_obj _hx_dummy;
	VertexStructure_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics4.VertexStructure",e0,c9,4c,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VertexStructure_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexStructure_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexStructure_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexStructure_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4