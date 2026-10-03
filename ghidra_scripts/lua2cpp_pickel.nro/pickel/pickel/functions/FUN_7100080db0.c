
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100080db0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  int iVar2;
  L2CValue *this;
  ulong uVar3;
  bool bVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,10);
  iVar2 = lib::L2CValue::as_integer(this);
  bVar1 = app::FighterSpecializer_Pickel::is_status_kind_attack(iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    lua2cpp::L2CFighterCommon::sub_GetLightItemImm(param_2,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    iVar2 = app::lua_bind::StatusModule__status_kind_que_from_script_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::L2CValue(aLStack64,_STATUS_KIND_NONE);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      bVar4 = true;
      goto LAB_7100080ea0;
    }
  }
  bVar4 = false;
LAB_7100080ea0:
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

