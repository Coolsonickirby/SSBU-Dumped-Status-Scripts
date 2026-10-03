
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000107a0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  FighterEntryID FVar4;
  void *pvVar5;
  float fVar6;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  fVar6 = (float)app::lua_bind::ControlModule__get_stick_x_no_clamp_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(param_1,fVar6);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack48,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  FVar4 = lib::L2CValue::as_integer(aLStack48);
  pvVar5 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                             (LUA_SCRIPT_LINE_STATUS_SHIFT,FVar4);
  lib::L2CValue::L2CValue(aLStack64,pvVar5);
  bVar1 = app::lua_bind::ControlModule__is_stick_reversed_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::operator-(param_1);
    lib::L2CValue::operator=(param_1,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

