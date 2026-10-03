
void FUN_710002afb0(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  float fVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar2 = lib::L2CValue::operator==(param_4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xf8362c0f7);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xb74f0c5c0);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar2 = lib::L2CValue::operator==(param_4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xff465f061);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xb03f7f556);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    fVar4 = (float)app::lua_bind::MotionModule__frame_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    fVar4 = (float)app::lua_bind::MotionModule__rate_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack112,fVar4);
    HVar3 = lib::L2CValue::as_hash(aLStack96);
    fVar4 = (float)lib::L2CValue::as_number(aLStack80);
    fVar5 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,fVar4,fVar5,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar3 = lib::L2CValue::as_hash(aLStack96);
    fVar4 = (float)lib::L2CValue::as_number(aLStack80);
    fVar5 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,fVar4,fVar5,(bool)(bVar1 & 1),
               0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

