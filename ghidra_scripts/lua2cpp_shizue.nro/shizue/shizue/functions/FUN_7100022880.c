
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100022880(L2CFighterShizue *this,L2CValue *return_value)

{
  ItemCommonParamInt IVar1;
  int iVar2;
  Item *pIVar3;
  ulong uVar4;
  L2CValue *in_x1;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack112,in_x1);
  lib::L2CValue::L2CValue(aLStack96,_ITEM_COMMON_PARAM_INT_HAVE_KIND);
  IVar1 = lib::L2CValue::as_integer(aLStack96);
  pIVar3 = (Item *)lib::L2CValue::as_pointer(aLStack112);
  iVar2 = app::lua_bind::Item__common_param_int_impl(pIVar3,IVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack64,_ITEM_HAVE_KIND_NONE);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,aLStack112);
    FUN_7100023540(aLStack64,this,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    pIVar3 = (Item *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::Item__end_hooked_impl(pIVar3);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

