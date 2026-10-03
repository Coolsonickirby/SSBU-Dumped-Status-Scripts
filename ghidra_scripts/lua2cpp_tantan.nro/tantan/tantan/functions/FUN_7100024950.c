
void FUN_7100024950(long param_1,L2CValue *param_2)

{
  byte bVar1;
  byte bVar2;
  Hash40 HVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,true);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::MotionModule__set_keep_pose_change_motion_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,-1.0);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,true);
  lib::L2CValue::L2CValue(aLStack144,true);
  HVar3 = lib::L2CValue::as_hash(param_2);
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  fVar5 = (float)lib::L2CValue::as_number(aLStack96);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  bVar2 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_inherit_frame_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,fVar4,fVar5,fVar6,
             (bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

