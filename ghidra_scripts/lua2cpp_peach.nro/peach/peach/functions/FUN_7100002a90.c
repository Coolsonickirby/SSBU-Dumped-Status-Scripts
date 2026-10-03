
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100002a90(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(param_1,true);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_INSTANCE_WORK_ID_FLAG_JUMP_FROM_WATER);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack48,false);
    lib::L2CValue::operator=(param_1,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

