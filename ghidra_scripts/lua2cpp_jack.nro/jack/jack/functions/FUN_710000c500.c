
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000c500(long param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    HVar5 = lib::L2CValue::as_hash(param_2);
    fVar6 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,true);
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      HVar5 = lib::L2CValue::as_hash(param_2);
      uVar3 = app::lua_bind::MotionModule__end_frame_from_hash_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5);
      lib::L2CValue::L2CValue(aLStack80,uVar3);
      lib::L2CValue::operator/(aLStack80,aLStack96);
      lib::L2CValue::operator=(aLStack112,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::operator/(aLStack128,aLStack96);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(param_2);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar6,fVar7,(bool)(bVar1 & 1),
             0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

