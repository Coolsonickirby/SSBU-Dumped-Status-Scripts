
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003c460(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  HVar2 = lib::L2CValue::as_hash(param_3);
  fVar4 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar2,true);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar3 = lib::L2CValue::operator<(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    fVar4 = (float)app::lua_bind::MotionModule__frame_partial_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack64,fVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,true);
      lib::L2CValue::~L2CValue(aLStack64);
      goto LAB_710003c538;
    }
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,false);
LAB_710003c538:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

