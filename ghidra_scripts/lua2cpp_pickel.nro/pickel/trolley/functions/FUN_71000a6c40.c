
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000a6c40(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  LinkAttribute LVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::LinkModule__is_link_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack80,_LINK_ATTRIBUTE_REFERENCE_PARENT_CONTROLLER);
    lib::L2CValue::L2CValue(aLStack96,true);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    LVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::LinkModule__set_attribute_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,LVar4,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

