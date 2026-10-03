
void FUN_71000174c0(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  uint uVar2;
  Hash40 HVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator=(aLStack96,param_3);
  HVar3 = lib::L2CValue::as_hash(param_2);
  fVar5 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,true);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::operator=(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      HVar3 = lib::L2CValue::as_hash(param_2);
      uVar2 = app::lua_bind::MotionModule__end_frame_from_hash_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3);
      lib::L2CValue::L2CValue(aLStack80,uVar2);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator/(aLStack128,aLStack96);
      lib::L2CValue::operator=(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar3 = lib::L2CValue::as_hash(param_2);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,fVar5,fVar6,(bool)(bVar1 & 1),
             0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

