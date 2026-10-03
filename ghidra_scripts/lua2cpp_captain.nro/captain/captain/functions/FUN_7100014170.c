
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014170(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_KNUCKLE_CLIFF_FALL_ONOFF);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),GVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND);
      GVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),GVar4);
    }
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

