
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000f3e0(long param_1)

{
  GroundCorrectKind GVar1;
  L2CValue *this;
  ulong uVar2;
  Hash40 HVar3;
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
    GVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x14dd899136);
    HVar3 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,-1.0,1.0,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x105c3c1e76);
    HVar3 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,-1.0,1.0,0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

