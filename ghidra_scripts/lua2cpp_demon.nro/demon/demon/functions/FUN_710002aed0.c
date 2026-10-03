
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002aed0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
  lua2cpp::L2CFighterCommon::sub_GetLightItemImm(param_2,(L2CValue)0xc0);
  lib::L2CValue::~L2CValue(aLStack64);
  iVar1 = app::lua_bind::StatusModule__status_kind_que_from_script_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack48,_STATUS_KIND_NONE);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(param_1,(uVar2 & 1) == 0);
  return;
}

