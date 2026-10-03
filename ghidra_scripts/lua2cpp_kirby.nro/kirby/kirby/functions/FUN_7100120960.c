
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100120960(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),10);
  lib::L2CValue::L2CValue(aLStack80,pLVar3);
  FUN_7100120720(aLStack64,aLStack80);
  lib::L2CValue::L2CValue(aLStack48,false);
  uVar4 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    lib::L2CValue::L2CValue(aLStack64,true);
    iVar2 = lib::L2CValue::as_integer(aLStack48);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::MotionModule__enable_set_frame_2nd_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,false);
    bVar1 = lib::L2CValue::as_bool(aLStack48);
    app::lua_bind::ItemModule__set_change_status_event_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

