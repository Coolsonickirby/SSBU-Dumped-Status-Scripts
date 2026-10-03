
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100031260(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,0);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_GAMEWATCH_BOMB_STATUS_WORK_INT_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

