
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710012db40(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),10);
  lib::L2CValue::L2CValue(aLStack96,pLVar4);
  FUN_710012d860(aLStack80,aLStack96);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    FUN_7100133590(aLStack112,param_1);
    lib::L2CValue::~L2CValue(aLStack112);
    FUN_7100134c80(param_1);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    lib::L2CValue::L2CValue(aLStack80,true);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::MotionModule__enable_set_frame_2nd_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::ItemModule__set_change_status_event_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack64);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_COUNT_TO_GENERATE_PICKELOBJECT
              );
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

