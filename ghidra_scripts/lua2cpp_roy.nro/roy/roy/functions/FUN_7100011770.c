
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011770(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_FINAL_WORK_INT_INFO_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator-(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if (-1 < iVar3) {
    iVar6 = -1;
    do {
      lib::L2CValue::L2CValue
                (aLStack112,iVar6 + _FIGHTER_ROY_STATUS_FINAL_WORK_INT_INFO_TASK_ID + 1);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        uVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::EffectModule__remove_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,0);
      }
      lib::L2CValue::~L2CValue(aLStack80);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

