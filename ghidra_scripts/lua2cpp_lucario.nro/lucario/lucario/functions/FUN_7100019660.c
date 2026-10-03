
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019660(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) goto LAB_7100019710;
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar2 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::VisibilityModule__set_whole_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar2 & 1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_STATUS_WORK_ID_INT_SPLIT_FRAME_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100019710:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

