
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f3a0(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar2 = (bVar2 & 1U) != 0;
  if (bVar2) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_WAIT);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(param_1,(uint)bVar2);
  return;
}

