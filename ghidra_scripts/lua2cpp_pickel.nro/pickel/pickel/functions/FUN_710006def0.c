
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710006def0(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue
            (aLStack48,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack48);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,0);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

